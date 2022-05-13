// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Commands/RRCResCheckCommandBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCResCheckCommandBase() {}
// Cross Module References
	RRCCORE_API UEnum* Z_Construct_UEnum_RRCCore_EResourceCheckType();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceCheckType;
	static UEnum* EResourceCheckType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResourceCheckType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResourceCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RRCCore_EResourceCheckType, Z_Construct_UPackage__Script_RRCCore(), TEXT("EResourceCheckType"));
		}
		return Z_Registration_Info_UEnum_EResourceCheckType.OuterSingleton;
	}
	template<> RRCCORE_API UEnum* StaticEnum<EResourceCheckType>()
	{
		return EResourceCheckType_StaticEnum();
	}
	struct Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::Enumerators[] = {
		{ "EResourceCheckType::RRC_ResImportCheck", (int64)EResourceCheckType::RRC_ResImportCheck },
		{ "EResourceCheckType::RRC_ResSaveCheck", (int64)EResourceCheckType::RRC_ResSaveCheck },
		{ "EResourceCheckType::RRC_ContentBrowserResCheck", (int64)EResourceCheckType::RRC_ContentBrowserResCheck },
		{ "EResourceCheckType::RRC_MapResCheck", (int64)EResourceCheckType::RRC_MapResCheck },
		{ "EResourceCheckType::RRC_AutomationResCheck", (int64)EResourceCheckType::RRC_AutomationResCheck },
		{ "EResourceCheckType::RRC_ResRenameCheck", (int64)EResourceCheckType::RRC_ResRenameCheck },
		{ "EResourceCheckType::RRC_MAX", (int64)EResourceCheckType::RRC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe7\xb1\xbb\xe5\x88\xab\n */" },
		{ "ModuleRelativePath", "Public/Commands/RRCResCheckCommandBase.h" },
		{ "RRC_AutomationResCheck.Comment", "/** \xe8\x87\xaa\xe5\x8a\xa8\xe5\x8c\x96\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5 */" },
		{ "RRC_AutomationResCheck.Name", "EResourceCheckType::RRC_AutomationResCheck" },
		{ "RRC_AutomationResCheck.ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe5\x8c\x96\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "RRC_ContentBrowserResCheck.Comment", "/** \xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5 */" },
		{ "RRC_ContentBrowserResCheck.Name", "EResourceCheckType::RRC_ContentBrowserResCheck" },
		{ "RRC_ContentBrowserResCheck.ToolTip", "\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "RRC_MapResCheck.Comment", "/** \xe5\x9c\xba\xe6\x99\xaf\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5 */" },
		{ "RRC_MapResCheck.Name", "EResourceCheckType::RRC_MapResCheck" },
		{ "RRC_MapResCheck.ToolTip", "\xe5\x9c\xba\xe6\x99\xaf\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "RRC_MAX.Name", "EResourceCheckType::RRC_MAX" },
		{ "RRC_ResImportCheck.Comment", "/** \xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5 */" },
		{ "RRC_ResImportCheck.Name", "EResourceCheckType::RRC_ResImportCheck" },
		{ "RRC_ResImportCheck.ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "RRC_ResRenameCheck.Comment", "/** \xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5 */" },
		{ "RRC_ResRenameCheck.Name", "EResourceCheckType::RRC_ResRenameCheck" },
		{ "RRC_ResRenameCheck.ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "RRC_ResSaveCheck.Comment", "/** \xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5 */" },
		{ "RRC_ResSaveCheck.Name", "EResourceCheckType::RRC_ResSaveCheck" },
		{ "RRC_ResSaveCheck.ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe7\xb1\xbb\xe5\x88\xab" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RRCCore,
		nullptr,
		"EResourceCheckType",
		"EResourceCheckType",
		Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RRCCore_EResourceCheckType()
	{
		if (!Z_Registration_Info_UEnum_EResourceCheckType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceCheckType.InnerSingleton, Z_Construct_UEnum_RRCCore_EResourceCheckType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResourceCheckType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Commands_RRCResCheckCommandBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Commands_RRCResCheckCommandBase_h_Statics::EnumInfo[] = {
		{ EResourceCheckType_StaticEnum, TEXT("EResourceCheckType"), &Z_Registration_Info_UEnum_EResourceCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1948030645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Commands_RRCResCheckCommandBase_h_1691055472(TEXT("/Script/RRCCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Commands_RRCResCheckCommandBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Commands_RRCResCheckCommandBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
