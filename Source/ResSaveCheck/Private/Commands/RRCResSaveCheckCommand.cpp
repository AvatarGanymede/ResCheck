#include "Commands/RRCResSaveCheckCommand.h"

#include "Helpers/RRCModelHelper.h"

FRRCResSaveCheckCommand::FRRCResSaveCheckCommand(EResourceCheckType InResourceCheckType)
	:FRRCResCheckCommandBase(InResourceCheckType)
{
	
}

FRRCResSaveCheckCommand::~FRRCResSaveCheckCommand()
{
	
}

void FRRCResSaveCheckCommand::ExecuteResCheckWithFAssetData(const FAssetData& InAssetData)
{
	if (ResourceCheckType != EResourceCheckType::RRC_ResSaveCheck)
	{
		return;
	}
	// 1.获取当前检查类型的检查模块
	URRCModelHelper::ExecuteAllRuleModelsWithAssetData(ResourceCheckType, InAssetData);
}
