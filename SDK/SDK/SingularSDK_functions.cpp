
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

// Function SingularSDK.SingularSDKBPLibrary.UnsetCustomUserId
// (Final, Native, Static, Public, BlueprintCallable)

void USingularSDK_SingularSDKBPLibrary::STATIC_UnsetCustomUserId()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.UnsetCustomUserId");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.UnsetCustomUserId");

	USingularSDK_SingularSDKBPLibrary_UnsetCustomUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.TrackingUnder13
// (Final, Native, Static, Public, BlueprintCallable)

void USingularSDK_SingularSDKBPLibrary::STATIC_TrackingUnder13()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.TrackingUnder13");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.TrackingUnder13");

	USingularSDK_SingularSDKBPLibrary_TrackingUnder13_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.TrackingOptIn
// (Final, Native, Static, Public, BlueprintCallable)

void USingularSDK_SingularSDKBPLibrary::STATIC_TrackingOptIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.TrackingOptIn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.TrackingOptIn");

	USingularSDK_SingularSDKBPLibrary_TrackingOptIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.StopAllTracking
// (Final, Native, Static, Public, BlueprintCallable)

void USingularSDK_SingularSDKBPLibrary::STATIC_StopAllTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.StopAllTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.StopAllTracking");

	USingularSDK_SingularSDKBPLibrary_StopAllTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SkanUpdateConversionValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            conversionValue                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USingularSDK_SingularSDKBPLibrary::STATIC_SkanUpdateConversionValue(int conversionValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SkanUpdateConversionValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SkanUpdateConversionValue");

	USingularSDK_SingularSDKBPLibrary_SkanUpdateConversionValue_Params params;
	params.conversionValue = conversionValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SingularSDK.SingularSDKBPLibrary.SkanRegisterAppForAdNetworkAttribution
// (Final, Native, Static, Public, BlueprintCallable)

void USingularSDK_SingularSDKBPLibrary::STATIC_SkanRegisterAppForAdNetworkAttribution()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SkanRegisterAppForAdNetworkAttribution");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SkanRegisterAppForAdNetworkAttribution");

	USingularSDK_SingularSDKBPLibrary_SkanRegisterAppForAdNetworkAttribution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SkanGetConversionValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USingularSDK_SingularSDKBPLibrary::STATIC_SkanGetConversionValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SkanGetConversionValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SkanGetConversionValue");

	USingularSDK_SingularSDKBPLibrary_SkanGetConversionValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SingularSDK.SingularSDKBPLibrary.SetUninstallToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Token                          (Parm, ZeroConstructor)

void USingularSDK_SingularSDKBPLibrary::STATIC_SetUninstallToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SetUninstallToken");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SetUninstallToken");

	USingularSDK_SingularSDKBPLibrary_SetUninstallToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SetCustomUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 customUserId                   (Parm, ZeroConstructor)

void USingularSDK_SingularSDKBPLibrary::STATIC_SetCustomUserId(const struct FString& customUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SetCustomUserId");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SetCustomUserId");

	USingularSDK_SingularSDKBPLibrary_SetCustomUserId_Params params;
	params.customUserId = customUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SendRevenueWithArgs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 currency                       (Parm, ZeroConstructor)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> args                           (Parm, ZeroConstructor)

void USingularSDK_SingularSDKBPLibrary::STATIC_SendRevenueWithArgs(const struct FString& EventName, const struct FString& currency, float Amount, TMap<struct FString, struct FString> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendRevenueWithArgs");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendRevenueWithArgs");

	USingularSDK_SingularSDKBPLibrary_SendRevenueWithArgs_Params params;
	params.EventName = EventName;
	params.currency = currency;
	params.Amount = Amount;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SendRevenue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 currency                       (Parm, ZeroConstructor)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void USingularSDK_SingularSDKBPLibrary::STATIC_SendRevenue(const struct FString& EventName, const struct FString& currency, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendRevenue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendRevenue");

	USingularSDK_SingularSDKBPLibrary_SendRevenue_Params params;
	params.EventName = EventName;
	params.currency = currency;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SendEventWithArgs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> args                           (Parm, ZeroConstructor)

void USingularSDK_SingularSDKBPLibrary::STATIC_SendEventWithArgs(const struct FString& EventName, TMap<struct FString, struct FString> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendEventWithArgs");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendEventWithArgs");

	USingularSDK_SingularSDKBPLibrary_SendEventWithArgs_Params params;
	params.EventName = EventName;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.SendEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void USingularSDK_SingularSDKBPLibrary::STATIC_SendEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.SendEvent");

	USingularSDK_SingularSDKBPLibrary_SendEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.ResumeAllTracking
// (Final, Native, Static, Public, BlueprintCallable)

void USingularSDK_SingularSDKBPLibrary::STATIC_ResumeAllTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.ResumeAllTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.ResumeAllTracking");

	USingularSDK_SingularSDKBPLibrary_ResumeAllTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.LimitDataSharing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           shouldLimitDataSharing         (Parm, ZeroConstructor, IsPlainOldData)

void USingularSDK_SingularSDKBPLibrary::STATIC_LimitDataSharing(bool shouldLimitDataSharing)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.LimitDataSharing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.LimitDataSharing");

	USingularSDK_SingularSDKBPLibrary_LimitDataSharing_Params params;
	params.shouldLimitDataSharing = shouldLimitDataSharing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingularSDK.SingularSDKBPLibrary.IsAllTrackingStopped
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USingularSDK_SingularSDKBPLibrary::STATIC_IsAllTrackingStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.IsAllTrackingStopped");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.IsAllTrackingStopped");

	USingularSDK_SingularSDKBPLibrary_IsAllTrackingStopped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SingularSDK.SingularSDKBPLibrary.Initialize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 apiKey                         (Parm, ZeroConstructor)
// struct FString                 apiSecret                      (Parm, ZeroConstructor)
// int                            sessionTimeout                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 customUserId                   (Parm, ZeroConstructor)
// bool                           skAdNetworkEnabled             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           manualSkanConversionManagement (Parm, ZeroConstructor, IsPlainOldData)
// int                            waitForTrackingAuthorizationWithTimeoutInterval (Parm, ZeroConstructor, IsPlainOldData)
// bool                           oaidCollection                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enableLogging                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            logLevel                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           clipboardAttribution           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USingularSDK_SingularSDKBPLibrary::STATIC_Initialize(const struct FString& apiKey, const struct FString& apiSecret, int sessionTimeout, const struct FString& customUserId, bool skAdNetworkEnabled, bool manualSkanConversionManagement, int waitForTrackingAuthorizationWithTimeoutInterval, bool oaidCollection, bool enableLogging, int logLevel, bool clipboardAttribution)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.Initialize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.Initialize");

	USingularSDK_SingularSDKBPLibrary_Initialize_Params params;
	params.apiKey = apiKey;
	params.apiSecret = apiSecret;
	params.sessionTimeout = sessionTimeout;
	params.customUserId = customUserId;
	params.skAdNetworkEnabled = skAdNetworkEnabled;
	params.manualSkanConversionManagement = manualSkanConversionManagement;
	params.waitForTrackingAuthorizationWithTimeoutInterval = waitForTrackingAuthorizationWithTimeoutInterval;
	params.oaidCollection = oaidCollection;
	params.enableLogging = enableLogging;
	params.logLevel = logLevel;
	params.clipboardAttribution = clipboardAttribution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SingularSDK.SingularSDKBPLibrary.GetLimitDataSharing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USingularSDK_SingularSDKBPLibrary::STATIC_GetLimitDataSharing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.GetLimitDataSharing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.GetLimitDataSharing");

	USingularSDK_SingularSDKBPLibrary_GetLimitDataSharing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SingularSDK.SingularSDKBPLibrary.CreateReferrerShortLink
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 baseLink                       (Parm, ZeroConstructor)
// struct FString                 referrerName                   (Parm, ZeroConstructor)
// struct FString                 referrerId                     (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> args                           (Parm, ZeroConstructor)

void USingularSDK_SingularSDKBPLibrary::STATIC_CreateReferrerShortLink(const struct FString& baseLink, const struct FString& referrerName, const struct FString& referrerId, TMap<struct FString, struct FString> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.CreateReferrerShortLink");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function SingularSDK.SingularSDKBPLibrary.CreateReferrerShortLink");

	USingularSDK_SingularSDKBPLibrary_CreateReferrerShortLink_Params params;
	params.baseLink = baseLink;
	params.referrerName = referrerName;
	params.referrerId = referrerId;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
