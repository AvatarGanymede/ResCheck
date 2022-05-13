// Copyright © 2018-2020 Tencent. All Rights Reserved.
#include "Commands/RRCAutomationResCheckCommand.h"
#include "Helpers/RRCModelHelper.h"

FRRCAutomationResCheckCommand::FRRCAutomationResCheckCommand(EResourceCheckType InResourceCheckType)
	:FRRCResCheckCommandBase(InResourceCheckType)
{
	
}

FRRCAutomationResCheckCommand::~FRRCAutomationResCheckCommand()
{
	
}

void FRRCAutomationResCheckCommand::ExecuteResCheck()
{
	if (ResourceCheckType != EResourceCheckType::RRC_AutomationResCheck)
	{
		return;
	}
	// 1.获取当前检查类型的检查模块
	URRCModelHelper::ExecuteAllRuleModels(ResourceCheckType);
}
