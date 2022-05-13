// Copyright © 2018-2020 Tencent. All Rights Reserved.


#include "Helpers/RRCModelHelper.h"

#include "Editor.h"
#include "RRCCoreSubsystem.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Commands/RRCResCheckCommandBase.h"
#include "Helpers/RRCLogHelper.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Models/RRCResourceCheckConfigBase.h"
#include "Models/RRCRuleItemBase.h"
#include "Models/RRCRuleModelBase.h"

#define ALL_CONFIG_PATH TEXT("Blueprint'/ResourceRuleCheck/Configs/AllConfig.AllConfig'")

UBlueprint* URRCModelHelper::LoadAllConfig()
{
	const FString ConfigPath = ALL_CONFIG_PATH;
	return LoadObject<UBlueprint>(nullptr, *ConfigPath);
}

void URRCModelHelper::GetAllRuleModels(EResourceCheckType InResourceCheckType, TArray<class URRCRuleModelBase*>& AllRuleModels)
{
	// 1.加载资源检查配置蓝图
	UBlueprint* ConfigBP = LoadAllConfig();
	if (ConfigBP)
	{
		URRCResourceCheckConfigBase* RRCConfig = Cast<URRCResourceCheckConfigBase>(ConfigBP->GeneratedClass.GetDefaultObject());
		if (RRCConfig)
		{
			AllRuleModels.Reset();
			for (FRRCRuleModel SingleRuleModel : RRCConfig->AllRuleModels)
			{
				if (!SingleRuleModel.bOpened) // 没有开启
				{
					continue;
				}
				UBlueprint* SingleRuleModelBP = SingleRuleModel.RuleModelBP;
				URRCRuleModelBase* RRCRuleModel = Cast<URRCRuleModelBase>(SingleRuleModelBP->GeneratedClass.GetDefaultObject());
				if (RRCRuleModel)
				{
					const bool bNeedCheck = RRCRuleModel->IsOpened(InResourceCheckType); // 是否需要进行检查
					if (bNeedCheck)
					{
						// 2.获取需要检查的检查模块
						AllRuleModels.Add(RRCRuleModel);
					}
				}
			}
			// 3.按优先级进行排序
			if (AllRuleModels.Num() > 0)
			{
				AllRuleModels.Sort([](const URRCRuleModelBase& A, const URRCRuleModelBase& B) { return A.RuleModelPriority > B.RuleModelPriority; });
			}
		}
	}
}

void URRCModelHelper::ExecuteAllRuleModels(EResourceCheckType InResourceCheckType)
{
	URRCLogHelper::PrintLogInRRC(TEXT("开始执行资源检查..."), ERRCLogType::RRC_Log, true);
	URRCLogHelper::PrintLogInRRC(TEXT("开始加载资源检查配置蓝图..."), ERRCLogType::RRC_Log, true);
	// 1.加载资源检查配置蓝图
	UBlueprint* ConfigBP = LoadAllConfig();
	if (ConfigBP)
	{
		URRCLogHelper::PrintLogInRRC(TEXT("加载资源检查配置蓝图成功..."), ERRCLogType::RRC_Log, true);
		URRCResourceCheckConfigBase* RRCConfig = Cast<URRCResourceCheckConfigBase>(ConfigBP->GeneratedClass.GetDefaultObject());
		if (RRCConfig)
		{
			TArray<URRCRuleModelBase*> AllRuleModels;
			for (FRRCRuleModel SingleRuleModel : RRCConfig->AllRuleModels)
			{
				if (!SingleRuleModel.bOpened) // 没有开启
				{
					continue;
				}
				UBlueprint* SingleRuleModelBP = SingleRuleModel.RuleModelBP;
				URRCRuleModelBase* RRCRuleModel = Cast<URRCRuleModelBase>(SingleRuleModelBP->GeneratedClass.GetDefaultObject());
				if (RRCRuleModel)
				{
					const bool bNeedCheck = RRCRuleModel->IsOpened(InResourceCheckType); // 是否需要进行检查
					if (bNeedCheck)
					{
						// 2.获取需要检查的检查模块
						AllRuleModels.Add(RRCRuleModel);
					}
				}
			}

			// 3.按优先级进行排序
			if (AllRuleModels.Num() > 0)
			{
				AllRuleModels.Sort([](const URRCRuleModelBase& A, const URRCRuleModelBase& B) { return A.RuleModelPriority > B.RuleModelPriority; });
			}
			// 4.遍历检查模块的检查项
			for (URRCRuleModelBase* SingleRuleModel : AllRuleModels)
			{
				// 获取检查模块的所有检查项
				TArray<FRRCRuleItem> RRCRuleItems = SingleRuleModel->RRCRuleItems;
				TArray<URRCRuleItemBase*> RuleItems;
				for (FRRCRuleItem SingleRRCRuleItem : RRCRuleItems)
				{
					if (!SingleRRCRuleItem.bOpened) // 没有开启
					{
						continue;
					}
					UBlueprint* SingleRuleItemBP = SingleRRCRuleItem.RuleItemBP;
					URRCRuleItemBase* RRCRuleItem = Cast<URRCRuleItemBase>(SingleRuleItemBP->GeneratedClass.GetDefaultObject());
					if (RRCRuleItem)
					{
						const bool bNeedCheck = RRCRuleItem->IsOpened(InResourceCheckType); // 是否需要进行检查
						if (bNeedCheck)
						{
							RuleItems.Add(RRCRuleItem);
						}
						// 按优先级排序
						RuleItems.Sort([](const URRCRuleItemBase& A, const URRCRuleItemBase& B) { return A.RulePriority > B.RulePriority; });
						// 5.遍历检查项,执行检查逻辑
						for (URRCRuleItemBase* SingleRuleItem : RuleItems)
						{
							FString LogContent = FString::Format(TEXT("当前执行的检查项是:{0}"), {SingleRuleItem->RuleName});
							URRCLogHelper::PrintLogInRRC(LogContent, ERRCLogType::RRC_Log, true);
							SingleRuleItem->DoCheck();
						}
					}
				}
			}

			URRCLogHelper::SaveLogToFile(*GEditor->GetEditorSubsystem<URRCCoreSubsystem>()->GetAllResCheckLogs());
		}
	}
	else
	{
		URRCLogHelper::PrintLogInRRC(TEXT("加载资源检查配置蓝图失败..."), ERRCLogType::RRC_Error, true);
	}
}

void URRCModelHelper::ExecuteAllRuleModelsWithAssetData(EResourceCheckType InResourceCheckType, const FAssetData& InAssetData)
{
	URRCLogHelper::PrintLogInRRC(TEXT("开始执行资源检查..."), ERRCLogType::RRC_Log, true);
	URRCLogHelper::PrintLogInRRC(TEXT("开始加载资源检查配置蓝图..."), ERRCLogType::RRC_Log, true);
	// 1.加载资源检查配置蓝图
	UBlueprint* ConfigBP = LoadAllConfig();
	if (ConfigBP)
	{
		URRCLogHelper::PrintLogInRRC(TEXT("加载资源检查配置蓝图成功..."), ERRCLogType::RRC_Log, true);
		URRCResourceCheckConfigBase* RRCConfig = Cast<URRCResourceCheckConfigBase>(ConfigBP->GeneratedClass.GetDefaultObject());
		if (RRCConfig)
		{
			TArray<URRCRuleModelBase*> AllRuleModels;
			for (FRRCRuleModel SingleRuleModel : RRCConfig->AllRuleModels)
			{
				if (!SingleRuleModel.bOpened) // 没有开启
				{
					continue;
				}
				UBlueprint* SingleRuleModelBP = SingleRuleModel.RuleModelBP;
				URRCRuleModelBase* RRCRuleModel = Cast<URRCRuleModelBase>(SingleRuleModelBP->GeneratedClass.GetDefaultObject());
				if (RRCRuleModel)
				{
					const bool bNeedCheck = RRCRuleModel->IsOpened(InResourceCheckType); // 是否需要进行检查
					if (bNeedCheck)
					{
						// 2.获取需要检查的检查模块
						AllRuleModels.Add(RRCRuleModel);
					}
				}
			}

			// 3.按优先级进行排序
			if (AllRuleModels.Num() > 0)
			{
				AllRuleModels.Sort([](const URRCRuleModelBase& A, const URRCRuleModelBase& B) { return A.RuleModelPriority > B.RuleModelPriority; });
			}
			// 4.遍历检查模块的检查项
			for (URRCRuleModelBase* SingleRuleModel : AllRuleModels)
			{
				// 获取检查模块的所有检查项
				TArray<FRRCRuleItem> RRCRuleItems = SingleRuleModel->RRCRuleItems;
				TArray<URRCRuleItemBase*> RuleItems;
				for (FRRCRuleItem SingleRRCRuleItem : RRCRuleItems)
				{
					if (!SingleRRCRuleItem.bOpened) // 没有开启
					{
						continue;
					}
					UBlueprint* SingleRuleItemBP = SingleRRCRuleItem.RuleItemBP;
					URRCRuleItemBase* RRCRuleItem = Cast<URRCRuleItemBase>(SingleRuleItemBP->GeneratedClass.GetDefaultObject());
					if (RRCRuleItem)
					{
						const bool bNeedCheck = RRCRuleItem->IsOpened(InResourceCheckType); // 是否需要进行检查
						if (bNeedCheck)
						{
							RuleItems.Add(RRCRuleItem);
						}
						// 按优先级排序
						RuleItems.Sort([](const URRCRuleItemBase& A, const URRCRuleItemBase& B) { return A.RulePriority > B.RulePriority; });
						// 5.遍历检查项,执行检查逻辑
						for (URRCRuleItemBase* SingleRuleItem : RuleItems)
						{
							FString LogContent = FString::Format(TEXT("当前执行的检查项是:{0}"), {SingleRuleItem->RuleName});
							URRCLogHelper::PrintLogInRRC(LogContent, ERRCLogType::RRC_Log, true);
							SingleRuleItem->DoCheckWithAssetData(InAssetData);
						}
					}
				}
			}

			URRCLogHelper::SaveLogToFile(*GEditor->GetEditorSubsystem<URRCCoreSubsystem>()->GetAllResCheckLogs());
		}
	}
	else
	{
		URRCLogHelper::PrintLogInRRC(TEXT("加载资源检查配置蓝图失败..."), ERRCLogType::RRC_Error, true);
	}
}

void URRCModelHelper::ExecuteAllRuleModelsWithAssetDataAndOldName(EResourceCheckType InResourceCheckType, const FAssetData& InAssetData, FString InOldName)
{
	URRCLogHelper::PrintLogInRRC(TEXT("开始执行资源检查..."), ERRCLogType::RRC_Log, true);
	URRCLogHelper::PrintLogInRRC(TEXT("开始加载资源检查配置蓝图..."), ERRCLogType::RRC_Log, true);
	// 1.加载资源检查配置蓝图
	UBlueprint* ConfigBP = LoadAllConfig();
	if (ConfigBP)
	{
		URRCLogHelper::PrintLogInRRC(TEXT("加载资源检查配置蓝图成功..."), ERRCLogType::RRC_Log, true);
		URRCResourceCheckConfigBase* RRCConfig = Cast<URRCResourceCheckConfigBase>(ConfigBP->GeneratedClass.GetDefaultObject());
		if (RRCConfig)
		{
			TArray<URRCRuleModelBase*> AllRuleModels;
			for (FRRCRuleModel SingleRuleModel : RRCConfig->AllRuleModels)
			{
				if (!SingleRuleModel.bOpened) // 没有开启
				{
					continue;
				}
				UBlueprint* SingleRuleModelBP = SingleRuleModel.RuleModelBP;
				URRCRuleModelBase* RRCRuleModel = Cast<URRCRuleModelBase>(SingleRuleModelBP->GeneratedClass.GetDefaultObject());
				if (RRCRuleModel)
				{
					const bool bNeedCheck = RRCRuleModel->IsOpened(InResourceCheckType); // 是否需要进行检查
					if (bNeedCheck)
					{
						// 2.获取需要检查的检查模块
						AllRuleModels.Add(RRCRuleModel);
					}
				}
			}

			// 3.按优先级进行排序
			if (AllRuleModels.Num() > 0)
			{
				AllRuleModels.Sort([](const URRCRuleModelBase& A, const URRCRuleModelBase& B) { return A.RuleModelPriority > B.RuleModelPriority; });
			}
			// 4.遍历检查模块的检查项
			for (URRCRuleModelBase* SingleRuleModel : AllRuleModels)
			{
				// 获取检查模块的所有检查项
				TArray<FRRCRuleItem> RRCRuleItems = SingleRuleModel->RRCRuleItems;
				TArray<URRCRuleItemBase*> RuleItems;
				for (FRRCRuleItem SingleRRCRuleItem : RRCRuleItems)
				{
					if (!SingleRRCRuleItem.bOpened) // 没有开启
					{
						continue;
					}
					UBlueprint* SingleRuleItemBP = SingleRRCRuleItem.RuleItemBP;
					URRCRuleItemBase* RRCRuleItem = Cast<URRCRuleItemBase>(SingleRuleItemBP->GeneratedClass.GetDefaultObject());
					if (RRCRuleItem)
					{
						const bool bNeedCheck = RRCRuleItem->IsOpened(InResourceCheckType); // 是否需要进行检查
						if (bNeedCheck)
						{
							RuleItems.Add(RRCRuleItem);
						}
						// 按优先级排序
						RuleItems.Sort([](const URRCRuleItemBase& A, const URRCRuleItemBase& B) { return A.RulePriority > B.RulePriority; });
						// 5.遍历检查项,执行检查逻辑
						for (URRCRuleItemBase* SingleRuleItem : RuleItems)
						{
							FString LogContent = FString::Format(TEXT("当前执行的检查项是:{0}"), {SingleRuleItem->RuleName});
							URRCLogHelper::PrintLogInRRC(LogContent, ERRCLogType::RRC_Log, true);
							SingleRuleItem->DoCheckWithAssetDataAndOldName(InAssetData, InOldName);
						}
					}
				}
			}
			URRCLogHelper::SaveLogToFile(*GEditor->GetEditorSubsystem<URRCCoreSubsystem>()->GetAllResCheckLogs());
		}
	}
	else
	{
		URRCLogHelper::PrintLogInRRC(TEXT("加载资源检查配置蓝图失败..."), ERRCLogType::RRC_Error, true);
	}
}

FString URRCModelHelper::GetProjectFilePath()
{
	FString ProjectPath = UKismetSystemLibrary::GetProjectDirectory();
	FString ProjectName = FString(FApp::GetProjectName()).Append(TEXT(".uproject"));
	return FPaths::Combine(ProjectPath, ProjectName);
}

FString URRCModelHelper::GetUeCmdExePath()
{
	// 获取前缀名称
	FString PrefixName;
#if ENGINE_MAJOR_VERSION > 4
	PrefixName = TEXT("UnrealEditor");
#else
	PrefixName = TEXT("UE4Editor");
#endif

	// return：路径+前缀+后缀
#if PLATFORM_WINDOWS
	return FPaths::Combine(
		FPaths::ConvertRelativePathToFull(FPaths::EngineDir()),
		TEXT("Binaries"),
#if PLATFORM_64BITS
		TEXT("Win64"),
#else
		TEXT("Win32"),
#endif
		FString::Printf(TEXT("%s-Cmd.exe"), *PrefixName)
	);
#endif

#if PLATFORM_MAC
	return FPaths::Combine(
		FPaths::ConvertRelativePathToFull(FPaths::EngineDir()),
		TEXT("Binaries"),
		TEXT("Mac"),
		FString::Printf(TEXT("%s-Cmd"),*PrefixName)
	);
#endif
	return TEXT("");
}

bool URRCModelHelper::IsInBlackListPathsByPath(const FString InFilePath, const TArray<FDirectoryPath> AllBlackListPaths)
{
	bool bIsInBlackListPaths = false;
	for (FDirectoryPath SingleBlackListPath : AllBlackListPaths)
	{
		FString SingleBlackListPathString = SingleBlackListPath.Path;
		if (InFilePath.StartsWith(SingleBlackListPathString))
		{
			bIsInBlackListPaths = true;
			break;
		}
	}
	return bIsInBlackListPaths;
}

bool URRCModelHelper::IsInBlackListPathsByFStringPath(const FString InFilePath, const TArray<FString> AllBlackListPaths)
{
	bool bIsInBlackListPaths = false;
	for (FString SingleBlackListPath : AllBlackListPaths)
	{
		if (InFilePath.StartsWith(SingleBlackListPath))
		{
			bIsInBlackListPaths = true;
			break;
		}
	}
	return bIsInBlackListPaths;
}

bool URRCModelHelper::IsInBlackListPathsByAssetData(const FAssetData& InAssetData, const TArray<FDirectoryPath> AllBlackListPaths)
{
	return IsInBlackListPathsByPath(InAssetData.PackagePath.ToString(), AllBlackListPaths);
}

bool URRCModelHelper::GetValidResCheckPath(TArray<struct FRRCResCheckPath> InResCheckPaths, TArray<FString>& ValidResCheckPaths)
{
	if (InResCheckPaths.Num() == 0) // 没有填写路径，则没有有效路径
	{
		return true;
	}
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	for (FRRCResCheckPath ResCheckPath : InResCheckPaths)
	{
		if (ResCheckPath.CheckPathInWhiteList.Path.IsEmpty()) // 没有填写白名单
		{
			continue;
		}
		// 1.获取所有白名单路径
		TArray<FString> AllWhiteListPaths;
		if (ResCheckPath.bUseWildcardInWhiteList)
		{
			if (ResCheckPath.CheckPathInWhiteList.Path.MatchesWildcard(ResCheckPath.WildcardPathInWhiteList)) // 满足通配符要求，则添加
			{
				AllWhiteListPaths.Add(ResCheckPath.CheckPathInWhiteList.Path); // 添加路径本身
			}
		}
		else
		{
			AllWhiteListPaths.Add(ResCheckPath.CheckPathInWhiteList.Path); // 添加路径本身
		}
		// 添加所有满足要求的子路径
		AssetRegistryModule.Get().EnumerateSubPaths(ResCheckPath.CheckPathInWhiteList.Path, [ResCheckPath, &AllWhiteListPaths](FString Path)
		{
			// 处理通配符逻辑
			if (ResCheckPath.bUseWildcardInWhiteList)
			{
				if (!Path.MatchesWildcard(ResCheckPath.WildcardPathInWhiteList)) // 不满足通配符要求，则不添加
				{				
					return true;
				}
			}
			AllWhiteListPaths.Add(Path); // 满足要求的，添加
			return true;
		}, true);
		// 2.获取所有黑名单路径
		if (ResCheckPath.CheckPathInBlackList.Path.IsEmpty()) // 没有黑名单
		{
			ValidResCheckPaths += AllWhiteListPaths; // 直接添加到有效路径中
		}
		else // 有黑名单
		{
			TArray<FString> AllBlackListPaths;
			if (ResCheckPath.bUseWildcardInBlackList)
			{
				if (ResCheckPath.CheckPathInBlackList.Path.MatchesWildcard(ResCheckPath.WildcardPathInBlackList)) // 满足通配符要求，则添加
				{
					AllBlackListPaths.Add(ResCheckPath.CheckPathInBlackList.Path); // 添加路径本身
				}
			}
			else
			{
				AllBlackListPaths.Add(ResCheckPath.CheckPathInBlackList.Path); // 添加路径本身
			}
			// 添加所有满足要求的子路径
			AssetRegistryModule.Get().EnumerateSubPaths(ResCheckPath.CheckPathInBlackList.Path, [ResCheckPath, &AllBlackListPaths](FString Path)
			{
				// 处理通配符逻辑
				if (ResCheckPath.bUseWildcardInBlackList)
				{
					if (!Path.MatchesWildcard(ResCheckPath.WildcardPathInBlackList)) // 不满足通配符要求，则不添加
					{
						return true;
					}
				}
				AllBlackListPaths.Add(Path); // 满足要求的，添加
				return true;
			}, true);
			TArray<FString> PathsToDelete;
			for (FString SingleWhiteListPath : AllWhiteListPaths)
			{
				if(IsInBlackListPathsByFStringPath(SingleWhiteListPath, AllBlackListPaths)) // 在黑名单中
				{
					PathsToDelete.Add(SingleWhiteListPath);
				}
			}
			// 3.删除在黑名单中的路径
			for (FString SinglePathsToDelete : PathsToDelete)
			{
				AllWhiteListPaths.Remove(SinglePathsToDelete);
			}
			// 4.添加有效路径
			ValidResCheckPaths += AllWhiteListPaths;
		}
	}
	return true;
}
