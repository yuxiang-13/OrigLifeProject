// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/Player/OrigLifePlayerCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifePlayerCharacterBase() {}
// Cross Module References
	ORIGLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifePlayerCharacterBase_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_AOrigLifePlayerCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo;
class UScriptStruct* FOrigLifeCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo, Z_Construct_UPackage__Script_OrigLife(), TEXT("OrigLifeCharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo.OuterSingleton;
}
template<> ORIGLIFE_API UScriptStruct* StaticStruct<FOrigLifeCharacterGroundInfo>()
{
	return FOrigLifeCharacterGroundInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerCharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrigLifeCharacterGroundInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "OrigLifeCharacterGroundInfo" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrigLifeCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "OrigLifeCharacterGroundInfo" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrigLifeCharacterGroundInfo, GroundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewProp_GroundDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
		nullptr,
		&NewStructOps,
		"OrigLifeCharacterGroundInfo",
		sizeof(FOrigLifeCharacterGroundInfo),
		alignof(FOrigLifeCharacterGroundInfo),
		Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo.InnerSingleton;
	}
	void AOrigLifePlayerCharacterBase::StaticRegisterNativesAOrigLifePlayerCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrigLifePlayerCharacterBase);
	UClass* Z_Construct_UClass_AOrigLifePlayerCharacterBase_NoRegister()
	{
		return AOrigLifePlayerCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/OrigLifePlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
		{ "ModuleRelativePath", "Public/Player/OrigLifePlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrigLifePlayerCharacterBase, GroundDistance), METADATA_PARAMS(Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::NewProp_GroundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::NewProp_GroundDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::NewProp_GroundDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrigLifePlayerCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::ClassParams = {
		&AOrigLifePlayerCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrigLifePlayerCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AOrigLifePlayerCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrigLifePlayerCharacterBase.OuterSingleton, Z_Construct_UClass_AOrigLifePlayerCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrigLifePlayerCharacterBase.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<AOrigLifePlayerCharacterBase>()
	{
		return AOrigLifePlayerCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrigLifePlayerCharacterBase);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics::ScriptStructInfo[] = {
		{ FOrigLifeCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FOrigLifeCharacterGroundInfo_Statics::NewStructOps, TEXT("OrigLifeCharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_OrigLifeCharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrigLifeCharacterGroundInfo), 1096582246U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrigLifePlayerCharacterBase, AOrigLifePlayerCharacterBase::StaticClass, TEXT("AOrigLifePlayerCharacterBase"), &Z_Registration_Info_UClass_AOrigLifePlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrigLifePlayerCharacterBase), 3375397374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_22727961(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Player_OrigLifePlayerCharacterBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
