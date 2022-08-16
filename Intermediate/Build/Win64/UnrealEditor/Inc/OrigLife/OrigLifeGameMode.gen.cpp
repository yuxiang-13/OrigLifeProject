// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/GamePlay/OrigLifeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeGameMode() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeGameMode_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifeGameMode::StaticRegisterNativesAOrigLifeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifeGameMode);
	UClass* Z_Construct_UClass_AOrigLifeGameMode_NoRegister()
	{
		return AOrigLifeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GamePlay/OrigLifeGameMode.h" },
		{ "ModuleRelativePath", "Public/GamePlay/OrigLifeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifeGameMode_Statics::ClassParams = {
		&AOrigLifeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifeGameMode()
	{
		if (!Z_Registration_Info_UClass_AOrigLifeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifeGameMode.OuterSingleton, Z_Construct_UClass_AOrigLifeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifeGameMode.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifeGameMode>()
	{
		return AOrigLifeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifeGameMode);
	struct Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifeGameMode, AOrigLifeGameMode::StaticClass, TEXT("AOrigLifeGameMode"), &Z_Registration_Info_UClass_AOrigLifeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifeGameMode), 3388143276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeGameMode_h_3336678258(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
