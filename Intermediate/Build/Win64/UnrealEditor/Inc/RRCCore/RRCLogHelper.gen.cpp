// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RRCCore/Public/Helpers/RRCLogHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRRCLogHelper() {}
// Cross Module References
	RRCCORE_API UEnum* Z_Construct_UEnum_RRCCore_ERRCLogType();
	UPackage* Z_Construct_UPackage__Script_RRCCore();
	RRCCORE_API UClass* Z_Construct_UClass_URRCLogHelper_NoRegister();
	RRCCORE_API UClass* Z_Construct_UClass_URRCLogHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERRCLogType;
	static UEnum* ERRCLogType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERRCLogType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERRCLogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RRCCore_ERRCLogType, Z_Construct_UPackage__Script_RRCCore(), TEXT("ERRCLogType"));
		}
		return Z_Registration_Info_UEnum_ERRCLogType.OuterSingleton;
	}
	template<> RRCCORE_API UEnum* StaticEnum<ERRCLogType>()
	{
		return ERRCLogType_StaticEnum();
	}
	struct Z_Construct_UEnum_RRCCore_ERRCLogType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::Enumerators[] = {
		{ "RRC_Log", (int64)RRC_Log },
		{ "RRC_Warning", (int64)RRC_Warning },
		{ "RRC_Error", (int64)RRC_Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\x97\xa5\xe5\xbf\x97\xe7\xba\xa7\xe5\x88\xab\n */" },
		{ "ModuleRelativePath", "Public/Helpers/RRCLogHelper.h" },
		{ "RRC_Error.Name", "RRC_Error" },
		{ "RRC_Log.Name", "RRC_Log" },
		{ "RRC_Warning.Name", "RRC_Warning" },
		{ "ToolTip", "\xe6\x97\xa5\xe5\xbf\x97\xe7\xba\xa7\xe5\x88\xab" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RRCCore,
		nullptr,
		"ERRCLogType",
		"ERRCLogType",
		Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RRCCore_ERRCLogType()
	{
		if (!Z_Registration_Info_UEnum_ERRCLogType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERRCLogType.InnerSingleton, Z_Construct_UEnum_RRCCore_ERRCLogType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERRCLogType.InnerSingleton;
	}
	DEFINE_FUNCTION(URRCLogHelper::execSaveLogToFile)
	{
		P_GET_TARRAY(FString,Z_Param_AllLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		URRCLogHelper::SaveLogToFile(Z_Param_AllLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URRCLogHelper::execPrintLogInRRC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LogContent);
		P_GET_PROPERTY(FByteProperty,Z_Param_Verbosity);
		P_GET_UBOOL(Z_Param_bSaveToAllLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		URRCLogHelper::PrintLogInRRC(Z_Param_LogContent,ERRCLogType(Z_Param_Verbosity),Z_Param_bSaveToAllLog);
		P_NATIVE_END;
	}
	void URRCLogHelper::StaticRegisterNativesURRCLogHelper()
	{
		UClass* Class = URRCLogHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintLogInRRC", &URRCLogHelper::execPrintLogInRRC },
			{ "SaveLogToFile", &URRCLogHelper::execSaveLogToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics
	{
		struct RRCLogHelper_eventPrintLogInRRC_Parms
		{
			FString LogContent;
			TEnumAsByte<ERRCLogType> Verbosity;
			bool bSaveToAllLog;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogContent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveToAllLog_MetaData[];
#endif
		static void NewProp_bSaveToAllLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveToAllLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_LogContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_LogContent = { "LogContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCLogHelper_eventPrintLogInRRC_Parms, LogContent), METADATA_PARAMS(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_LogContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_LogContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCLogHelper_eventPrintLogInRRC_Parms, Verbosity), Z_Construct_UEnum_RRCCore_ERRCLogType, METADATA_PARAMS(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_Verbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_Verbosity_MetaData)) }; // 818502536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog_SetBit(void* Obj)
	{
		((RRCLogHelper_eventPrintLogInRRC_Parms*)Obj)->bSaveToAllLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog = { "bSaveToAllLog", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RRCLogHelper_eventPrintLogInRRC_Parms), &Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_LogContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::NewProp_bSaveToAllLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::Function_MetaDataParams[] = {
		{ "Category", "RRC" },
		{ "Comment", "/// <summary>\n/// \xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe6\x97\xa5\xe5\xbf\x97\xe8\xbe\x93\xe5\x87\xba\xe9\x9d\xa2\xe6\x9d\xbf\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xef\xbc\x8c\xe4\xb9\x9f\xe4\xbc\x9a\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x8b\xe6\x9d\xa5\xe7\x94\xa8\xe4\xba\x8e\xe8\xbe\x93\xe5\x87\xba\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\n/// @param LogContent \xe6\x97\xa5\xe5\xbf\x97\xe5\x86\x85\xe5\xae\xb9\n/// @param Verbosity \xe6\x97\xa5\xe5\xbf\x97\xe7\xba\xa7\xe5\x88\xab\n/// @param bSaveToAllLog \xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\n/// </summary>\n" },
		{ "CPP_Default_bSaveToAllLog", "false" },
		{ "ModuleRelativePath", "Public/Helpers/RRCLogHelper.h" },
		{ "ToolTip", "<summary>\n\xe8\xb5\x84\xe6\xba\x90\xe6\xa3\x80\xe6\x9f\xa5\xe6\x97\xa5\xe5\xbf\x97\xe8\xbe\x93\xe5\x87\xba\xe9\x9d\xa2\xe6\x9d\xbf\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xef\xbc\x8c\xe4\xb9\x9f\xe4\xbc\x9a\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x8b\xe6\x9d\xa5\xe7\x94\xa8\xe4\xba\x8e\xe8\xbe\x93\xe5\x87\xba\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\n@param LogContent \xe6\x97\xa5\xe5\xbf\x97\xe5\x86\x85\xe5\xae\xb9\n@param Verbosity \xe6\x97\xa5\xe5\xbf\x97\xe7\xba\xa7\xe5\x88\xab\n@param bSaveToAllLog \xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCLogHelper, nullptr, "PrintLogInRRC", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::RRCLogHelper_eventPrintLogInRRC_Parms), Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics
	{
		struct RRCLogHelper_eventSaveLogToFile_Parms
		{
			TArray<FString> AllLog;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllLog_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllLog_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog_Inner = { "AllLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog = { "AllLog", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RRCLogHelper_eventSaveLogToFile_Parms, AllLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::NewProp_AllLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RRC" },
		{ "Comment", "/**\n\x09 * \xe5\xb0\x86\xe6\x89\x80\xe6\x9c\x89\xe6\x97\xa5\xe5\xbf\x97\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\n\x09 * @param AllLog \xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x97\xa5\xe5\xbf\x97\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/RRCLogHelper.h" },
		{ "ToolTip", "\xe5\xb0\x86\xe6\x89\x80\xe6\x9c\x89\xe6\x97\xa5\xe5\xbf\x97\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\n@param AllLog \xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe6\x97\xa5\xe5\xbf\x97" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URRCLogHelper, nullptr, "SaveLogToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::RRCLogHelper_eventSaveLogToFile_Parms), Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URRCLogHelper_SaveLogToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URRCLogHelper_SaveLogToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URRCLogHelper);
	UClass* Z_Construct_UClass_URRCLogHelper_NoRegister()
	{
		return URRCLogHelper::StaticClass();
	}
	struct Z_Construct_UClass_URRCLogHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URRCLogHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RRCCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URRCLogHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URRCLogHelper_PrintLogInRRC, "PrintLogInRRC" }, // 1736667069
		{ &Z_Construct_UFunction_URRCLogHelper_SaveLogToFile, "SaveLogToFile" }, // 639406678
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URRCLogHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\x97\xa5\xe5\xbf\x97\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3\n */" },
		{ "IncludePath", "Helpers/RRCLogHelper.h" },
		{ "ModuleRelativePath", "Public/Helpers/RRCLogHelper.h" },
		{ "ToolTip", "\xe6\x97\xa5\xe5\xbf\x97\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URRCLogHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRCLogHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URRCLogHelper_Statics::ClassParams = {
		&URRCLogHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URRCLogHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URRCLogHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URRCLogHelper()
	{
		if (!Z_Registration_Info_UClass_URRCLogHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRCLogHelper.OuterSingleton, Z_Construct_UClass_URRCLogHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URRCLogHelper.OuterSingleton;
	}
	template<> RRCCORE_API UClass* StaticClass<URRCLogHelper>()
	{
		return URRCLogHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URRCLogHelper);
	struct Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics::EnumInfo[] = {
		{ ERRCLogType_StaticEnum, TEXT("ERRCLogType"), &Z_Registration_Info_UEnum_ERRCLogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 818502536U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URRCLogHelper, URRCLogHelper::StaticClass, TEXT("URRCLogHelper"), &Z_Registration_Info_UClass_URRCLogHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRCLogHelper), 2029215182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_2888784788(TEXT("/Script/RRCCore"),
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
