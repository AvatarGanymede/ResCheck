// Copyright Epic Games, Inc. All Rights Reserved.

#include "ResRenameCheck.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Commands/RRCResRenameCheckCommand.h"

#define LOCTEXT_NAMESPACE "FResRenameCheckModule"

void FResRenameCheckModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
	AssetRegistry.OnAssetRenamed().AddRaw(this, &FResRenameCheckModule::TriggerOnAssetRenamed);
	
}

void FResRenameCheckModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FResRenameCheckModule::TriggerOnAssetRenamed(const FAssetData& InAssetData, const FString& InOldName)
{
	const TSharedPtr<FRRCResRenameCheckCommand> ResRenameCheckCommand = MakeShareable(new FRRCResRenameCheckCommand(EResourceCheckType::RRC_ResRenameCheck));
	ResRenameCheckCommand->ExecuteResCheckWithFAssetDataAndOldName(InAssetData, InOldName);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FResRenameCheckModule, ResRenameCheck)