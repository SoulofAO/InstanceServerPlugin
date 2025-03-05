// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstanceServerPlugin/Public/InstanceServerPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstanceServerPluginBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INSTANCESERVERPLUGIN_API UClass* Z_Construct_UClass_UInstanceServerPluginBPLibrary();
INSTANCESERVERPLUGIN_API UClass* Z_Construct_UClass_UInstanceServerPluginBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_InstanceServerPlugin();
// End Cross Module References

// Begin Class UInstanceServerPluginBPLibrary
void UInstanceServerPluginBPLibrary::StaticRegisterNativesUInstanceServerPluginBPLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInstanceServerPluginBPLibrary);
UClass* Z_Construct_UClass_UInstanceServerPluginBPLibrary_NoRegister()
{
	return UInstanceServerPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "InstanceServerPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/InstanceServerPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstanceServerPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_InstanceServerPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics::ClassParams = {
	&UInstanceServerPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInstanceServerPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UInstanceServerPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInstanceServerPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UInstanceServerPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInstanceServerPluginBPLibrary.OuterSingleton;
}
template<> INSTANCESERVERPLUGIN_API UClass* StaticClass<UInstanceServerPluginBPLibrary>()
{
	return UInstanceServerPluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInstanceServerPluginBPLibrary);
UInstanceServerPluginBPLibrary::~UInstanceServerPluginBPLibrary() {}
// End Class UInstanceServerPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInstanceServerPluginBPLibrary, UInstanceServerPluginBPLibrary::StaticClass, TEXT("UInstanceServerPluginBPLibrary"), &Z_Registration_Info_UClass_UInstanceServerPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInstanceServerPluginBPLibrary), 4057543749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerPluginBPLibrary_h_1291187434(TEXT("/Script/InstanceServerPlugin"),
	Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InstanServerProject_Builds_Plugins_InstanceServerPlugin_HostProject_Plugins_InstanceServerPlugin_Source_InstanceServerPlugin_Public_InstanceServerPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
