// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Models/RRCRuleItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCRuleItemBase() {}
// Cross Module References
	RRCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRRCRuleItem();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	RRCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRRCResCheckPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	RRCCORE_API UClass* Z_Construct_UClass_URRCRuleItemBase_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCRuleItemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	RRCCORE_API UEnum* Z_Construct_UEnum_RRCCore_EResourceCheckType();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RRCRuleItem;
class UScriptStruct* FRRCRuleItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RRCRuleItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RRCRuleItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRRCRuleItem, Z_Construct_UPackage__Script_RRCCore(), TEXT("RRCRuleItem"));
	}
	return Z_Registration_Info_UScriptStruct_RRCRuleItem.OuterSingleton;
}
template<> RRCCORE_API UScriptStruct* StaticStruct<FRRCRuleItem>()
{
	return FRRCRuleItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRRCRuleItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpened_MetaData[];
#endif
		static void NewProp_bOpened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleItemBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleItemBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\n */" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRRCRuleItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleName_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleName = { "RuleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCRuleItem, RuleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleDescription_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleDescription = { "RuleDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCRuleItem, RuleDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened_SetBit(void* Obj)
	{
		((FRRCRuleItem*)Obj)->bOpened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRRCRuleItem), &Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleItemBP_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe8\x93\x9d\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleItemBP = { "RuleItemBP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCRuleItem, RuleItemBP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleItemBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleItemBP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRRCRuleItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_bOpened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewProp_RuleItemBP,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRRCRuleItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
		nullptr,
		&NewStructOps,
		"RRCRuleItem",
		sizeof(FRRCRuleItem),
		alignof(FRRCRuleItem),
		Z_Construct_UScriptStruct_FRRCRuleItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRRCRuleItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RRCRuleItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RRCRuleItem.InnerSingleton, Z_Construct_UScriptStruct_FRRCRuleItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RRCRuleItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RRCResCheckPath;
class UScriptStruct* FRRCResCheckPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RRCResCheckPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RRCResCheckPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRRCResCheckPath, Z_Construct_UPackage__Script_RRCCore(), TEXT("RRCResCheckPath"));
	}
	return Z_Registration_Info_UScriptStruct_RRCResCheckPath.OuterSingleton;
}
template<> RRCCORE_API UScriptStruct* StaticStruct<FRRCResCheckPath>()
{
	return FRRCResCheckPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRRCResCheckPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathInWhiteList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathInWhiteList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWildcardInWhiteList_MetaData[];
#endif
		static void NewProp_bUseWildcardInWhiteList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWildcardInWhiteList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WildcardPathInWhiteList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WildcardPathInWhiteList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathInBlackList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathInBlackList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWildcardInBlackList_MetaData[];
#endif
		static void NewProp_bUseWildcardInBlackList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWildcardInBlackList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WildcardPathInBlackList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WildcardPathInBlackList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf\n */" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRRCResCheckPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInWhiteList_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInWhiteList = { "CheckPathInWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCResCheckPath, CheckPathInWhiteList), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInWhiteList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe7\x94\xa8\xe9\x80\x9a\xe9\x85\x8d\xe7\xac\xa6\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList_SetBit(void* Obj)
	{
		((FRRCResCheckPath*)Obj)->bUseWildcardInWhiteList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList = { "bUseWildcardInWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRRCResCheckPath), &Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInWhiteList_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe9\x80\x9a\xe9\x85\x8d\xe7\xac\xa6\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95" },
		{ "EditCondition", "bUseWildcardInWhiteList" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInWhiteList = { "WildcardPathInWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCResCheckPath, WildcardPathInWhiteList), METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInWhiteList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInBlackList_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInBlackList = { "CheckPathInBlackList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCResCheckPath, CheckPathInBlackList), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInBlackList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInBlackList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe7\x94\xa8\xe9\x80\x9a\xe9\x85\x8d\xe7\xac\xa6\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList_SetBit(void* Obj)
	{
		((FRRCResCheckPath*)Obj)->bUseWildcardInBlackList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList = { "bUseWildcardInBlackList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRRCResCheckPath), &Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInBlackList_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe9\x80\x9a\xe9\x85\x8d\xe7\xac\xa6\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95" },
		{ "EditCondition", "bUseWildcardInBlackList" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInBlackList = { "WildcardPathInBlackList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCResCheckPath, WildcardPathInBlackList), METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInBlackList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInBlackList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInWhiteList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInWhiteList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInWhiteList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_CheckPathInBlackList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_bUseWildcardInBlackList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewProp_WildcardPathInBlackList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
		nullptr,
		&NewStructOps,
		"RRCResCheckPath",
		sizeof(FRRCResCheckPath),
		alignof(FRRCResCheckPath),
		Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRRCResCheckPath()
	{
		if (!Z_Registration_Info_UScriptStruct_RRCResCheckPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RRCResCheckPath.InnerSingleton, Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RRCResCheckPath.InnerSingleton;
	}
	DEFINE_FUNCTION(URRCRuleItemBase::execIsOpened)
	{
		P_GET_ENUM(EResourceCheckType,Z_Param_InResourceCheckType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpened(EResourceCheckType(Z_Param_InResourceCheckType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCRuleItemBase::execDoCheckWithAssetDataAndOldName)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_GET_PROPERTY(FStrProperty,Z_Param_InOldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoCheckWithAssetDataAndOldName(Z_Param_Out_InAssetData,Z_Param_InOldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCRuleItemBase::execDoCheckWithAssetData)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoCheckWithAssetData(Z_Param_Out_InAssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCRuleItemBase::execDoCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoCheck();
		P_NATIVE_END;
	}
	static FName NAME_URRCRuleItemBase_DoCheckInBuild = FName(TEXT("DoCheckInBuild"));
	void URRCRuleItemBase::DoCheckInBuild(TArray<FString> const& ResCheckPaths)
	{
		RRCRuleItemBase_eventDoCheckInBuild_Parms Parms;
		Parms.ResCheckPaths=ResCheckPaths;
		ProcessEvent(FindFunctionChecked(NAME_URRCRuleItemBase_DoCheckInBuild),&Parms);
	}
	static FName NAME_URRCRuleItemBase_DoCheckInContentBrowser = FName(TEXT("DoCheckInContentBrowser"));
	void URRCRuleItemBase::DoCheckInContentBrowser()
	{
		ProcessEvent(FindFunctionChecked(NAME_URRCRuleItemBase_DoCheckInContentBrowser),NULL);
	}
	static FName NAME_URRCRuleItemBase_DoCheckInMap = FName(TEXT("DoCheckInMap"));
	void URRCRuleItemBase::DoCheckInMap()
	{
		ProcessEvent(FindFunctionChecked(NAME_URRCRuleItemBase_DoCheckInMap),NULL);
	}
	static FName NAME_URRCRuleItemBase_DoCheckInRename = FName(TEXT("DoCheckInRename"));
	void URRCRuleItemBase::DoCheckInRename(FAssetData const& InAssetData, const FString& InOldName)
	{
		RRCRuleItemBase_eventDoCheckInRename_Parms Parms;
		Parms.InAssetData=InAssetData;
		Parms.InOldName=InOldName;
		ProcessEvent(FindFunctionChecked(NAME_URRCRuleItemBase_DoCheckInRename),&Parms);
	}
	static FName NAME_URRCRuleItemBase_DoCheckInResImport = FName(TEXT("DoCheckInResImport"));
	void URRCRuleItemBase::DoCheckInResImport()
	{
		ProcessEvent(FindFunctionChecked(NAME_URRCRuleItemBase_DoCheckInResImport),NULL);
	}
	static FName NAME_URRCRuleItemBase_DoCheckInResSave = FName(TEXT("DoCheckInResSave"));
	void URRCRuleItemBase::DoCheckInResSave(FAssetData const& InAssetData)
	{
		RRCRuleItemBase_eventDoCheckInResSave_Parms Parms;
		Parms.InAssetData=InAssetData;
		ProcessEvent(FindFunctionChecked(NAME_URRCRuleItemBase_DoCheckInResSave),&Parms);
	}
	void URRCRuleItemBase::StaticRegisterNativesURRCRuleItemBase()
	{
		UClass* Class = URRCRuleItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoCheck", &URRCRuleItemBase::execDoCheck },
			{ "DoCheckWithAssetData", &URRCRuleItemBase::execDoCheckWithAssetData },
			{ "DoCheckWithAssetDataAndOldName", &URRCRuleItemBase::execDoCheckWithAssetDataAndOldName },
			{ "IsOpened", &URRCRuleItemBase::execIsOpened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheck_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe6\x89\xa7\xe8\xa1\x8c\xe5\x85\xb7\xe4\xbd\x93\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\n\x09 */" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe5\x85\xb7\xe4\xbd\x93\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResCheckPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResCheckPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResCheckPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths_Inner = { "ResCheckPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths = { "ResCheckPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckInBuild_Parms, ResCheckPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::NewProp_ResCheckPaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe6\x9e\x84\xe5\xbb\xba\xe6\xb5\x81\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n\x09 * @param ResCheckPaths \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe8\xb7\xaf\xe5\xbe\x84\xe6\x98\xaf\xe7\xbb\xbc\xe5\x90\x88\xe4\xba\x86\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95\xe5\x92\x8c\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb9\x8b\xe5\x90\x8e\xe7\x9a\x84\xe6\x9c\x89\xe6\x95\x88\xe8\xb7\xaf\xe5\xbe\x84\xe3\x80\x82\n\x09 */" },
		{ "DisplayName", "\xe6\x9e\x84\xe5\xbb\xba\xe6\xb5\x81\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe6\x9e\x84\xe5\xbb\xba\xe6\xb5\x81\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n@param ResCheckPaths \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe8\xb7\xaf\xe5\xbe\x84\xe6\x98\xaf\xe7\xbb\xbc\xe5\x90\x88\xe4\xba\x86\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95\xe5\x92\x8c\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb9\x8b\xe5\x90\x8e\xe7\x9a\x84\xe6\x9c\x89\xe6\x95\x88\xe8\xb7\xaf\xe5\xbe\x84\xe3\x80\x82" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckInBuild", nullptr, nullptr, sizeof(RRCRuleItemBase_eventDoCheckInBuild_Parms), Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n\x09 */" },
		{ "DisplayName", "\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckInContentBrowser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n\x09 */" },
		{ "DisplayName", "\xe5\x9c\xba\xe6\x99\xaf\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckInMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOldName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckInRename_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InAssetData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InOldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InOldName = { "InOldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckInRename_Parms, InOldName), METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InOldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InOldName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InAssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::NewProp_InOldName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x97\xb6\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n\x09 */" },
		{ "DisplayName", "\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x97\xb6\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x97\xb6\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckInRename", nullptr, nullptr, sizeof(RRCRuleItemBase_eventDoCheckInRename_Parms), Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n\x09 */" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckInResImport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckInResSave_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::NewProp_InAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91\n\x09 */" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xef\xbc\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\x80\xbb\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckInResSave", nullptr, nullptr, sizeof(RRCRuleItemBase_eventDoCheckInResSave_Parms), Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics
	{
		struct RRCRuleItemBase_eventDoCheckWithAssetData_Parms
		{
			FAssetData InAssetData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckWithAssetData_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::NewProp_InAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::NewProp_InAssetData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckWithAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::RRCRuleItemBase_eventDoCheckWithAssetData_Parms), Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics
	{
		struct RRCRuleItemBase_eventDoCheckWithAssetDataAndOldName_Parms
		{
			FAssetData InAssetData;
			FString InOldName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOldName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckWithAssetDataAndOldName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InAssetData_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InOldName = { "InOldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventDoCheckWithAssetDataAndOldName_Parms, InOldName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InAssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::NewProp_InOldName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "DoCheckWithAssetDataAndOldName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::RRCRuleItemBase_eventDoCheckWithAssetDataAndOldName_Parms), Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics
	{
		struct RRCRuleItemBase_eventIsOpened_Parms
		{
			EResourceCheckType InResourceCheckType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InResourceCheckType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InResourceCheckType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_InResourceCheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_InResourceCheckType = { "InResourceCheckType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleItemBase_eventIsOpened_Parms, InResourceCheckType), Z_Construct_UEnum_RRCCore_EResourceCheckType, METADATA_PARAMS(nullptr, 0) }; // 1948030645
	void Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RRCRuleItemBase_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCRuleItemBase_eventIsOpened_Parms), &Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_InResourceCheckType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_InResourceCheckType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x88\xa4\xe6\x96\xad\xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\n\x09 */" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleItemBase, nullptr, "IsOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::RRCRuleItemBase_eventIsOpened_Parms), Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleItemBase_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleItemBase_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCRuleItemBase);
	UClass* Z_Construct_UClass_URRCRuleItemBase_NoRegister()
	{
		return URRCRuleItemBase::StaticClass();
	}
	struct Z_Construct_UClass_URRCRuleItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RulePriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RulePriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenedInResImport_MetaData[];
#endif
		static void NewProp_bOpenedInResImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenedInResImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenedInResSave_MetaData[];
#endif
		static void NewProp_bOpenedInResSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenedInResSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenedInContentBrowser_MetaData[];
#endif
		static void NewProp_bOpenedInContentBrowser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenedInContentBrowser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenedInMap_MetaData[];
#endif
		static void NewProp_bOpenedInMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenedInMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenedInBuild_MetaData[];
#endif
		static void NewProp_bOpenedInBuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenedInBuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenedInRename_MetaData[];
#endif
		static void NewProp_bOpenedInRename_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenedInRename;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathsInResImport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathsInResImport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckPathsInResImport;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathsInResSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathsInResSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckPathsInResSave;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathsInContentBrowser_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathsInContentBrowser_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckPathsInContentBrowser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathsInMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathsInMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckPathsInMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathsInBuild_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathsInBuild_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckPathsInBuild;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckPathsInRename_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPathsInRename_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckPathsInRename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCRuleItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URRCRuleItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheck, "DoCheck" }, // 2057883594
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckInBuild, "DoCheckInBuild" }, // 2152084085
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckInContentBrowser, "DoCheckInContentBrowser" }, // 1395700855
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckInMap, "DoCheckInMap" }, // 4240253115
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckInRename, "DoCheckInRename" }, // 308599621
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResImport, "DoCheckInResImport" }, // 756344055
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckInResSave, "DoCheckInResSave" }, // 3542694112
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetData, "DoCheckWithAssetData" }, // 2222996763
		{ &Z_Construct_UFunction_URRCRuleItemBase_DoCheckWithAssetDataAndOldName, "DoCheckWithAssetDataAndOldName" }, // 1434821229
		{ &Z_Construct_UFunction_URRCRuleItemBase_IsOpened, "IsOpened" }, // 1901566597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe7\x9a\x84\xe8\x93\x9d\xe5\x9b\xbe\xe5\x9f\xba\xe7\xb1\xbb\n */" },
		{ "IncludePath", "Models/RRCRuleItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe7\x9a\x84\xe8\x93\x9d\xe5\x9b\xbe\xe5\x9f\xba\xe7\xb1\xbb" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleName_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleName = { "RuleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, RuleName), METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleDescription_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleDescription = { "RuleDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, RuleDescription), METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RulePriority_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
		{ "ToolTip", "\xe4\xbb\x8e\xe5\xb0\x8f\xe5\x88\xb0\xe5\xa4\xa7\xef\xbc\x8c\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe9\x80\x92\xe5\xa2\x9e\xe3\x80\x82\xe4\xb8\x8d\xe5\xa1\xab\xe5\x88\x99\xe4\xb8\xba""0\xe3\x80\x82" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RulePriority = { "RulePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, RulePriority), METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RulePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RulePriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport_SetBit(void* Obj)
	{
		((URRCRuleItemBase*)Obj)->bOpenedInResImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport = { "bOpenedInResImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleItemBase), &Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave_SetBit(void* Obj)
	{
		((URRCRuleItemBase*)Obj)->bOpenedInResSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave = { "bOpenedInResSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleItemBase), &Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser_SetBit(void* Obj)
	{
		((URRCRuleItemBase*)Obj)->bOpenedInContentBrowser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser = { "bOpenedInContentBrowser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleItemBase), &Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap_SetBit(void* Obj)
	{
		((URRCRuleItemBase*)Obj)->bOpenedInMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap = { "bOpenedInMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleItemBase), &Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe6\x9e\x84\xe5\xbb\xba\xe6\xb5\x81\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild_SetBit(void* Obj)
	{
		((URRCRuleItemBase*)Obj)->bOpenedInBuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild = { "bOpenedInBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleItemBase), &Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x97\xb6\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename_SetBit(void* Obj)
	{
		((URRCRuleItemBase*)Obj)->bOpenedInRename = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename = { "bOpenedInRename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleItemBase), &Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport_Inner = { "CheckPathsInResImport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe9\x80\x89\xe5\xa1\xab\xef\xbc\x89" },
		{ "EditCondition", "bOpenedInResImport" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport = { "CheckPathsInResImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, CheckPathsInResImport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport_MetaData)) }; // 1296001899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave_Inner = { "CheckPathsInResSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe9\x80\x89\xe5\xa1\xab\xef\xbc\x89" },
		{ "EditCondition", "bOpenedInResSave" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave = { "CheckPathsInResSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, CheckPathsInResSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave_MetaData)) }; // 1296001899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser_Inner = { "CheckPathsInContentBrowser", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe9\x80\x89\xe5\xa1\xab\xef\xbc\x89" },
		{ "EditCondition", "bOpenedInContentBrowser" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser = { "CheckPathsInContentBrowser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, CheckPathsInContentBrowser), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser_MetaData)) }; // 1296001899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap_Inner = { "CheckPathsInMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe5\x9c\xba\xe6\x99\xaf\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe9\x80\x89\xe5\xa1\xab\xef\xbc\x89" },
		{ "EditCondition", "bOpenedInMap" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap = { "CheckPathsInMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, CheckPathsInMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap_MetaData)) }; // 1296001899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild_Inner = { "CheckPathsInBuild", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe6\x9e\x84\xe5\xbb\xba\xe6\xb5\x81\xe7\xa8\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe9\x80\x89\xe5\xa1\xab\xef\xbc\x89" },
		{ "EditCondition", "bOpenedInBuild" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild = { "CheckPathsInBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, CheckPathsInBuild), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild_MetaData)) }; // 1296001899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename_Inner = { "CheckPathsInRename", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename_MetaData[] = {
		{ "Category", "\xe8\xb7\xaf\xe5\xbe\x84\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ContentDir", "" },
		{ "DisplayName", "\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\xef\xbc\x88\xe9\x80\x89\xe5\xa1\xab\xef\xbc\x89" },
		{ "EditCondition", "bOpenedInRename" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleItemBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename = { "CheckPathsInRename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleItemBase, CheckPathsInRename), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename_MetaData)) }; // 1296001899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URRCRuleItemBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RuleDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_RulePriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInResSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInContentBrowser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_bOpenedInRename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInResSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInContentBrowser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleItemBase_Statics::NewProp_CheckPathsInRename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCRuleItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCRuleItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCRuleItemBase_Statics::ClassParams = {
		&URRCRuleItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URRCRuleItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URRCRuleItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCRuleItemBase()
	{
		if (!Z_Registration_Info_UClass_URRCRuleItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCRuleItemBase.OuterSingleton, Z_Construct_UClass_URRCRuleItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCRuleItemBase.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCRuleItemBase>()
	{
		return URRCRuleItemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCRuleItemBase);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics::ScriptStructInfo[] = {
		{ FRRCRuleItem::StaticStruct, Z_Construct_UScriptStruct_FRRCRuleItem_Statics::NewStructOps, TEXT("RRCRuleItem"), &Z_Registration_Info_UScriptStruct_RRCRuleItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRRCRuleItem), 670430056U) },
		{ FRRCResCheckPath::StaticStruct, Z_Construct_UScriptStruct_FRRCResCheckPath_Statics::NewStructOps, TEXT("RRCResCheckPath"), &Z_Registration_Info_UScriptStruct_RRCResCheckPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRRCResCheckPath), 1296001899U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCRuleItemBase, URRCRuleItemBase::StaticClass, TEXT("URRCRuleItemBase"), &Z_Registration_Info_UClass_URRCRuleItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCRuleItemBase), 4121857638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_3828891407(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
