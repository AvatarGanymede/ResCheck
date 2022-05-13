// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "AutomationResCheckCommandlet.generated.h"
/**
 * 自动化资源检查
 */
UCLASS()
class AUTOMATIONRESCHECK_API UAutomationResCheckCommandlet : public UCommandlet
{
	GENERATED_BODY()

	virtual int32 Main(const FString& Params) override;
};
