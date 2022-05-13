// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Helpers/RRCModelHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCModelHelper() {}
// Cross Module References
	RRCCORE_API UClass* Z_Construct_UClass_URRCModelHelper_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCModelHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
	RRCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRRCResCheckPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	DEFINE_FUNCTION(URRCModelHelper::execGetValidResCheckPath)
	{
		P_GET_TARRAY(FRRCResCheckPath,Z_Param_InResCheckPaths);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ValidResCheckPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URRCModelHelper::GetValidResCheckPath(Z_Param_InResCheckPaths,Z_Param_Out_ValidResCheckPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCModelHelper::execIsInBlackListPathsByAssetData)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
		P_GET_TARRAY(FDirectoryPath,Z_Param_AllBlackListPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URRCModelHelper::IsInBlackListPathsByAssetData(Z_Param_Out_InAssetData,Z_Param_AllBlackListPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCModelHelper::execIsInBlackListPathsByFStringPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilePath);
		P_GET_TARRAY(FString,Z_Param_AllBlackListPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URRCModelHelper::IsInBlackListPathsByFStringPath(Z_Param_InFilePath,Z_Param_AllBlackListPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCModelHelper::execIsInBlackListPathsByPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilePath);
		P_GET_TARRAY(FDirectoryPath,Z_Param_AllBlackListPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URRCModelHelper::IsInBlackListPathsByPath(Z_Param_InFilePath,Z_Param_AllBlackListPaths);
		P_NATIVE_END;
	}
	void URRCModelHelper::StaticRegisterNativesURRCModelHelper()
	{
		UClass* Class = URRCModelHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValidResCheckPath", &URRCModelHelper::execGetValidResCheckPath },
			{ "IsInBlackListPathsByAssetData", &URRCModelHelper::execIsInBlackListPathsByAssetData },
			{ "IsInBlackListPathsByFStringPath", &URRCModelHelper::execIsInBlackListPathsByFStringPath },
			{ "IsInBlackListPathsByPath", &URRCModelHelper::execIsInBlackListPathsByPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics
	{
		struct RRCModelHelper_eventGetValidResCheckPath_Parms
		{
			TArray<FRRCResCheckPath> InResCheckPaths;
			TArray<FString> ValidResCheckPaths;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InResCheckPaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InResCheckPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValidResCheckPaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidResCheckPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_InResCheckPaths_Inner = { "InResCheckPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRRCResCheckPath, METADATA_PARAMS(nullptr, 0) }; // 1296001899
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_InResCheckPaths = { "InResCheckPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventGetValidResCheckPath_Parms, InResCheckPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1296001899
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ValidResCheckPaths_Inner = { "ValidResCheckPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ValidResCheckPaths = { "ValidResCheckPaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventGetValidResCheckPath_Parms, ValidResCheckPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RRCModelHelper_eventGetValidResCheckPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCModelHelper_eventGetValidResCheckPath_Parms), &Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_InResCheckPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_InResCheckPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ValidResCheckPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ValidResCheckPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @param InResCheckPaths \xe5\x8c\x85\xe5\x90\xab\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95\xe5\x92\x8c\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @param ValidResCheckPaths \xe6\x89\x80\xe6\x9c\x89\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/RRCModelHelper.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84\n@param InResCheckPaths \xe5\x8c\x85\xe5\x90\xab\xe7\x99\xbd\xe5\x90\x8d\xe5\x8d\x95\xe5\x92\x8c\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n@param ValidResCheckPaths \xe6\x89\x80\xe6\x9c\x89\xe6\x9c\x89\xe6\x95\x88\xe7\x9a\x84\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCModelHelper, nullptr, "GetValidResCheckPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::RRCModelHelper_eventGetValidResCheckPath_Parms), Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics
	{
		struct FDirectoryPath
		{
			FString Path;
		};

		struct RRCModelHelper_eventIsInBlackListPathsByAssetData_Parms
		{
			FAssetData InAssetData;
			TArray<FDirectoryPath> AllBlackListPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllBlackListPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBlackListPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBlackListPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventIsInBlackListPathsByAssetData_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_InAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_InAssetData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths_Inner = { "AllBlackListPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths = { "AllBlackListPaths", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventIsInBlackListPathsByAssetData_Parms, AllBlackListPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths_MetaData)) };
	void Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RRCModelHelper_eventIsInBlackListPathsByAssetData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCModelHelper_eventIsInBlackListPathsByAssetData_Parms), &Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_InAssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_AllBlackListPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n\x09 * @param InAssetData \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n\x09 * @param AllBlackListPaths \xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/RRCModelHelper.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n@param InAssetData \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n@param AllBlackListPaths \xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe8\xb7\xaf\xe5\xbe\x84\n@return \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCModelHelper, nullptr, "IsInBlackListPathsByAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::RRCModelHelper_eventIsInBlackListPathsByAssetData_Parms), Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics
	{
		struct RRCModelHelper_eventIsInBlackListPathsByFStringPath_Parms
		{
			FString InFilePath;
			TArray<FString> AllBlackListPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllBlackListPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBlackListPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBlackListPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_InFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_InFilePath = { "InFilePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventIsInBlackListPathsByFStringPath_Parms, InFilePath), METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_InFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_InFilePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths_Inner = { "AllBlackListPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths = { "AllBlackListPaths", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventIsInBlackListPathsByFStringPath_Parms, AllBlackListPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths_MetaData)) };
	void Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RRCModelHelper_eventIsInBlackListPathsByFStringPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCModelHelper_eventIsInBlackListPathsByFStringPath_Parms), &Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_InFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_AllBlackListPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n\x09 * @param InFilePath \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @param AllBlackListPaths \xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/RRCModelHelper.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n@param InFilePath \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n@param AllBlackListPaths \xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe8\xb7\xaf\xe5\xbe\x84\n@return \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCModelHelper, nullptr, "IsInBlackListPathsByFStringPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::RRCModelHelper_eventIsInBlackListPathsByFStringPath_Parms), Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics
	{
		struct FDirectoryPath
		{
			FString Path;
		};

		struct RRCModelHelper_eventIsInBlackListPathsByPath_Parms
		{
			FString InFilePath;
			TArray<FDirectoryPath> AllBlackListPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllBlackListPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBlackListPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBlackListPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_InFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_InFilePath = { "InFilePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventIsInBlackListPathsByPath_Parms, InFilePath), METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_InFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_InFilePath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths_Inner = { "AllBlackListPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths = { "AllBlackListPaths", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCModelHelper_eventIsInBlackListPathsByPath_Parms, AllBlackListPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths_MetaData)) };
	void Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RRCModelHelper_eventIsInBlackListPathsByPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCModelHelper_eventIsInBlackListPathsByPath_Parms), &Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_InFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_AllBlackListPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n\x09 * @param InFilePath \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @param AllBlackListPaths \xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe8\xb7\xaf\xe5\xbe\x84\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/RRCModelHelper.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad\n@param InFilePath \xe9\x9c\x80\xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n@param AllBlackListPaths \xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe8\xb7\xaf\xe5\xbe\x84\n@return \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe9\xbb\x91\xe5\x90\x8d\xe5\x8d\x95\xe4\xb8\xad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCModelHelper, nullptr, "IsInBlackListPathsByPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::RRCModelHelper_eventIsInBlackListPathsByPath_Parms), Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCModelHelper);
	UClass* Z_Construct_UClass_URRCModelHelper_NoRegister()
	{
		return URRCModelHelper::StaticClass();
	}
	struct Z_Construct_UClass_URRCModelHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCModelHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URRCModelHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URRCModelHelper_GetValidResCheckPath, "GetValidResCheckPath" }, // 3710008677
		{ &Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByAssetData, "IsInBlackListPathsByAssetData" }, // 4059450866
		{ &Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByFStringPath, "IsInBlackListPathsByFStringPath" }, // 3842027332
		{ &Z_Construct_UFunction_URRCModelHelper_IsInBlackListPathsByPath, "IsInBlackListPathsByPath" }, // 1406029998
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCModelHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe5\x85\xb3\xe4\xba\x8emodel\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe4\xb8\x80\xe4\xba\x9b\xe5\xb7\xa5\xe5\x85\xb7\xe7\xb1\xbb\xe6\x96\xb9\xe6\xb3\x95\n */" },
		{ "IncludePath", "Helpers/RRCModelHelper.h" },
		{ "ModuleRelativePath", "Public/Helpers/RRCModelHelper.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe4\xba\x8emodel\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe4\xb8\x80\xe4\xba\x9b\xe5\xb7\xa5\xe5\x85\xb7\xe7\xb1\xbb\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCModelHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCModelHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCModelHelper_Statics::ClassParams = {
		&URRCModelHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URRCModelHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCModelHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCModelHelper()
	{
		if (!Z_Registration_Info_UClass_URRCModelHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCModelHelper.OuterSingleton, Z_Construct_UClass_URRCModelHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCModelHelper.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCModelHelper>()
	{
		return URRCModelHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCModelHelper);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCModelHelper, URRCModelHelper::StaticClass, TEXT("URRCModelHelper"), &Z_Registration_Info_UClass_URRCModelHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCModelHelper), 3669717839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_504682561(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
