// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RRCLogHelper.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(RRCLog, Log, All);

/**
 * 日志级别
 */
UENUM()
enum ERRCLogType
{
	RRC_Log,
	RRC_Warning,
	RRC_Error
};

/**
 * 日志相关的接口
 */
UCLASS()
class RRCCORE_API URRCLogHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/// <summary>
	/// 资源检查日志输出面板，如果需要，也会保存下来用于输出到本地
	/// @param LogContent 日志内容
	/// @param Verbosity 日志级别
	/// @param bSaveToAllLog 是否需要保存到本地
	/// @param bShowMessageLog 是否显示messagelog小弹窗
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "RRC")
	static void PrintLogInRRC(const FString& LogContent,const TEnumAsByte<ERRCLogType> Verbosity, const bool bSaveToAllLog = false, const bool bShowMessageLog = false);

	/**
	 * 将所有日志保存到本地文件中
	 * @param AllLog 所有的日志
	 */
	UFUNCTION(BlueprintCallable, Category = "RRC")
	static void SaveLogToFile(const TArray<FString> AllLog);
};
