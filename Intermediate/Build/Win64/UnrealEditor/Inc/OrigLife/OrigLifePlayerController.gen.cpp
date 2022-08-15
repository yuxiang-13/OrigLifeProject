// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/Player/OrigLifePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifePlayerController() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifePlayerController_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifePlayerController::StaticRegisterNativesAOrigLifePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifePlayerController);
	UClass* Z_Construct_UClass_AOrigLifePlayerController_NoRegister()
	{
		return AOrigLifePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/OrigLifePlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifePlayerController_Statics::ClassParams = {
		&AOrigLifePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifePlayerController()
	{
		if (!Z_Registration_Info_UClass_AOrigLifePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifePlayerController.OuterSingleton, Z_Construct_UClass_AOrigLifePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifePlayerController.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifePlayerController>()
	{
		return AOrigLifePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifePlayerController);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifePlayerController, AOrigLifePlayerController::StaticClass, TEXT("AOrigLifePlayerController"), &Z_Registration_Info_UClass_AOrigLifePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifePlayerController), 384729635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerController_h_470871744(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
