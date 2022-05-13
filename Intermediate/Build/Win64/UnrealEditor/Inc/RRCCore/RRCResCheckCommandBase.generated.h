// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RRCCORE_RRCResCheckCommandBase_generated_h
#error "RRCResCheckCommandBase.generated.h already included, missing '#pragma once' in RRCResCheckCommandBase.h"
#endif
#define RRCCORE_RRCResCheckCommandBase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RRCProject_Plugins_ResourceRuleCheck_Source_RRCCore_Public_Commands_RRCResCheckCommandBase_h


#define FOREACH_ENUM_ERESOURCECHECKTYPE(op) \
	op(EResourceCheckType::RRC_ResImportCheck) \
	op(EResourceCheckType::RRC_ResSaveCheck) \
	op(EResourceCheckType::RRC_ContentBrowserResCheck) \
	op(EResourceCheckType::RRC_MapResCheck) \
	op(EResourceCheckType::RRC_AutomationResCheck) \
	op(EResourceCheckType::RRC_ResRenameCheck) 

enum class EResourceCheckType;
template<> RRCCORE_API UEnum* StaticEnum<EResourceCheckType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
