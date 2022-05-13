// Copyright Epic Games, Inc. All Rights Reserved.

#include "ResSaveCheck.h"

#include "Editor.h"
#include "Subsystem/RRCResSaveCheckSubsystem.h"

#define LOCTEXT_NAMESPACE "FResSaveCheckModule"

void FResSaveCheckModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// Add save callback
	UPackage::PackageSavedEvent.AddRaw(this, &FResSaveCheckModule::OnPackageSaved);
}

void FResSaveCheckModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FResSaveCheckModule::OnPackageSaved(const FString& PackageFileName, UObject* PackageObj)
{
	URRCResSaveCheckSubsystem* ResSaveCheckSubsystem = GEditor->GetEditorSubsystem<URRCResSaveCheckSubsystem>();
	if (ResSaveCheckSubsystem && PackageObj)
	{
		ResSaveCheckSubsystem->ValidateSavedPackage(PackageObj->GetFName());
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FResSaveCheckModule, ResSaveCheck)