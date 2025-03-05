// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstanceServerPlugin/Public/InstanceServerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstanceServerSubsystem() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
INSTANCESERVERPLUGIN_API UClass* Z_Construct_UClass_UInstanceServerSettings();
INSTANCESERVERPLUGIN_API UClass* Z_Construct_UClass_UInstanceServerSettings_NoRegister();
INSTANCESERVERPLUGIN_API UClass* Z_Construct_UClass_UInstanceServerSubsystem();
INSTANCESERVERPLUGIN_API UClass* Z_Construct_UClass_UInstanceServerSubsystem_NoRegister();
INSTANCESERVERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature();
INSTANCESERVERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InstanceServerPlugin();
// End Cross Module References

// Begin Delegate FQueueUpdateDelegate
struct Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics
{
	struct _Script_InstanceServerPlugin_eventQueueUpdateDelegate_Parms
	{
		int32 NumberQueue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::NewProp_NumberQueue = { "NumberQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InstanceServerPlugin_eventQueueUpdateDelegate_Parms, NumberQueue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::NewProp_NumberQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InstanceServerPlugin, nullptr, "QueueUpdateDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::_Script_InstanceServerPlugin_eventQueueUpdateDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::_Script_InstanceServerPlugin_eventQueueUpdateDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FQueueUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& QueueUpdateDelegate, int32 NumberQueue)
{
	struct _Script_InstanceServerPlugin_eventQueueUpdateDelegate_Parms
	{
		int32 NumberQueue;
	};
	_Script_InstanceServerPlugin_eventQueueUpdateDelegate_Parms Parms;
	Parms.NumberQueue=NumberQueue;
	QueueUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FQueueUpdateDelegate

// Begin Delegate FNewServerUpdateDelegate
struct Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics
{
	struct _Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms
	{
		FString ServerIP;
		FString Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms, ServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InstanceServerPlugin, nullptr, "NewServerUpdateDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::_Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::_Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNewServerUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewServerUpdateDelegate, const FString& ServerIP, const FString& Port)
{
	struct _Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms
	{
		FString ServerIP;
		FString Port;
	};
	_Script_InstanceServerPlugin_eventNewServerUpdateDelegate_Parms Parms;
	Parms.ServerIP=ServerIP;
	Parms.Port=Port;
	NewServerUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNewServerUpdateDelegate

// Begin Class UInstanceServerSettings
void UInstanceServerSettings::StaticRegisterNativesUInstanceServerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInstanceServerSettings);
UClass* Z_Construct_UClass_UInstanceServerSettings_NoRegister()
{
	return UInstanceServerSettings::StaticClass();
}
struct Z_Construct_UClass_UInstanceServerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InstanceServerSubsystem.h" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[] = {
		{ "Category", "InstanceServer Developer Settings" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerProtocol_MetaData[] = {
		{ "Category", "InstanceServer Developer Settings" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[] = {
		{ "Category", "InstanceServer Developer Settings" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerProtocol;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstanceServerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInstanceServerSettings_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstanceServerSettings, ServerURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerURL_MetaData), NewProp_ServerURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInstanceServerSettings_Statics::NewProp_ServerProtocol = { "ServerProtocol", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstanceServerSettings, ServerProtocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerProtocol_MetaData), NewProp_ServerProtocol_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstanceServerSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstanceServerSettings, ServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPort_MetaData), NewProp_ServerPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstanceServerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanceServerSettings_Statics::NewProp_ServerURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanceServerSettings_Statics::NewProp_ServerProtocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanceServerSettings_Statics::NewProp_ServerPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInstanceServerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InstanceServerPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInstanceServerSettings_Statics::ClassParams = {
	&UInstanceServerSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInstanceServerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInstanceServerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInstanceServerSettings()
{
	if (!Z_Registration_Info_UClass_UInstanceServerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInstanceServerSettings.OuterSingleton, Z_Construct_UClass_UInstanceServerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInstanceServerSettings.OuterSingleton;
}
template<> INSTANCESERVERPLUGIN_API UClass* StaticClass<UInstanceServerSettings>()
{
	return UInstanceServerSettings::StaticClass();
}
UInstanceServerSettings::UInstanceServerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInstanceServerSettings);
UInstanceServerSettings::~UInstanceServerSettings() {}
// End Class UInstanceServerSettings

// Begin Class UInstanceServerSubsystem Function GetLocalIPAddress
struct Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics
{
	struct InstanceServerSubsystem_eventGetLocalIPAddress_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InstanceServerSubsystem" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstanceServerSubsystem_eventGetLocalIPAddress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstanceServerSubsystem, nullptr, "GetLocalIPAddress", nullptr, nullptr, Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::InstanceServerSubsystem_eventGetLocalIPAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::InstanceServerSubsystem_eventGetLocalIPAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstanceServerSubsystem::execGetLocalIPAddress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInstanceServerSubsystem::GetLocalIPAddress();
	P_NATIVE_END;
}
// End Class UInstanceServerSubsystem Function GetLocalIPAddress

// Begin Class UInstanceServerSubsystem Function SendMapData
struct Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics
{
	struct InstanceServerSubsystem_eventSendMapData_Parms
	{
		FString MapName;
		FString PlayerIP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InstanceServerSubsystem" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerIP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstanceServerSubsystem_eventSendMapData_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::NewProp_PlayerIP = { "PlayerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstanceServerSubsystem_eventSendMapData_Parms, PlayerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::NewProp_PlayerIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstanceServerSubsystem, nullptr, "SendMapData", nullptr, nullptr, Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::InstanceServerSubsystem_eventSendMapData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::InstanceServerSubsystem_eventSendMapData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInstanceServerSubsystem::execSendMapData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerIP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMapData(Z_Param_MapName,Z_Param_PlayerIP);
	P_NATIVE_END;
}
// End Class UInstanceServerSubsystem Function SendMapData

// Begin Class UInstanceServerSubsystem
void UInstanceServerSubsystem::StaticRegisterNativesUInstanceServerSubsystem()
{
	UClass* Class = UInstanceServerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalIPAddress", &UInstanceServerSubsystem::execGetLocalIPAddress },
		{ "SendMapData", &UInstanceServerSubsystem::execSendMapData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInstanceServerSubsystem);
UClass* Z_Construct_UClass_UInstanceServerSubsystem_NoRegister()
{
	return UInstanceServerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UInstanceServerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InstanceServerSubsystem.h" },
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueueUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewServerUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/InstanceServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QueueUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewServerUpdateDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstanceServerSubsystem_GetLocalIPAddress, "GetLocalIPAddress" }, // 1146709828
		{ &Z_Construct_UFunction_UInstanceServerSubsystem_SendMapData, "SendMapData" }, // 4206120806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstanceServerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInstanceServerSubsystem_Statics::NewProp_QueueUpdateDelegate = { "QueueUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstanceServerSubsystem, QueueUpdateDelegate), Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueueUpdateDelegate_MetaData), NewProp_QueueUpdateDelegate_MetaData) }; // 2471791061
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInstanceServerSubsystem_Statics::NewProp_NewServerUpdateDelegate = { "NewServerUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInstanceServerSubsystem, NewServerUpdateDelegate), Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewServerUpdateDelegate_MetaData), NewProp_NewServerUpdateDelegate_MetaData) }; // 2072946725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstanceServerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanceServerSubsystem_Statics::NewProp_QueueUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanceServerSubsystem_Statics::NewProp_NewServerUpdateDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInstanceServerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_InstanceServerPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInstanceServerSubsystem_Statics::ClassParams = {
	&UInstanceServerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInstanceServerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInstanceServerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInstanceServerSubsystem()
{
	if (!Z_Registration_Info_UClass_UInstanceServerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInstanceServerSubsystem.OuterSingleton, Z_Construct_UClass_UInstanceServerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInstanceServerSubsystem.OuterSingleton;
}
template<> INSTANCESERVERPLUGIN_API UClass* StaticClass<UInstanceServerSubsystem>()
{
	return UInstanceServerSubsystem::StaticClass();
}
UInstanceServerSubsystem::UInstanceServerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInstanceServerSubsystem);
UInstanceServerSubsystem::~UInstanceServerSubsystem() {}
// End Class UInstanceServerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInstanceServerSettings, UInstanceServerSettings::StaticClass, TEXT("UInstanceServerSettings"), &Z_Registration_Info_UClass_UInstanceServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInstanceServerSettings), 3986616489U) },
		{ Z_Construct_UClass_UInstanceServerSubsystem, UInstanceServerSubsystem::StaticClass, TEXT("UInstanceServerSubsystem"), &Z_Registration_Info_UClass_UInstanceServerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInstanceServerSubsystem), 1209626983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_2857843629(TEXT("/Script/InstanceServerPlugin"),
	Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
