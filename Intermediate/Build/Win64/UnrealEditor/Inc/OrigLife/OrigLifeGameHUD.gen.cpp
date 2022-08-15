// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/UI/HUD/OrigLifeGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeGameHUD() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeGameHUD_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifeGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifeGameHUD::StaticRegisterNativesAOrigLifeGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifeGameHUD);
	UClass* Z_Construct_UClass_AOrigLifeGameHUD_NoRegister()
	{
		return AOrigLifeGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifeGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifeGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifeGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/OrigLifeGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/OrigLifeGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifeGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifeGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifeGameHUD_Statics::ClassParams = {
		&AOrigLifeGameHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifeGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifeGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifeGameHUD()
	{
		if (!Z_Registration_Info_UClass_AOrigLifeGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifeGameHUD.OuterSingleton, Z_Construct_UClass_AOrigLifeGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifeGameHUD.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifeGameHUD>()
	{
		return AOrigLifeGameHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifeGameHUD);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifeGameHUD, AOrigLifeGameHUD::StaticClass, TEXT("AOrigLifeGameHUD"), &Z_Registration_Info_UClass_AOrigLifeGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifeGameHUD), 3016709811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeGameHUD_h_1661003234(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_UI_HUD_OrigLifeGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
