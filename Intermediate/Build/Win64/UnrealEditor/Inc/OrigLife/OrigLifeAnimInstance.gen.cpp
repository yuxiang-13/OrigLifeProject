// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/Animation/OrigLifeAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeAnimInstance() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_UOrigLifeAnimInstance_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_UOrigLifeAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void UOrigLifeAnimInstance::StaticRegisterNativesUOrigLifeAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrigLifeAnimInstance);
	UClass* Z_Construct_UClass_UOrigLifeAnimInstance_NoRegister()
	{
		return UOrigLifeAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOrigLifeAnimInstance_Statics
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
	UObject* (*const Z_Construct_UClass_UOrigLifeAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrigLifeAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UOrigLifeAnimInstance\n *\n *\x09The base game animation instance class used by this project.\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/OrigLifeAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/OrigLifeAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UOrigLifeAnimInstance\n\n    The base game animation instance class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrigLifeAnimInstance_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
		{ "ModuleRelativePath", "Public/Animation/OrigLifeAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrigLifeAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrigLifeAnimInstance, GroundDistance), METADATA_PARAMS(Z_Construct_UClass_UOrigLifeAnimInstance_Statics::NewProp_GroundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrigLifeAnimInstance_Statics::NewProp_GroundDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrigLifeAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrigLifeAnimInstance_Statics::NewProp_GroundDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrigLifeAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrigLifeAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrigLifeAnimInstance_Statics::ClassParams = {
		&UOrigLifeAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrigLifeAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrigLifeAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOrigLifeAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrigLifeAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrigLifeAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UOrigLifeAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrigLifeAnimInstance.OuterSingleton, Z_Construct_UClass_UOrigLifeAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrigLifeAnimInstance.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<UOrigLifeAnimInstance>()
	{
		return UOrigLifeAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrigLifeAnimInstance);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Animation_OrigLifeAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Animation_OrigLifeAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrigLifeAnimInstance, UOrigLifeAnimInstance::StaticClass, TEXT("UOrigLifeAnimInstance"), &Z_Registration_Info_UClass_UOrigLifeAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrigLifeAnimInstance), 458975024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Animation_OrigLifeAnimInstance_h_3112218126(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Animation_OrigLifeAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_Animation_OrigLifeAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
