// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Commands/RRCResCheckCommandBase.h"


/**
 * 资源保存检查Command
 */
class RESSAVECHECK_API FRRCResSaveCheckCommand : public FRRCResCheckCommandBase
{
public:
	FRRCResSaveCheckCommand() = delete;
	FRRCResSaveCheckCommand(EResourceCheckType InResourceCheckType);
	virtual ~FRRCResSaveCheckCommand();
public:
	virtual void ExecuteResCheckWithFAssetData(const FAssetData& InAssetData) override;
};