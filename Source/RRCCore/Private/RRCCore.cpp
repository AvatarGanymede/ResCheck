// Copyright Epic Games, Inc. All Rights Reserved.

#include "RRCCore.h"

#include "MessageLogModule.h"

#define LOCTEXT_NAMESPACE "FRRCCoreModule"

void FRRCCoreModule::StartupModule()
{
	// 注册MessageLog类别
	FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
	{
		FMessageLogInitializationOptions InitOptions;
		InitOptions.bShowPages = true;
		InitOptions.bAllowClear = true;
		InitOptions.bShowFilters = true;
		MessageLogModule.RegisterLogListing("RRCResCheck", LOCTEXT("FRRCCoreModule", "RRC Res Check"), InitOptions);
	}
}

void FRRCCoreModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRRCCoreModule, RRCCore)