// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RRCRuleItemBase.generated.h"

enum class EResourceCheckType;

/**
 * 检查项
 */
USTRUCT(BlueprintType)
struct FRRCRuleItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项名称"))
	FString RuleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项描述"))
	FString RuleDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "是否开启"))
	bool bOpened;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项蓝图"))
	UBlueprint* RuleItemBP;
};

/**
 * 资源检查的路径信息
 */
USTRUCT(BlueprintType)
struct FRRCResCheckPath
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "资源导入的资源检查路径白名单", ContentDir, LongPackageName))
	FDirectoryPath CheckPathInWhiteList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "是否启用通配符白名单"))
	bool bUseWildcardInWhiteList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "通配符白名单", ContentDir, LongPackageName, EditCondition="bUseWildcardInWhiteList"))
	FString WildcardPathInWhiteList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "资源导入的资源检查路径黑名单", ContentDir, LongPackageName))
	FDirectoryPath CheckPathInBlackList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "是否启用通配符黑名单"))
	bool bUseWildcardInBlackList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "通配符黑名单", ContentDir, LongPackageName, EditCondition="bUseWildcardInBlackList"))
	FString WildcardPathInBlackList;
};

/**
 * 检查项的蓝图基类
 */
UCLASS(Abstract, Blueprintable)
class RRCCORE_API URRCRuleItemBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项名称"))
	FString RuleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项描述"))
	FString RuleDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="基础信息", meta=(DisplayName = "检查项优先级", ToolTip = "从小到大，优先级递增。不填则为0。"))
	int32 RulePriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在资源导入检查中开启"))
	uint8 bOpenedInResImport : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在资源保存检查中开启"))
	uint8 bOpenedInResSave : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在内容浏览器的资源检查中开启"))
	uint8 bOpenedInContentBrowser : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在场景资源检查中开启"))
	uint8 bOpenedInMap : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在构建流程中的资源检查开启"))
	uint8 bOpenedInBuild : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="开启信息", meta=(DisplayName = "在资产重命名时的资源检查开启"))
	uint8 bOpenedInRename : 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "资源导入的资源检查路径（选填）", ContentDir, LongPackageName, EditCondition="bOpenedInResImport"))
	TArray<FRRCResCheckPath> CheckPathsInResImport;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "资源保存的资源检查路径（选填）", ContentDir, LongPackageName, EditCondition="bOpenedInResSave"))
	TArray<FRRCResCheckPath> CheckPathsInResSave;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "内容浏览器的资源检查路径（选填）", ContentDir, LongPackageName, EditCondition="bOpenedInContentBrowser"))
	TArray<FRRCResCheckPath> CheckPathsInContentBrowser;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "场景的资源检查路径（选填）", ContentDir, LongPackageName, EditCondition="bOpenedInMap"))
	TArray<FRRCResCheckPath> CheckPathsInMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "构建流程的资源检查路径（选填）", ContentDir, LongPackageName, EditCondition="bOpenedInBuild"))
	TArray<FRRCResCheckPath> CheckPathsInBuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="路径信息", meta=(DisplayName = "资产重命名的资源检查路径（选填）", ContentDir, LongPackageName, EditCondition="bOpenedInRename"))
	TArray<FRRCResCheckPath> CheckPathsInRename;
public:
	/**
	 * 执行具体检查的逻辑
	 */
	UFUNCTION()
	void DoCheck();

	UFUNCTION()
	void DoCheckWithAssetData(const FAssetData& InAssetData);
	
	UFUNCTION()
	void DoCheckWithAssetDataAndOldName(const FAssetData& InAssetData, FString InOldName);
	/**
	 * 在资源导入检查中开启时，执行的检查逻辑
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(DisplayName = "资源导入检查"))
	void DoCheckInResImport();
	/**
	 * 在资源保存检查中开启时，执行的检查逻辑
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(DisplayName = "资源保存检查"))
	void DoCheckInResSave(const FAssetData& InAssetData);
	/**
	 * 在内容浏览器的资源检查中开启时，执行的检查逻辑
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(DisplayName = "内容浏览器的资源检查"))
	void DoCheckInContentBrowser();
	/**
	 * 在场景资源检查中开启时，执行的检查逻辑
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(DisplayName = "场景资源检查"))
	void DoCheckInMap();
	/**
	 * 在构建流程中的资源检查开启时，执行的检查逻辑
	 * @param ResCheckPaths 需要检查的路径。这个路径是综合了白名单和黑名单之后的有效路径。
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(DisplayName = "构建流程中的资源检查"))
	void DoCheckInBuild(const TArray<FString>& ResCheckPaths);
	/**
	 * 在资产重命名时的资源检查开始时，执行的检查逻辑
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(DisplayName = "资产重命名时的资源检查"))
	void DoCheckInRename(const FAssetData& InAssetData, const FString& InOldName);
public:	
	/**
	 * 判断当前检查模块是否在指定的检查类型中开启
	 */
	UFUNCTION()
	bool IsOpened(EResourceCheckType InResourceCheckType);
};
