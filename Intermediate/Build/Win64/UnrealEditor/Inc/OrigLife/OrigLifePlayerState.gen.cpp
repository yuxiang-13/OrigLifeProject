// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/Player/OrigLifePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifePlayerState() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifePlayerState_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifePlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void AOrigLifePlayerState::StaticRegisterNativesAOrigLifePlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifePlayerState);
	UClass* Z_Construct_UClass_AOrigLifePlayerState_NoRegister()
	{
		return AOrigLifePlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifePlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifePlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifePlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/OrigLifePlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifePlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifePlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifePlayerState_Statics::ClassParams = {
		&AOrigLifePlayerState::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifePlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifePlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifePlayerState()
	{
		if (!Z_Registration_Info_UClass_AOrigLifePlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifePlayerState.OuterSingleton, Z_Construct_UClass_AOrigLifePlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifePlayerState.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifePlayerState>()
	{
		return AOrigLifePlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifePlayerState);
	struct Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_Player_OrigLifePlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_Player_OrigLifePlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifePlayerState, AOrigLifePlayerState::StaticClass, TEXT("AOrigLifePlayerState"), &Z_Registration_Info_UClass_AOrigLifePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifePlayerState), 945799649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_Player_OrigLifePlayerState_h_3348708566(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_Player_OrigLifePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLifeProject_Source_OrigLife_Public_Player_OrigLifePlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
