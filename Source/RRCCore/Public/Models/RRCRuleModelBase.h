// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RRCRuleItemBase.h"
#include "UObject/Object.h"
#include "RRCRuleModelBase.generated.h"

enum class EResourceCheckType;

USTRUCT(BlueprintType)
struct FRRCRuleModel
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查模块名称"))
	FString RuleModelName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查模块描述"))
	FString RuleModelDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "是否开启"))
	bool bOpened;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查模块蓝图"))
	UBlueprint* RuleModelBP;
};

/**
 * 检查模块的基类
 */
UCLASS(Blueprintable)
class RRCCORE_API URRCRuleModelBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查模块名称"))
	FString RuleModelName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查模块描述"))
	FString RuleModelDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项优先级", ToolTip = "从小到大，优先级递增。不填则为0。"))
	int32 RuleModelPriority;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "所有的检查项集合"))
	TArray<FRRCRuleItem> RRCRuleItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在资源导入检查中开启"))
	uint8 bOpenedInResImport : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在资源保存检查中开启"))
	uint8 bOpenedInResSave : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在内容浏览器的资源检查中开启"))
	uint8 bOpenedInContentBrowser : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在场景资源检查中开启"))
	uint8 bOpenedInMap : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在构建流程中的资源检查开启"))
	uint8 bOpenedInBuild : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在资产重命名时的资源检查开启"))
	uint8 bOpenedInRename : 1;
public:
	/**
	 * 判断当前检查模块是否在指定的检查类型中开启
	 */
	UFUNCTION()
	bool IsOpened(EResourceCheckType InResourceCheckType);
};
