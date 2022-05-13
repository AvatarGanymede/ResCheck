// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RRCRuleModelBase.h"
#include "UObject/Object.h"
#include "RRCResourceCheckConfigBase.generated.h"

/**
 * 资源检查配置信息的基类
 */
UCLASS(Blueprintable)
class RRCCORE_API URRCResourceCheckConfigBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "所有检查模块集合"))
	TArray<FRRCRuleModel> AllRuleModels;
};
