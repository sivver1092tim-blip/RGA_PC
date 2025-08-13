
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PakOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MountPoint                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMobilePatchingUtils_MobileInstalledContent::Mount(int PakOrder, const struct FString& MountPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.Mount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.Mount");

	UMobilePatchingUtils_MobileInstalledContent_Mount_Params params;
	params.PakOrder = PakOrder;
	params.MountPoint = MountPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobileInstalledContent::GetInstalledContentSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize");

	UMobilePatchingUtils_MobileInstalledContent_GetInstalledContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobileInstalledContent::GetDiskFreeSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace");

	UMobilePatchingUtils_MobileInstalledContent_GetDiskFreeSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor)

void UMobilePatchingUtils_MobilePendingContent::StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.StartInstall");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.StartInstall");

	UMobilePatchingUtils_MobilePendingContent_StartInstall_Params params;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobilePendingContent::GetTotalDownloadedSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize");

	UMobilePatchingUtils_MobilePendingContent_GetTotalDownloadedSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobilePendingContent::GetRequiredDiskSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace");

	UMobilePatchingUtils_MobilePendingContent_GetRequiredDiskSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobilePendingContent::GetInstallProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress");

	UMobilePatchingUtils_MobilePendingContent_GetInstallProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMobilePatchingUtils_MobilePendingContent::GetDownloadStatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText");

	UMobilePatchingUtils_MobilePendingContent_GetDownloadStatusText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobilePendingContent::GetDownloadSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed");

	UMobilePatchingUtils_MobilePendingContent_GetDownloadSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePatchingUtils_MobilePendingContent::GetDownloadSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize");

	UMobilePatchingUtils_MobilePendingContent_GetDownloadSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RemoteManifestURL              (Parm, ZeroConstructor)
// struct FString                 CloudURL                       (Parm, ZeroConstructor)
// struct FString                 InstallDirectory               (Parm, ZeroConstructor)
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor)

void UMobilePatchingUtils_MobilePatchingLibrary::STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent");

	UMobilePatchingUtils_MobilePatchingLibrary_RequestContent_Params params;
	params.RemoteManifestURL = RemoteManifestURL;
	params.CloudURL = CloudURL;
	params.InstallDirectory = InstallDirectory;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMobilePatchingUtils_MobilePatchingLibrary::STATIC_HasActiveWiFiConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection");

	UMobilePatchingUtils_MobilePatchingLibrary_HasActiveWiFiConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UMobilePatchingUtils_MobilePatchingLibrary::STATIC_GetSupportedPlatformNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames");

	UMobilePatchingUtils_MobilePatchingLibrary_GetSupportedPlatformNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InstallDirectory               (Parm, ZeroConstructor)
// class UMobilePatchingUtils_MobileInstalledContent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMobilePatchingUtils_MobileInstalledContent* UMobilePatchingUtils_MobilePatchingLibrary::STATIC_GetInstalledContent(const struct FString& InstallDirectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent");

	UMobilePatchingUtils_MobilePatchingLibrary_GetInstalledContent_Params params;
	params.InstallDirectory = InstallDirectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMobilePatchingUtils_MobilePatchingLibrary::STATIC_GetActiveDeviceProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName");

	UMobilePatchingUtils_MobilePatchingLibrary_GetActiveDeviceProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
