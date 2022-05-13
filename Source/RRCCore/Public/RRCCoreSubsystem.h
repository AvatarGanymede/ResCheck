// Copyright © 2018-2020 Tencent. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "RRCCoreSubsystem.generated.h"



/**
 * 
 */
UCLASS()
class RRCCORE_API URRCCoreSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	/**
	 * 执行自动化资源检查
	 */
	FString GetAutomationResCheckCommandletCmd();
	/**
	 * 获取所有需要输出到本地的日志信息
	 */
	TArray<FString>* GetAllResCheckLogs();
	/**
	 * 清空日志信息
	 */
	void ClearAllResCheckLogs();
	
private:
	/** 资源检查所有需要保存到本地的日志 */
	UPROPERTY(Transient)
	TArray<FString> AllResCheckLogs;
};
