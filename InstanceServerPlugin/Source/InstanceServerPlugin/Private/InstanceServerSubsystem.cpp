// Fill out your copyright notice in the Description page of Project Settings.


#include "InstanceServerSubsystem.h"
#include "WebSocketsModule.h" // Module definition
#include "IWebSocket.h"   
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Containers/Ticker.h"
#include "Json.h" 

void UInstanceServerSubsystem::SendMapData(FString MapName, FString PlayerIP)
{
    UInstanceServerSettings* InstanceServerSettings = const_cast<UInstanceServerSettings*>(GetDefault<UInstanceServerSettings>());

    const FString Address = InstanceServerSettings->ServerURL;
    FIPv4Address IP;
    FIPv4Address::Parse(Address, IP);

    TSharedRef<FInternetAddr, ESPMode::ThreadSafe> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
    Addr->SetIp(IP.Value);
    Addr->SetPort(InstanceServerSettings->ServerPort);

    Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("MapDataSocket"), false);

    if (Socket->Connect(*Addr))
    {
        FString SendingText = FString::Printf(TEXT("%s|%s"), *MapName, *PlayerIP);
        int32 BytesSent = 0;
        Socket->SetNonBlocking(true);
        if (Socket->Send((uint8*)TCHAR_TO_UTF8(*SendingText), SendingText.Len(), BytesSent))
        {
            UE_LOG(LogTemp, Warning, TEXT("Data Sent Successfully"));
            FTSTicker::GetCoreTicker().AddTicker(
                FTickerDelegate::CreateLambda([this](float DeltaTime) -> bool
                    {    
                        return ListenForServerResponse();
                    }),
                0.1f 
            );
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to Send Data"));
            Socket->Close();
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to Connect to Server"));
        Socket->Close();
    }
}

FString ExtractFirstBracesContent(const FString& Input)
{
    int32 OpenBraceIndex = Input.Find(TEXT("{"));
    if (OpenBraceIndex == INDEX_NONE)
    {
        return TEXT(""); 
    }

    int32 CloseBraceIndex = Input.Find(TEXT("}"), ESearchCase::IgnoreCase, ESearchDir::FromStart, OpenBraceIndex);
    if (CloseBraceIndex == INDEX_NONE)
    {
        return TEXT(""); 
    }

    return Input.Mid(OpenBraceIndex, CloseBraceIndex - OpenBraceIndex + 1);
}

FString RemoveNonStandardCharacters(const FString& Input)
{
    FString CleanString;
    for (TCHAR Char : Input)
    {
        if (FChar::IsPrint(Char) || FChar::IsWhitespace(Char))
        {
            CleanString.AppendChar(Char);
        }
    }
    return ExtractFirstBracesContent(CleanString);
}

bool UInstanceServerSubsystem::ListenForServerResponse()
{
    uint8 Buffer[1024];
    int32 BytesRead = 0;

    if (!Socket)
    {
        return false;
    }

    if (Socket->Recv(Buffer, sizeof(Buffer), BytesRead))
    {
        FString ReceivedData = FString(ANSI_TO_TCHAR(reinterpret_cast<const char*>(Buffer)));
        ReceivedData = RemoveNonStandardCharacters(ReceivedData);
        UE_LOG(LogTemp, Warning, TEXT("Received Data: %s"), *ReceivedData);

        TSharedPtr<FJsonObject> JsonObject;
        auto JsonReader = TJsonReaderFactory<>::Create(ReceivedData);

        if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
        {
            if (JsonObject->HasField("Queue"))
            {
                int32 QueueSize = JsonObject->GetIntegerField("Queue");
                OnQueueUpdate(QueueSize);
                return true;
            }
            else if (JsonObject->HasField("ServerIP"))
            {
                FString ServerIP = JsonObject->GetStringField("ServerIP");
                FString Port = JsonObject->GetStringField("Port");
                OnServerCreated(ServerIP, Port);
                Socket->Close();
                return false;
            }
        }
    }
    return true;
}

void UInstanceServerSubsystem::OnQueueUpdate(int32 QueueSize)
{
    UE_LOG(LogTemp, Warning, TEXT("Players in queue: %d"), QueueSize);
    QueueUpdateDelegate.Broadcast(QueueSize);
}

void UInstanceServerSubsystem::OnServerCreated(FString ServerIP, FString Port)
{
    UE_LOG(LogTemp, Warning, TEXT("New server created at: %s"), *FString(ServerIP + "Port " + Port));
    NewServerUpdateDelegate.Broadcast(ServerIP, Port);
}

FString UInstanceServerSubsystem::GetLocalIPAddress()
{
    bool bCanBindAll;
    TSharedPtr<class FInternetAddr> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBindAll);
    FString IP = Addr->ToString(false);
    return IP;
}


FName UInstanceServerSettings::GetCategoryName() const
{
    return TEXT("Plugins");
}

FName UInstanceServerSettings::GetSectionName() const
{
    return TEXT("InstanceServer Developer Settings");;
}

