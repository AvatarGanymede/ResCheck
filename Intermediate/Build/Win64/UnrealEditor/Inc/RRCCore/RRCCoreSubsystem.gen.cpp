// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/RRCCoreSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCCoreSubsystem() {}
// Cross Module References
	RRCCORE_API UClass* Z_Construct_UClass_URRCCoreSubsystem_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCCoreSubsystem();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
// End Cross Module References
	void URRCCoreSubsystem::StaticRegisterNativesURRCCoreSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCCoreSubsystem);
	UClass* Z_Construct_UClass_URRCCoreSubsystem_NoRegister()
	{
		return URRCCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_URRCCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllResCheckLogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllResCheckLogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllResCheckLogs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RRCCoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/RRCCoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs_Inner = { "AllResCheckLogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs_MetaData[] = {
		{ "Comment", "/** \xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe6\x89\x80\xe6\x9c\x89\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe7\x9a\x84\xe6\x97\xa5\xe5\xbf\x97 */" },
		{ "ModuleRelativePath", "Public/RRCCoreSubsystem.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe6\x89\x80\xe6\x9c\x89\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe7\x9a\x84\xe6\x97\xa5\xe5\xbf\x97" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs = { "AllResCheckLogs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCCoreSubsystem, AllResCheckLogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URRCCoreSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCCoreSubsystem_Statics::NewProp_AllResCheckLogs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCCoreSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCCoreSubsystem_Statics::ClassParams = {
		&URRCCoreSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URRCCoreSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URRCCoreSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URRCCoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCCoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCCoreSubsystem()
	{
		if (!Z_Registration_Info_UClass_URRCCoreSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCCoreSubsystem.OuterSingleton, Z_Construct_UClass_URRCCoreSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCCoreSubsystem.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCCoreSubsystem>()
	{
		return URRCCoreSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCCoreSubsystem);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_RRCCoreSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_RRCCoreSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCCoreSubsystem, URRCCoreSubsystem::StaticClass, TEXT("URRCCoreSubsystem"), &Z_Registration_Info_UClass_URRCCoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCCoreSubsystem), 2911858618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_RRCCoreSubsystem_h_642603821(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_RRCCoreSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_RRCCoreSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
