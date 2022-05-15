// Fill out your copyright notice in the Description page of Project Settings.


#include "Threads/RuleItemTask.h"
#include "Helpers/RRCLogHelper.h"
#include "Models/RRCRuleItemBase.h"

void FRuleItemTask::DoTask(ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent)
{
	check(IsInGameThread());
	if (!TargetRuleItemTaskParam.IsValid() || !IsValid(TargetRuleItemTaskParam->TargetRuleItem))
	{
		return;
	}
	
	FString LogContent = FString::Format(TEXT("当前执行的检查项是:{0}"), {TargetRuleItemTaskParam->TargetRuleItem->RuleName});
	URRCLogHelper::PrintLogInRRC(LogContent, ERRCLogType::RRC_Log, true);
	if (TargetRuleItemTaskParam->TargetAssetData && TargetRuleItemTaskParam->TargetOldName)
	{
		TargetRuleItemTaskParam->TargetRuleItem->DoCheckWithAssetDataAndOldName(*TargetRuleItemTaskParam->TargetAssetData, *TargetRuleItemTaskParam->TargetOldName);
	}
	else if(TargetRuleItemTaskParam->TargetAssetData)
	{
		TargetRuleItemTaskParam->TargetRuleItem->DoCheckWithAssetData(*TargetRuleItemTaskParam->TargetAssetData);
	}
	else
	{
		TargetRuleItemTaskParam->TargetRuleItem->DoCheck();
	}
}
