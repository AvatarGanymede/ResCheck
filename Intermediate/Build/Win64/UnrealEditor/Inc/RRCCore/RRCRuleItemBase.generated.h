// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EResourceCheckType : int32;
struct FAssetData;
#ifdef RRCCORE_RRCRuleItemBase_generated_h
#error "RRCRuleItemBase.generated.h already included, missing '#pragma once' in RRCRuleItemBase.h"
#endif
#define RRCCORE_RRCRuleItemBase_generated_h

#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRRCRuleItem_Statics; \
	RRCCORE_API static class UScriptStruct* StaticStruct();


template<> RRCCORE_API UScriptStruct* StaticStruct<struct FRRCRuleItem>();

#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRRCResCheckPath_Statics; \
	RRCCORE_API static class UScriptStruct* StaticStruct();


template<> RRCCORE_API UScriptStruct* StaticStruct<struct FRRCResCheckPath>();

#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_SPARSE_DATA
#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execDoCheckWithAssetDataAndOldName); \
	DECLARE_FUNCTION(execDoCheckWithAssetData); \
	DECLARE_FUNCTION(execDoCheck);


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execDoCheckWithAssetDataAndOldName); \
	DECLARE_FUNCTION(execDoCheckWithAssetData); \
	DECLARE_FUNCTION(execDoCheck);


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_EVENT_PARMS \
	struct RRCRuleItemBase_eventDoCheckInBuild_Parms \
	{ \
		TArray<FString> ResCheckPaths; \
	}; \
	struct RRCRuleItemBase_eventDoCheckInRename_Parms \
	{ \
		FAssetData InAssetData; \
		FString InOldName; \
	}; \
	struct RRCRuleItemBase_eventDoCheckInResSave_Parms \
	{ \
		FAssetData InAssetData; \
	};


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_CALLBACK_WRAPPERS
#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURRCRuleItemBase(); \
	friend struct Z_Construct_UClass_URRCRuleItemBase_Statics; \
public: \
	DECLARE_CLASS(URRCRuleItemBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RRCCore"), NO_API) \
	DECLARE_SERIALIZER(URRCRuleItemBase)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_INCLASS \
private: \
	static void StaticRegisterNativesURRCRuleItemBase(); \
	friend struct Z_Construct_UClass_URRCRuleItemBase_Statics; \
public: \
	DECLARE_CLASS(URRCRuleItemBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RRCCore"), NO_API) \
	DECLARE_SERIALIZER(URRCRuleItemBase)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRCRuleItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRCRuleItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRCRuleItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRCRuleItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URRCRuleItemBase(URRCRuleItemBase&&); \
	NO_API URRCRuleItemBase(const URRCRuleItemBase&); \
public:


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRCRuleItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URRCRuleItemBase(URRCRuleItemBase&&); \
	NO_API URRCRuleItemBase(const URRCRuleItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRCRuleItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRCRuleItemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRCRuleItemBase)


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_56_PROLOG \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_EVENT_PARMS


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_SPARSE_DATA \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_RPC_WRAPPERS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_CALLBACK_WRAPPERS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_INCLASS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_SPARSE_DATA \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_CALLBACK_WRAPPERS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_INCLASS_NO_PURE_DECLS \
	FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RRCCORE_API UClass* StaticClass<class URRCRuleItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Models_RRCRuleItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
