// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceServerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSTANCESERVERPLUGIN_InstanceServerSubsystem_generated_h
#error "InstanceServerSubsystem.generated.h already included, missing '#pragma once' in InstanceServerSubsystem.h"
#endif
#define INSTANCESERVERPLUGIN_InstanceServerSubsystem_generated_h

#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_15_DELEGATE \
INSTANCESERVERPLUGIN_API void FQueueUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& QueueUpdateDelegate, int32 NumberQueue);


#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_16_DELEGATE \
INSTANCESERVERPLUGIN_API void FNewServerUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewServerUpdateDelegate, const FString& ServerIP, const FString& Port);


#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstanceServerSettings(); \
	friend struct Z_Construct_UClass_UInstanceServerSettings_Statics; \
public: \
	DECLARE_CLASS(UInstanceServerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstanceServerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInstanceServerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstanceServerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInstanceServerSettings(UInstanceServerSettings&&); \
	UInstanceServerSettings(const UInstanceServerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInstanceServerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstanceServerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstanceServerSettings) \
	NO_API virtual ~UInstanceServerSettings();


#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_22_PROLOG
#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSTANCESERVERPLUGIN_API UClass* StaticClass<class UInstanceServerSettings>();

#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLocalIPAddress); \
	DECLARE_FUNCTION(execSendMapData);


#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstanceServerSubsystem(); \
	friend struct Z_Construct_UClass_UInstanceServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UInstanceServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InstanceServerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInstanceServerSubsystem)


#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInstanceServerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInstanceServerSubsystem(UInstanceServerSubsystem&&); \
	UInstanceServerSubsystem(const UInstanceServerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInstanceServerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstanceServerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstanceServerSubsystem) \
	NO_API virtual ~UInstanceServerSubsystem();


#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_43_PROLOG
#define FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSTANCESERVERPLUGIN_API UClass* StaticClass<class UInstanceServerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InstanServerProject_Builds_Plugins_InstanServerPlugin_HostProject_Plugins_InstanServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
