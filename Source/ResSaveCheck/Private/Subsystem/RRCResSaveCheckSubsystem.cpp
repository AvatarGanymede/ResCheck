// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Subsystem/RRCResSaveCheckSubsystem.h"

#include "Commands/RRCResSaveCheckCommand.h"


void URRCResSaveCheckSubsystem::ValidateOnSave(TArray<FAssetData> AssetDataList) const
{
	Super::ValidateOnSave(AssetDataList);

	for (FAssetData SingleAssetData : AssetDataList)
	{
		UE_LOG(LogTemp, Warning, TEXT("huahaileili, ValidateOnSave SingleAssetData:%s"), *SingleAssetData.AssetName.ToString())
		TSharedPtr<FRRCResSaveCheckCommand> ResSaveCheckCommand = MakeShareable(new FRRCResSaveCheckCommand(EResourceCheckType::RRC_ResSaveCheck));
		ResSaveCheckCommand->ExecuteResCheckWithFAssetData(SingleAssetData);
	}
}
