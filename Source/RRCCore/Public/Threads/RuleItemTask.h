// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
class URRCRuleItemBase;

/**
 * FRuleItemTask的参数结构
 */
struct FRuleItemTaskParam
{
	FRuleItemTaskParam(URRCRuleItemBase* InRuleItem)
		: TargetRuleItem(InRuleItem)
	{
	}

	FRuleItemTaskParam(URRCRuleItemBase* InRuleItem, FAssetData* InAssetData)
		: TargetRuleItem(InRuleItem), TargetAssetData(InAssetData)
	{
	}

	FRuleItemTaskParam(URRCRuleItemBase* InRuleItem, FAssetData* InAssetData, FString* InOldName)
		: TargetRuleItem(InRuleItem), TargetAssetData(InAssetData), TargetOldName(InOldName)
	{
	}


	URRCRuleItemBase* TargetRuleItem = nullptr;
	FAssetData* TargetAssetData = nullptr;
	FString* TargetOldName = nullptr;
};

/**
 * 用于执行RuleItem的检查逻辑task
 */
class FRuleItemTask
{
public:
	explicit FRuleItemTask(TSharedPtr<FRuleItemTaskParam> InRuleItemTaskParam)
		: TargetRuleItemTaskParam(InRuleItemTaskParam)
	{
	}

	void DoTask(ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent);

	static ESubsequentsMode::Type GetSubsequentsMode() { return ESubsequentsMode::TrackSubsequents; }
	ENamedThreads::Type GetDesiredThread() { return ENamedThreads::GameThread; }
	FORCEINLINE TStatId GetStatId() const { return TStatId(); }
private:
	TSharedPtr<FRuleItemTaskParam> TargetRuleItemTaskParam;
};
