// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DeveloperSettings.h"
#include "InstanceServerSubsystem.generated.h"

/**
 * 
 */


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQueueUpdateDelegate, int, NumberQueue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewServerUpdateDelegate, FString, ServerIP, FString, Port);

class IWebSocket;
class FTSTicker;
class FSocket;

UCLASS(Config = Game, defaultconfig) // Give it a better looking name in UI
class UInstanceServerSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "InstanceServer Developer Settings")
	FString ServerURL = TEXT("tpc://127.0.0.255");

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "InstanceServer Developer Settings")
	FString ServerProtocol = TEXT("tpc");

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "InstanceServer Developer Settings")
	int ServerPort = 8888;

	virtual FName GetCategoryName() const override;
	virtual FName GetSectionName() const override;

};


UCLASS()
class INSTANCESERVERPLUGIN_API UInstanceServerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "InstanceServerSubsystem")
	void SendMapData(FString MapName, FString PlayerIP);

	bool ListenForServerResponse();

	void OnQueueUpdate(int32 QueueSize);

	void OnServerCreated(FString ServerIP, FString Port);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "InstanceServerSubsystem")
	static FString GetLocalIPAddress();

	UPROPERTY(BlueprintAssignable)
	FQueueUpdateDelegate QueueUpdateDelegate;

	UPROPERTY(BlueprintAssignable)
	FNewServerUpdateDelegate NewServerUpdateDelegate;

	FSocket* Socket;
};
