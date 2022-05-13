// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRRCResCheckPath;
struct FAssetData;
struct FDirectoryPath;
#ifdef RRCCORE_RRCModelHelper_generated_h
#error "RRCModelHelper.generated.h already included, missing '#pragma once' in RRCModelHelper.h"
#endif
#define RRCCORE_RRCModelHelper_generated_h

#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_SPARSE_DATA
#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValidResCheckPath); \
	DECLARE_FUNCTION(execIsInBlackListPathsByAssetData); \
	DECLARE_FUNCTION(execIsInBlackListPathsByFStringPath); \
	DECLARE_FUNCTION(execIsInBlackListPathsByPath);


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValidResCheckPath); \
	DECLARE_FUNCTION(execIsInBlackListPathsByAssetData); \
	DECLARE_FUNCTION(execIsInBlackListPathsByFStringPath); \
	DECLARE_FUNCTION(execIsInBlackListPathsByPath);


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURRCModelHelper(); \
	friend struct Z_Construct_UClass_URRCModelHelper_Statics; \
public: \
	DECLARE_CLASS(URRCModelHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RRCCore"), NO_API) \
	DECLARE_SERIALIZER(URRCModelHelper)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURRCModelHelper(); \
	friend struct Z_Construct_UClass_URRCModelHelper_Statics; \
public: \
	DECLARE_CLASS(URRCModelHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RRCCore"), NO_API) \
	DECLARE_SERIALIZER(URRCModelHelper)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRCModelHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRCModelHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRCModelHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRCModelHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URRCModelHelper(URRCModelHelper&&); \
	NO_API URRCModelHelper(const URRCModelHelper&); \
public:


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRCModelHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URRCModelHelper(URRCModelHelper&&); \
	NO_API URRCModelHelper(const URRCModelHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRCModelHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRCModelHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRCModelHelper)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_14_PROLOG
#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_SPARSE_DATA \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_RPC_WRAPPERS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_INCLASS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_SPARSE_DATA \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_INCLASS_NO_PURE_DECLS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RRCCORE_API UClass* StaticClass<class URRCModelHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Helpers_RRCModelHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
