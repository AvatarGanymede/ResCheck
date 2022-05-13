// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Helpers/Logic/RRCLogicHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCLogicHelper() {}
// Cross Module References
	RRCCORE_API UClass* Z_Construct_UClass_URRCLogicHelper_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCLogicHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
// End Cross Module References
	void URRCLogicHelper::StaticRegisterNativesURRCLogicHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCLogicHelper);
	UClass* Z_Construct_UClass_URRCLogicHelper_NoRegister()
	{
		return URRCLogicHelper::StaticClass();
	}
	struct Z_Construct_UClass_URRCLogicHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCLogicHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCLogicHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe5\x86\x99\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\x85\xb7\xe4\xbd\x93\xe9\x80\xbb\xe8\xbe\x91\n */" },
		{ "IncludePath", "Helpers/Logic/RRCLogicHelper.h" },
		{ "ModuleRelativePath", "Public/Helpers/Logic/RRCLogicHelper.h" },
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe5\x86\x99\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\x85\xb7\xe4\xbd\x93\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCLogicHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCLogicHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCLogicHelper_Statics::ClassParams = {
		&URRCLogicHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URRCLogicHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCLogicHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCLogicHelper()
	{
		if (!Z_Registration_Info_UClass_URRCLogicHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCLogicHelper.OuterSingleton, Z_Construct_UClass_URRCLogicHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCLogicHelper.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCLogicHelper>()
	{
		return URRCLogicHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCLogicHelper);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_Logic_RRCLogicHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_Logic_RRCLogicHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCLogicHelper, URRCLogicHelper::StaticClass, TEXT("URRCLogicHelper"), &Z_Registration_Info_UClass_URRCLogicHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCLogicHelper), 1679824624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_Logic_RRCLogicHelper_h_1856799615(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_Logic_RRCLogicHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_Logic_RRCLogicHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
