// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Commands/RRCResCheckCommandBase.h"

#include "Helpers/RRCModelHelper.h"

FRRCResCheckCommandBase::FRRCResCheckCommandBase(EResourceCheckType InResourceCheckType)
	:ResourceCheckType(InResourceCheckType)
{
	URRCModelHelper::GetAllRuleModels(InResourceCheckType, AllRuleModels); // 获取当前检查类型的所有检查模块数据
}

FRRCResCheckCommandBase::~FRRCResCheckCommandBase()
{
	
}

void FRRCResCheckCommandBase::ExecuteResCheck()
{
}

void FRRCResCheckCommandBase::ExecuteResCheckWithFAssetData(const FAssetData& InAssetData)
{
}

void FRRCResCheckCommandBase::ExecuteResCheckWithFAssetDataAndOldName(const FAssetData& InAssetData, FString InOldName)
{
}
