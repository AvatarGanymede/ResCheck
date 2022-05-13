// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Models/RRCResourceCheckConfigBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCResourceCheckConfigBase() {}
// Cross Module References
	RRCCORE_API UClass* Z_Construct_UClass_URRCResourceCheckConfigBase_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCResourceCheckConfigBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
	RRCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRRCRuleModel();
// End Cross Module References
	void URRCResourceCheckConfigBase::StaticRegisterNativesURRCResourceCheckConfigBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCResourceCheckConfigBase);
	UClass* Z_Construct_UClass_URRCResourceCheckConfigBase_NoRegister()
	{
		return URRCResourceCheckConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_URRCResourceCheckConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllRuleModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllRuleModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllRuleModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe9\x85\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\n */" },
		{ "IncludePath", "Models/RRCResourceCheckConfigBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/RRCResourceCheckConfigBase.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe9\x85\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels_Inner = { "AllRuleModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCRuleModel, METADATA_PARAMS(nullptr, 0) }; // 3596313762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\x89\x80\xe6\x9c\x89\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe9\x9b\x86\xe5\x90\x88" },
		{ "ModuleRelativePath", "Public/Models/RRCResourceCheckConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels = { "AllRuleModels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCResourceCheckConfigBase, AllRuleModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels_MetaData)) }; // 3596313762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::NewProp_AllRuleModels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCResourceCheckConfigBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::ClassParams = {
		&URRCResourceCheckConfigBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCResourceCheckConfigBase()
	{
		if (!Z_Registration_Info_UClass_URRCResourceCheckConfigBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCResourceCheckConfigBase.OuterSingleton, Z_Construct_UClass_URRCResourceCheckConfigBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCResourceCheckConfigBase.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCResourceCheckConfigBase>()
	{
		return URRCResourceCheckConfigBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCResourceCheckConfigBase);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCResourceCheckConfigBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCResourceCheckConfigBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCResourceCheckConfigBase, URRCResourceCheckConfigBase::StaticClass, TEXT("URRCResourceCheckConfigBase"), &Z_Registration_Info_UClass_URRCResourceCheckConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCResourceCheckConfigBase), 721420658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCResourceCheckConfigBase_h_1879057953(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCResourceCheckConfigBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCResourceCheckConfigBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
