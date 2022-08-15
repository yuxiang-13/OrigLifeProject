// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/UI/HUD/OrigLifeMenuHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeMenuHUD() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeMenuHUD_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeMenuHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifeMenuHUD::StaticRegisterNativesAOrigLifeMenuHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifeMenuHUD);
	UClass* Z_Construct_UClass_AOrigLifeMenuHUD_NoRegister()
	{
		return AOrigLifeMenuHUD::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifeMenuHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifeMenuHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifeMenuHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/OrigLifeMenuHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/OrigLifeMenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifeMenuHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifeMenuHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifeMenuHUD_Statics::ClassParams = {
		&AOrigLifeMenuHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifeMenuHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifeMenuHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifeMenuHUD()
	{
		if (!Z_Registration_Info_UClass_AOrigLifeMenuHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifeMenuHUD.OuterSingleton, Z_Construct_UClass_AOrigLifeMenuHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifeMenuHUD.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifeMenuHUD>()
	{
		return AOrigLifeMenuHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifeMenuHUD);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeMenuHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeMenuHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifeMenuHUD, AOrigLifeMenuHUD::StaticClass, TEXT("AOrigLifeMenuHUD"), &Z_Registration_Info_UClass_AOrigLifeMenuHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifeMenuHUD), 1804954102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeMenuHUD_h_3762919529(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeMenuHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeMenuHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
