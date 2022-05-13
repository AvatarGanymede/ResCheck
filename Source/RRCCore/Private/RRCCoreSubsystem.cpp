// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "RRCCoreSubsystem.h"

#include "Helpers/RRCModelHelper.h"

void URRCCoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void URRCCoreSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

FString URRCCoreSubsystem::GetAutomationResCheckCommandletCmd()
{
	FString MissionCommand = FString::Printf(TEXT(" %s -run=AutomationResCheck"),*URRCModelHelper::GetProjectFilePath()); // 拼接Commandlet执行命令行指令
	FString UeCmdPath = URRCModelHelper::GetUeCmdExePath();
	return FPaths::Combine(UeCmdPath, MissionCommand);
}

TArray<FString>* URRCCoreSubsystem::GetAllResCheckLogs()
{
	return &AllResCheckLogs;
}

void URRCCoreSubsystem::ClearAllResCheckLogs()
{
	AllResCheckLogs.Empty();
}
