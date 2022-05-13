// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Commands/RRCResRenameCheckCommand.h"

#include "Helpers/RRCModelHelper.h"

FRRCResRenameCheckCommand::FRRCResRenameCheckCommand(EResourceCheckType InResourceCheckType)
	:FRRCResCheckCommandBase(InResourceCheckType)
{
	
}

FRRCResRenameCheckCommand::~FRRCResRenameCheckCommand()
{
}

void FRRCResRenameCheckCommand::ExecuteResCheckWithFAssetDataAndOldName(const FAssetData& InAssetData, FString InOldName)
{
	URRCModelHelper::ExecuteAllRuleModelsWithAssetDataAndOldName(EResourceCheckType::RRC_ResRenameCheck, InAssetData, InOldName);
}
