// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Helpers/RRCLogHelper.h"

#include "Editor.h"
#include "RRCCoreSubsystem.h"
DEFINE_LOG_CATEGORY(RRCLog);

#define LOCTEXT_NAMESPACE "URRCLogHelper"

void URRCLogHelper::PrintLogInRRC(const FString& LogContent,const TEnumAsByte<ERRCLogType> Verbosity, const bool bSaveToAllLog, const bool bShowMessageLog)
{
	FString WholeLog(TEXT(""));
	FText WholeLogText = FText::FromString(WholeLog);
	switch (Verbosity)
	{
	case ERRCLogType::RRC_Error:
		WholeLog = FString(TEXT("[RRC_Error]:"));
		WholeLog.Append(LogContent);
		WholeLogText = FText::FromString(WholeLog);
		FMessageLog("RRCResCheck").Error(WholeLogText);
		// 显示messagelog小弹窗
		if (bShowMessageLog)
		{
			FMessageLog("RRCResCheck").Notify(WholeLogText, EMessageSeverity::Error, true);
		}
		break;
	case ERRCLogType::RRC_Warning:
		WholeLog = FString(TEXT("[RRC_Warning]:"));
		WholeLog.Append(LogContent);
		WholeLogText = FText::FromString(WholeLog);
		FMessageLog("RRCResCheck").Warning(FText::FromString(WholeLog));
		// 显示messagelog小弹窗
		if (bShowMessageLog)
		{
			FMessageLog("RRCResCheck").Notify(WholeLogText, EMessageSeverity::Warning, true);
		}
		break;
	case ERRCLogType::RRC_Log:
		WholeLog = FString(TEXT("[RRC_Log]:"));
		WholeLog.Append(LogContent);
		WholeLogText = FText::FromString(WholeLog);
		FMessageLog("RRCResCheck").Info(FText::FromString(WholeLog));
		// 显示messagelog小弹窗
		if (bShowMessageLog)
		{
			FMessageLog("RRCResCheck").Notify(WholeLogText, EMessageSeverity::Info, true);
		}
		break;
	}
	// 保存到AllLog，即保存到本地文件
	if (bSaveToAllLog)
	{
		TArray<FString>* AllResCheckLogs = GEditor->GetEditorSubsystem<URRCCoreSubsystem>()->GetAllResCheckLogs();
		AllResCheckLogs->Add(WholeLog);
	}
}

void URRCLogHelper::SaveLogToFile(const TArray<FString> AllLog)
{
	FString OutputLogPath = FString::Printf(TEXT("%s%s.log"), *FPaths::ProjectLogDir(), *FString(TEXT("RRCLog")));// 输出信息的路径+名称+扩展名
	TSharedPtr<FArchive> Writer = MakeShareable(IFileManager::Get().CreateFileWriter( *OutputLogPath ));
	auto WriteLine = [Writer](FString&& Line)
	{
		FTCHARToUTF8 UTF8String(*(MoveTemp(Line) + LINE_TERMINATOR));
		Writer->Serialize((UTF8CHAR*)UTF8String.Get(), UTF8String.Length());
	};	
	for (const FString SingleDebugInfo : AllLog)
	{
		WriteLine(FString::Printf(TEXT("%s"), *SingleDebugInfo));
	}
}

#undef LOCTEXT_NAMESPACE