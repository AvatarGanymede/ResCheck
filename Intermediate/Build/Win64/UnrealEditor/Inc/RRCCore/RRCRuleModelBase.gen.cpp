// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Models/RRCRuleModelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCRuleModelBase() {}
// Cross Module References
	RRCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRRCRuleModel();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCRuleModelBase_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCRuleModelBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RRCCORE_API UEnum* Z_Construct_UEnum_RRCCore_EResourceCheckType();
	RRCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRRCRuleItem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RRCRuleModel;
class UScriptStruct* FRRCRuleModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RRCRuleModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RRCRuleModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRRCRuleModel, Z_Construct_UPackage__Script_RRCCore(), TEXT("RRCRuleModel"));
	}
	return Z_Registration_Info_UScriptStruct_RRCRuleModel.OuterSingleton;
}
template<> RRCCORE_API UScriptStruct* StaticStruct<FRRCRuleModel>()
{
	return FRRCRuleModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRRCRuleModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleModelDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleModelDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpened_MetaData[];
#endif
		static void NewProp_bOpened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleModelBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleModelBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRRCRuleModel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelName_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelName = { "RuleModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCRuleModel, RuleModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelDescription_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelDescription = { "RuleModelDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCRuleModel, RuleModelDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened_SetBit(void* Obj)
	{
		((FRRCRuleModel*)Obj)->bOpened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRRCRuleModel), &Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelBP_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe8\x93\x9d\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelBP = { "RuleModelBP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRRCRuleModel, RuleModelBP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelBP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRRCRuleModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_bOpened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewProp_RuleModelBP,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRRCRuleModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
		nullptr,
		&NewStructOps,
		"RRCRuleModel",
		sizeof(FRRCRuleModel),
		alignof(FRRCRuleModel),
		Z_Construct_UScriptStruct_FRRCRuleModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRRCRuleModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRRCRuleModel()
	{
		if (!Z_Registration_Info_UScriptStruct_RRCRuleModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RRCRuleModel.InnerSingleton, Z_Construct_UScriptStruct_FRRCRuleModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RRCRuleModel.InnerSingleton;
	}
	DEFINE_FUNCTION(URRCRuleModelBase::execIsOpened)
	{
		P_GET_ENUM(EResourceCheckType,Z_Param_InResourceCheckType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpened(EResourceCheckType(Z_Param_InResourceCheckType));
		P_NATIVE_END;
	}
	void URRCRuleModelBase::StaticRegisterNativesURRCRuleModelBase()
	{
		UClass* Class = URRCRuleModelBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOpened", &URRCRuleModelBase::execIsOpened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics
	{
		struct RRCRuleModelBase_eventIsOpened_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_InResourceCheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_InResourceCheckType = { "InResourceCheckType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCRuleModelBase_eventIsOpened_Parms, InResourceCheckType), Z_Construct_UEnum_RRCCore_EResourceCheckType, METADATA_PARAMS(nullptr, 0) }; // 1948030645
	void Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RRCRuleModelBase_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCRuleModelBase_eventIsOpened_Parms), &Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_InResourceCheckType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_InResourceCheckType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe5\x88\xa4\xe6\x96\xad\xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf\n\x09 */" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe5\xbd\x93\xe5\x89\x8d\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCRuleModelBase, nullptr, "IsOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::RRCRuleModelBase_eventIsOpened_Parms), Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCRuleModelBase_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCRuleModelBase_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCRuleModelBase);
	UClass* Z_Construct_UClass_URRCRuleModelBase_NoRegister()
	{
		return URRCRuleModelBase::StaticClass();
	}
	struct Z_Construct_UClass_URRCRuleModelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleModelDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleModelDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleModelPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RuleModelPriority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RRCRuleItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RRCRuleItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RRCRuleItems;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCRuleModelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URRCRuleModelBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URRCRuleModelBase_IsOpened, "IsOpened" }, // 1743536178
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\n */" },
		{ "IncludePath", "Models/RRCRuleModelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelName_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelName = { "RuleModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleModelBase, RuleModelName), METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelDescription_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa8\xa1\xe5\x9d\x97\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelDescription = { "RuleModelDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleModelBase, RuleModelDescription), METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelPriority_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
		{ "ToolTip", "\xe4\xbb\x8e\xe5\xb0\x8f\xe5\x88\xb0\xe5\xa4\xa7\xef\xbc\x8c\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe9\x80\x92\xe5\xa2\x9e\xe3\x80\x82\xe4\xb8\x8d\xe5\xa1\xab\xe5\x88\x99\xe4\xb8\xba""0\xe3\x80\x82" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelPriority = { "RuleModelPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleModelBase, RuleModelPriority), METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelPriority_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems_Inner = { "RRCRuleItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCRuleItem, METADATA_PARAMS(nullptr, 0) }; // 670430056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe9\xa1\xb9\xe9\x9b\x86\xe5\x90\x88" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems = { "RRCRuleItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URRCRuleModelBase, RRCRuleItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems_MetaData)) }; // 670430056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport_SetBit(void* Obj)
	{
		((URRCRuleModelBase*)Obj)->bOpenedInResImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport = { "bOpenedInResImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleModelBase), &Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\x9d\xe5\xad\x98\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave_SetBit(void* Obj)
	{
		((URRCRuleModelBase*)Obj)->bOpenedInResSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave = { "bOpenedInResSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleModelBase), &Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser_SetBit(void* Obj)
	{
		((URRCRuleModelBase*)Obj)->bOpenedInContentBrowser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser = { "bOpenedInContentBrowser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleModelBase), &Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe4\xb8\xad\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap_SetBit(void* Obj)
	{
		((URRCRuleModelBase*)Obj)->bOpenedInMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap = { "bOpenedInMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleModelBase), &Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe6\x9e\x84\xe5\xbb\xba\xe6\xb5\x81\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild_SetBit(void* Obj)
	{
		((URRCRuleModelBase*)Obj)->bOpenedInBuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild = { "bOpenedInBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleModelBase), &Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename_MetaData[] = {
		{ "Category", "\xe5\xbc\x80\xe5\x90\xaf\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "DisplayName", "\xe5\x9c\xa8\xe8\xb5\x84\xe4\xba\xa7\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x97\xb6\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe5\xbc\x80\xe5\x90\xaf" },
		{ "ModuleRelativePath", "Public/Models/RRCRuleModelBase.h" },
	};
#endif
	void Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename_SetBit(void* Obj)
	{
		((URRCRuleModelBase*)Obj)->bOpenedInRename = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename = { "bOpenedInRename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URRCRuleModelBase), &Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename_SetBit, METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URRCRuleModelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RuleModelPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_RRCRuleItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInResSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInContentBrowser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRCRuleModelBase_Statics::NewProp_bOpenedInRename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCRuleModelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCRuleModelBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCRuleModelBase_Statics::ClassParams = {
		&URRCRuleModelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URRCRuleModelBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URRCRuleModelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCRuleModelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCRuleModelBase()
	{
		if (!Z_Registration_Info_UClass_URRCRuleModelBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCRuleModelBase.OuterSingleton, Z_Construct_UClass_URRCRuleModelBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCRuleModelBase.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCRuleModelBase>()
	{
		return URRCRuleModelBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCRuleModelBase);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics::ScriptStructInfo[] = {
		{ FRRCRuleModel::StaticStruct, Z_Construct_UScriptStruct_FRRCRuleModel_Statics::NewStructOps, TEXT("RRCRuleModel"), &Z_Registration_Info_UScriptStruct_RRCRuleModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRRCRuleModel), 3596313762U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCRuleModelBase, URRCRuleModelBase::StaticClass, TEXT("URRCRuleModelBase"), &Z_Registration_Info_UClass_URRCRuleModelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCRuleModelBase), 2335831438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_3837578559(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleModelBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
