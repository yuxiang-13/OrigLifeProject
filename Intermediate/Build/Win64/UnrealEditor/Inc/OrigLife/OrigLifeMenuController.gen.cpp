// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/GamePlay/OrigLifeMenuController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeMenuController() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeMenuController_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeMenuController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifeMenuController::StaticRegisterNativesAOrigLifeMenuController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifeMenuController);
	UClass* Z_Construct_UClass_AOrigLifeMenuController_NoRegister()
	{
		return AOrigLifeMenuController::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifeMenuController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifeMenuController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifeMenuController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GamePlay/OrigLifeMenuController.h" },
		{ "ModuleRelativePath", "Public/GamePlay/OrigLifeMenuController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifeMenuController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifeMenuController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifeMenuController_Statics::ClassParams = {
		&AOrigLifeMenuController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifeMenuController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifeMenuController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifeMenuController()
	{
		if (!Z_Registration_Info_UClass_AOrigLifeMenuController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifeMenuController.OuterSingleton, Z_Construct_UClass_AOrigLifeMenuController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifeMenuController.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifeMenuController>()
	{
		return AOrigLifeMenuController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifeMenuController);
	struct Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeMenuController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeMenuController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifeMenuController, AOrigLifeMenuController::StaticClass, TEXT("AOrigLifeMenuController"), &Z_Registration_Info_UClass_AOrigLifeMenuController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifeMenuController), 3537257631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeMenuController_h_1048316568(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeMenuController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_GamePlay_OrigLifeMenuController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
