// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RRCCORE_RRCLogHelper_generated_h
#error "RRCLogHelper.generated.h already included, missing '#pragma once' in RRCLogHelper.h"
#endif
#define RRCCORE_RRCLogHelper_generated_h

#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_SPARSE_DATA
#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveLogToFile); \
	DECLARE_FUNCTION(execPrintLogInRRC);


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveLogToFile); \
	DECLARE_FUNCTION(execPrintLogInRRC);


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURRCLogHelper(); \
	friend struct Z_Construct_UClass_URRCLogHelper_Statics; \
public: \
	DECLARE_CLASS(URRCLogHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RRCCore"), NO_API) \
	DECLARE_SERIALIZER(URRCLogHelper)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_INCLASS \
private: \
	static void StaticRegisterNativesURRCLogHelper(); \
	friend struct Z_Construct_UClass_URRCLogHelper_Statics; \
public: \
	DECLARE_CLASS(URRCLogHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RRCCore"), NO_API) \
	DECLARE_SERIALIZER(URRCLogHelper)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRCLogHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRCLogHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRCLogHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRCLogHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URRCLogHelper(URRCLogHelper&&); \
	NO_API URRCLogHelper(const URRCLogHelper&); \
public:


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRCLogHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URRCLogHelper(URRCLogHelper&&); \
	NO_API URRCLogHelper(const URRCLogHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRCLogHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRCLogHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRCLogHelper)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_25_PROLOG
#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_SPARSE_DATA \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_RPC_WRAPPERS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_INCLASS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_SPARSE_DATA \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_INCLASS_NO_PURE_DECLS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RRCCORE_API UClass* StaticClass<class URRCLogHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCLogHelper_h


#define FOREACH_ENUM_ERRCLOGTYPE(op) \
	op(RRC_Log) \
	op(RRC_Warning) \
	op(RRC_Error) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
