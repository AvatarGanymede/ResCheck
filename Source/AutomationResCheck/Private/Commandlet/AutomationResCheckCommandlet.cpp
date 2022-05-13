// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Commandlet/AutomationResCheckCommandlet.h"

#include "Editor.h"
#include "RRCCoreSubsystem.h"
#include "Commands/RRCAutomationResCheckCommand.h"
#include "Commands/RRCResCheckCommandBase.h"
#include "Helpers/RRCLogHelper.h"
#include "Helpers/RRCModelHelper.h"

int32 UAutomationResCheckCommandlet::Main(const FString& Params)
{
	// 1.清空日志
	GEditor->GetEditorSubsystem<URRCCoreSubsystem>()->ClearAllResCheckLogs(); // 清空日志缓存
	// 2.执行检查命令
	URRCLogHelper::PrintLogInRRC(TEXT("自动化资源检查开始..."), ERRCLogType::RRC_Log, true);	
	const TSharedPtr<FRRCAutomationResCheckCommand> Command = MakeShareable(new FRRCAutomationResCheckCommand(EResourceCheckType::RRC_AutomationResCheck));
	Command->ExecuteResCheck();	
	URRCLogHelper::PrintLogInRRC(TEXT("自动化资源检查结束..."), ERRCLogType::RRC_Log, true);	
	return 0;
}
