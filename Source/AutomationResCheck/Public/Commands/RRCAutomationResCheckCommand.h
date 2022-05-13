// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Commands/RRCResCheckCommandBase.h"


/**
 * 自动化资源检查Command
 */
class AUTOMATIONRESCHECK_API FRRCAutomationResCheckCommand : public FRRCResCheckCommandBase
{
public:
	FRRCAutomationResCheckCommand() = delete;
	FRRCAutomationResCheckCommand(EResourceCheckType InResourceCheckType);
	virtual ~FRRCAutomationResCheckCommand();
public:
	virtual void ExecuteResCheck() override;
};