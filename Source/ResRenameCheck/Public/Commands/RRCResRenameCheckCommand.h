// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Commands/RRCResCheckCommandBase.h"

/**
 * 资源重命名时的检查command
 */
class RESRENAMECHECK_API FRRCResRenameCheckCommand : public FRRCResCheckCommandBase
{
public:
	FRRCResRenameCheckCommand() = delete;
	FRRCResRenameCheckCommand(EResourceCheckType InResourceCheckType);
	virtual ~FRRCResRenameCheckCommand();
public:
	virtual void ExecuteResCheckWithFAssetDataAndOldName(const FAssetData& InAssetData, FString InOldName) override;
};
