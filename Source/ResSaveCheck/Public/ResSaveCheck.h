// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FResSaveCheckModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
public:
	/**
	 * 有Package保存的时候执行
	 */
	void OnPackageSaved(const FString& PackageFileName, UObject* PackageObj);
};
