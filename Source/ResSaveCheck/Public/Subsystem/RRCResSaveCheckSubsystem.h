// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EditorValidatorSubsystem.h"
#include "RRCResSaveCheckSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class RESSAVECHECK_API URRCResSaveCheckSubsystem : public UEditorValidatorSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void ValidateOnSave(TArray<FAssetData> AssetDataList) const override;
};
