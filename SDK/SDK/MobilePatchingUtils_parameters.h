#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
struct UMobilePatchingUtils_MobileInstalledContent_Mount_Params
{
	int                                                PakOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MountPoint;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
struct UMobilePatchingUtils_MobileInstalledContent_GetInstalledContentSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
struct UMobilePatchingUtils_MobileInstalledContent_GetDiskFreeSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.StartInstall
struct UMobilePatchingUtils_MobilePendingContent_StartInstall_Params
{
	struct FScriptDelegate                             OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnFailed;                                                 // (Parm, ZeroConstructor)
};

// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
struct UMobilePatchingUtils_MobilePendingContent_GetTotalDownloadedSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
struct UMobilePatchingUtils_MobilePendingContent_GetRequiredDiskSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
struct UMobilePatchingUtils_MobilePendingContent_GetInstallProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
struct UMobilePatchingUtils_MobilePendingContent_GetDownloadStatusText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
struct UMobilePatchingUtils_MobilePendingContent_GetDownloadSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
struct UMobilePatchingUtils_MobilePendingContent_GetDownloadSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
struct UMobilePatchingUtils_MobilePatchingLibrary_RequestContent_Params
{
	struct FString                                     RemoteManifestURL;                                        // (Parm, ZeroConstructor)
	struct FString                                     CloudURL;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InstallDirectory;                                         // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnFailed;                                                 // (Parm, ZeroConstructor)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
struct UMobilePatchingUtils_MobilePatchingLibrary_HasActiveWiFiConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
struct UMobilePatchingUtils_MobilePatchingLibrary_GetSupportedPlatformNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
struct UMobilePatchingUtils_MobilePatchingLibrary_GetInstalledContent_Params
{
	struct FString                                     InstallDirectory;                                         // (Parm, ZeroConstructor)
	class UMobilePatchingUtils_MobileInstalledContent* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
struct UMobilePatchingUtils_MobilePatchingLibrary_GetActiveDeviceProfileName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
