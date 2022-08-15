// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/GamePlay/OrigLifeMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeMenuGameMode() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeMenuGameMode_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeMenuGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifeMenuGameMode::StaticRegisterNativesAOrigLifeMenuGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifeMenuGameMode);
	UClass* Z_Construct_UClass_AOrigLifeMenuGameMode_NoRegister()
	{
		return AOrigLifeMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifeMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GamePlay/OrigLifeMenuGameMode.h" },
		{ "ModuleRelativePath", "Public/GamePlay/OrigLifeMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifeMenuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::ClassParams = {
		&AOrigLifeMenuGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifeMenuGameMode()
	{
		if (!Z_Registration_Info_UClass_AOrigLifeMenuGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifeMenuGameMode.OuterSingleton, Z_Construct_UClass_AOrigLifeMenuGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifeMenuGameMode.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifeMenuGameMode>()
	{
		return AOrigLifeMenuGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifeMenuGameMode);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeMenuGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeMenuGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifeMenuGameMode, AOrigLifeMenuGameMode::StaticClass, TEXT("AOrigLifeMenuGameMode"), &Z_Registration_Info_UClass_AOrigLifeMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifeMenuGameMode), 2336808966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeMenuGameMode_h_3523467315(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeMenuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
