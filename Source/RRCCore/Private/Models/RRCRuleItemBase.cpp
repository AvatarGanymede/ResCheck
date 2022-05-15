// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Models/RRCRuleItemBase.h"
#include "Commands/RRCResCheckCommandBase.h"
#include "Helpers/RRCModelHelper.h"

void URRCRuleItemBase::DoCheck()
{
	// 资源导入检查
	if (bOpenedInResImport)
	{
		DoCheckInResImport();
	}
	// 内容浏览器的资源检查
	if (bOpenedInContentBrowser)
	{
		DoCheckInContentBrowser();
	}
	// 场景资源检查
	if (bOpenedInMap)
	{
		DoCheckInMap();
	}
	// 构建流程中的资源检查
	if (bOpenedInBuild)
	{
		TArray<FString> ResCheckPaths;
		URRCModelHelper::GetValidResCheckPath(CheckPathsInBuild, ResCheckPaths);
		DoCheckInBuild(ResCheckPaths);
	}
}

void URRCRuleItemBase::DoCheckWithAssetData(const FAssetData& InAssetData)
{
	// 资源保存检查
	if (bOpenedInResSave)
	{
		DoCheckInResSave(InAssetData);
	}
}

void URRCRuleItemBase::DoCheckWithAssetDataAndOldName(const FAssetData& InAssetData, FString InOldName)
{
	// 资源重命名检查
	if (bOpenedInRename)
	{
		DoCheckInRename(InAssetData, InOldName);
	}
}

void URRCRuleItemBase::DoCheckInRename_Implementation(const FAssetData& InAssetData, const FString& InOldName)
{
	
}

bool URRCRuleItemBase::IsOpened(EResourceCheckType InResourceCheckType)
{
	bool bIsOpened = false;
	switch (InResourceCheckType)
	{
	case EResourceCheckType::RRC_ResImportCheck:
		bIsOpened = bOpenedInResImport ? true : false;
		break;
	case EResourceCheckType::RRC_ResSaveCheck:
		bIsOpened = bOpenedInResSave ? true : false;
		break;
	case EResourceCheckType::RRC_ContentBrowserResCheck:
		bIsOpened = bOpenedInContentBrowser ? true : false;
		break;
	case EResourceCheckType::RRC_MapResCheck:
		bIsOpened = bOpenedInMap ? true : false;
		break;	
	case EResourceCheckType::RRC_AutomationResCheck:
		bIsOpened = bOpenedInBuild ? true : false;
		break;
	case EResourceCheckType::RRC_ResRenameCheck:
		bIsOpened = bOpenedInRename ? true : false;
		break;
	default:
		;
	}
	return bIsOpened;
}
