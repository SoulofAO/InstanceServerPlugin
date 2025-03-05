// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstanceServerPlugin_init() {}
	INSTANCESERVERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature();
	INSTANCESERVERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InstanceServerPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InstanceServerPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_InstanceServerPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InstanceServerPlugin_NewServerUpdateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InstanceServerPlugin_QueueUpdateDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InstanceServerPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE0167651,
				0x70673724,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InstanceServerPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InstanceServerPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InstanceServerPlugin(Z_Construct_UPackage__Script_InstanceServerPlugin, TEXT("/Script/InstanceServerPlugin"), Z_Registration_Info_UPackage__Script_InstanceServerPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE0167651, 0x70673724));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
