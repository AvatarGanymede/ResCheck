// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * 资源检查类别
 */
UENUM()
enum class EResourceCheckType
{
	/** 资源导入检查 */
	RRC_ResImportCheck,
	/** 资源保存检查 */
	RRC_ResSaveCheck,
	/** 内容浏览器的资源检查 */
	RRC_ContentBrowserResCheck,
	/** 场景的资源检查 */
	RRC_MapResCheck,
	/** 自动化资源检查 */
	RRC_AutomationResCheck,
	/** 资产重命名的资源检查 */
	RRC_ResRenameCheck,

	RRC_MAX
};

/**
 * 资源检查command基类
 */
class RRCCORE_API FRRCResCheckCommandBase
{
public:
	FRRCResCheckCommandBase() = delete;
	FRRCResCheckCommandBase(EResourceCheckType InResourceCheckType);
	virtual ~FRRCResCheckCommandBase();

public:
	/**
	 * 执行资源检查
	 */
	virtual void ExecuteResCheck();
	/**
	 * 针对传入的FAssetData，执行资源检查
	 */
	virtual void ExecuteResCheckWithFAssetData(const FAssetData& InAssetData);
	/**
	 * 针对传入的FAssetData和旧名称，执行资源检查
	 */
	virtual void ExecuteResCheckWithFAssetDataAndOldName(const FAssetData& InAssetData, FString InOldName);
	

protected:
	/** 资源检查类型 */
	EResourceCheckType ResourceCheckType;
	/** 所有的属于当前资源检查类型的资源检查模块 */
	TArray<class URRCRuleModelBase*> AllRuleModels;
};


