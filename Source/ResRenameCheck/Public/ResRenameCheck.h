// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FResRenameCheckModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	/**
	 * 当资产重命名完成之后执行，用于重命名检查
	 */
	void TriggerOnAssetRenamed(const struct FAssetData& InAssetData, const FString& InOldName);
};
