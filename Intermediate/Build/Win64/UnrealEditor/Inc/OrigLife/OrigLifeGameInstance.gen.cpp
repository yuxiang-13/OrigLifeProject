// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrigLife/Public/GamePlay/OrigLifeGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrigLifeGameInstance() {}
// Cross Module References
	ORIGLIFE_API UClass* Z_Construct_UClass_UOrigLifeGameInstance_NoRegister();
	ORIGLIFE_API UClass* Z_Construct_UClass_UOrigLifeGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_OrigLife();
// End Cross Module References
	void UOrigLifeGameInstance::StaticRegisterNativesUOrigLifeGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrigLifeGameInstance);
	UClass* Z_Construct_UClass_UOrigLifeGameInstance_NoRegister()
	{
		return UOrigLifeGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOrigLifeGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrigLifeGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OrigLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrigLifeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GamePlay/OrigLifeGameInstance.h" },
		{ "ModuleRelativePath", "Public/GamePlay/OrigLifeGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrigLifeGameInstance_Statics::NewProp_GameName_MetaData[] = {
		{ "Category", "OrigLife" },
		{ "Comment", "// \xe5\x9c\xa8\xe7\x94\x9f\xe6\x88\x90\xe4\xb8\x96\xe7\x95\x8c\xe4\xb9\x8b\xe5\x89\x8d\xef\xbc\x8c\xe5\x85\x88\xe8\xbf\x90\xe8\xa1\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe6\x96\xb9\xe6\xb3\x95\xef\xbc\x88\xe9\xa1\xb9\xe7\x9b\xae\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xef\xbc\x8c\xe5\x85\x88gamemode\xef\xbc\x8c\xe5\x86\x8dgameinstance,\xe5\x86\x8d\xe7\x94\x9f\xe6\x88\x90\xe4\xb8\x96\xe7\x95\x8c\xef\xbc\x8c\xe5\x86\x8d\xe4\xb8\x96\xe7\x95\x8c\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84""Actor\xef\xbc\x89\n// virtual void Init() override;\n" },
		{ "ModuleRelativePath", "Public/GamePlay/OrigLifeGameInstance.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe7\x94\x9f\xe6\x88\x90\xe4\xb8\x96\xe7\x95\x8c\xe4\xb9\x8b\xe5\x89\x8d\xef\xbc\x8c\xe5\x85\x88\xe8\xbf\x90\xe8\xa1\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe6\x96\xb9\xe6\xb3\x95\xef\xbc\x88\xe9\xa1\xb9\xe7\x9b\xae\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xef\xbc\x8c\xe5\x85\x88gamemode\xef\xbc\x8c\xe5\x86\x8dgameinstance,\xe5\x86\x8d\xe7\x94\x9f\xe6\x88\x90\xe4\xb8\x96\xe7\x95\x8c\xef\xbc\x8c\xe5\x86\x8d\xe4\xb8\x96\xe7\x95\x8c\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84""Actor\xef\xbc\x89\nvirtual void Init() override;" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOrigLifeGameInstance_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrigLifeGameInstance, GameName), METADATA_PARAMS(Z_Construct_UClass_UOrigLifeGameInstance_Statics::NewProp_GameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrigLifeGameInstance_Statics::NewProp_GameName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrigLifeGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrigLifeGameInstance_Statics::NewProp_GameName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrigLifeGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrigLifeGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrigLifeGameInstance_Statics::ClassParams = {
		&UOrigLifeGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrigLifeGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrigLifeGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOrigLifeGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrigLifeGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrigLifeGameInstance()
	{
		if (!Z_Registration_Info_UClass_UOrigLifeGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrigLifeGameInstance.OuterSingleton, Z_Construct_UClass_UOrigLifeGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrigLifeGameInstance.OuterSingleton;
	}
	template<> ORIGLIFE_API UClass* StaticClass<UOrigLifeGameInstance>()
	{
		return UOrigLifeGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrigLifeGameInstance);
	struct Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrigLifeGameInstance, UOrigLifeGameInstance::StaticClass, TEXT("UOrigLifeGameInstance"), &Z_Registration_Info_UClass_UOrigLifeGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrigLifeGameInstance), 1825395351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeGameInstance_h_3788213441(TEXT("/Script/OrigLife"),
		Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OrigLife_Source_OrigLife_Public_GamePlay_OrigLifeGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
