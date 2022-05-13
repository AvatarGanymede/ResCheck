// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Models/RRCRuleModelBase.h"

#include "Commands/RRCResCheckCommandBase.h"

bool URRCRuleModelBase::IsOpened(EResourceCheckType InResourceCheckType)
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
