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

// Function SingularSDK.SingularSDKBPLibrary.UnsetCustomUserId
struct USingularSDK_SingularSDKBPLibrary_UnsetCustomUserId_Params
{
};

// Function SingularSDK.SingularSDKBPLibrary.TrackingUnder13
struct USingularSDK_SingularSDKBPLibrary_TrackingUnder13_Params
{
};

// Function SingularSDK.SingularSDKBPLibrary.TrackingOptIn
struct USingularSDK_SingularSDKBPLibrary_TrackingOptIn_Params
{
};

// Function SingularSDK.SingularSDKBPLibrary.StopAllTracking
struct USingularSDK_SingularSDKBPLibrary_StopAllTracking_Params
{
};

// Function SingularSDK.SingularSDKBPLibrary.SkanUpdateConversionValue
struct USingularSDK_SingularSDKBPLibrary_SkanUpdateConversionValue_Params
{
	int                                                conversionValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.SkanRegisterAppForAdNetworkAttribution
struct USingularSDK_SingularSDKBPLibrary_SkanRegisterAppForAdNetworkAttribution_Params
{
};

// Function SingularSDK.SingularSDKBPLibrary.SkanGetConversionValue
struct USingularSDK_SingularSDKBPLibrary_SkanGetConversionValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.SetUninstallToken
struct USingularSDK_SingularSDKBPLibrary_SetUninstallToken_Params
{
	struct FString                                     Token;                                                    // (Parm, ZeroConstructor)
};

// Function SingularSDK.SingularSDKBPLibrary.SetCustomUserId
struct USingularSDK_SingularSDKBPLibrary_SetCustomUserId_Params
{
	struct FString                                     customUserId;                                             // (Parm, ZeroConstructor)
};

// Function SingularSDK.SingularSDKBPLibrary.SendRevenueWithArgs
struct USingularSDK_SingularSDKBPLibrary_SendRevenueWithArgs_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               args;                                                     // (Parm, ZeroConstructor)
};

// Function SingularSDK.SingularSDKBPLibrary.SendRevenue
struct USingularSDK_SingularSDKBPLibrary_SendRevenue_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     currency;                                                 // (Parm, ZeroConstructor)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.SendEventWithArgs
struct USingularSDK_SingularSDKBPLibrary_SendEventWithArgs_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               args;                                                     // (Parm, ZeroConstructor)
};

// Function SingularSDK.SingularSDKBPLibrary.SendEvent
struct USingularSDK_SingularSDKBPLibrary_SendEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function SingularSDK.SingularSDKBPLibrary.ResumeAllTracking
struct USingularSDK_SingularSDKBPLibrary_ResumeAllTracking_Params
{
};

// Function SingularSDK.SingularSDKBPLibrary.LimitDataSharing
struct USingularSDK_SingularSDKBPLibrary_LimitDataSharing_Params
{
	bool                                               shouldLimitDataSharing;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.IsAllTrackingStopped
struct USingularSDK_SingularSDKBPLibrary_IsAllTrackingStopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.Initialize
struct USingularSDK_SingularSDKBPLibrary_Initialize_Params
{
	struct FString                                     apiKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     apiSecret;                                                // (Parm, ZeroConstructor)
	int                                                sessionTimeout;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     customUserId;                                             // (Parm, ZeroConstructor)
	bool                                               skAdNetworkEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               manualSkanConversionManagement;                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                waitForTrackingAuthorizationWithTimeoutInterval;          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               oaidCollection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enableLogging;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                logLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               clipboardAttribution;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.GetLimitDataSharing
struct USingularSDK_SingularSDKBPLibrary_GetLimitDataSharing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SingularSDK.SingularSDKBPLibrary.CreateReferrerShortLink
struct USingularSDK_SingularSDKBPLibrary_CreateReferrerShortLink_Params
{
	struct FString                                     baseLink;                                                 // (Parm, ZeroConstructor)
	struct FString                                     referrerName;                                             // (Parm, ZeroConstructor)
	struct FString                                     referrerId;                                               // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               args;                                                     // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
