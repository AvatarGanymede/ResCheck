// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Models/RRCRuleItemBase.h"
#include "RRCModelHelper.generated.h"

class URRCRuleModelBase;
enum class EResourceCheckType;
/**
 * 关于model相关的一些工具类方法
 */
UCLASS()
class RRCCORE_API URRCModelHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	 * 加载资源检查配置蓝图
	 */
	static UBlueprint* LoadAllConfig();
	/**
	 * 根据资源检查类型，获取对应的所有检查模块数据
	 */
	static void GetAllRuleModels(EResourceCheckType InResourceCheckType, TArray<class URRCRuleModelBase*>& AllRuleModels);
	/**
	 * 根据指定的检查类型，执行检查模块
	 */
	static void ExecuteAllRuleModels(EResourceCheckType InResourceCheckType);
	/**
	 * 根据指定的检查类型和AssetData，执行检查模块
	 */
	static void ExecuteAllRuleModelsWithAssetData(EResourceCheckType InResourceCheckType, const FAssetData& InAssetData);
	/**
	 * 根据指定的检查类型和AssetData还有旧名称，执行检查模块
	 */
	static void ExecuteAllRuleModelsWithAssetDataAndOldName(EResourceCheckType InResourceCheckType, const FAssetData& InAssetData, FString InOldName);

	/**
	 * 获取项目uproject路径
	 */
	static FString GetProjectFilePath();

	/**
	 * 获取UE4Editor-Cmd.exe路径
	 */
	static FString GetUeCmdExePath();

	/**
	 * 是否在路径黑名单中
	 * @param InFilePath 需要检测的路径
	 * @param AllBlackListPaths 黑名单路径
	 * @return 是否在黑名单中
	 */
	UFUNCTION(BlueprintCallable)
	static bool IsInBlackListPathsByPath(const FString InFilePath, const TArray<FDirectoryPath> AllBlackListPaths);

	/**
	 * 是否在路径黑名单中
	 * @param InFilePath 需要检测的路径
	 * @param AllBlackListPaths 黑名单路径
	 * @return 是否在黑名单中
	 */
	UFUNCTION(BlueprintCallable)
	static bool IsInBlackListPathsByFStringPath(const FString InFilePath, const TArray<FString> AllBlackListPaths);

	/**
	 * 是否在路径黑名单中
	 * @param InAssetData 需要检测的资源
	 * @param AllBlackListPaths 黑名单路径
	 * @return 是否在黑名单中
	 */
	UFUNCTION(BlueprintCallable)
	static bool IsInBlackListPathsByAssetData(const FAssetData& InAssetData, const TArray<FDirectoryPath> AllBlackListPaths);
	
	/**
	 * 获取有效的检查路径
	 * @param InResCheckPaths 包含白名单和黑名单的路径
	 * @param ValidResCheckPaths 所有有效的检查路径
	 */
	UFUNCTION(BlueprintCallable)
	static bool GetValidResCheckPath(TArray<FRRCResCheckPath> InResCheckPaths, TArray<FString>& ValidResCheckPaths);
};
