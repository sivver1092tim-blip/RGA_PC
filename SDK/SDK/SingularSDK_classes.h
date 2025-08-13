#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SingularSDK.SingularDelegates
// 0x0030 (0x00E0 - 0x00B0)
class USingularSDK_SingularDelegates : public UEngine_ActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnConversionValueUpdated;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSingularLinksResolved;                                  // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSingularShortLinksResolved;                             // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SingularSDK.SingularDelegates");
		if (!ptr)
			ptr = UObject::FindClass("Class SingularSDK.SingularDelegates");
		return ptr;
	}

};


// Class SingularSDK.SingularSDKBPLibrary
// 0x0000 (0x0028 - 0x0028)
class USingularSDK_SingularSDKBPLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SingularSDK.SingularSDKBPLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class SingularSDK.SingularSDKBPLibrary");
		return ptr;
	}


	void STATIC_UnsetCustomUserId();
	void STATIC_TrackingUnder13();
	void STATIC_TrackingOptIn();
	void STATIC_StopAllTracking();
	bool STATIC_SkanUpdateConversionValue(int conversionValue);
	void STATIC_SkanRegisterAppForAdNetworkAttribution();
	int STATIC_SkanGetConversionValue();
	void STATIC_SetUninstallToken(const struct FString& Token);
	void STATIC_SetCustomUserId(const struct FString& customUserId);
	void STATIC_SendRevenueWithArgs(const struct FString& EventName, const struct FString& currency, float Amount, TMap<struct FString, struct FString> args);
	void STATIC_SendRevenue(const struct FString& EventName, const struct FString& currency, float Amount);
	void STATIC_SendEventWithArgs(const struct FString& EventName, TMap<struct FString, struct FString> args);
	void STATIC_SendEvent(const struct FString& EventName);
	void STATIC_ResumeAllTracking();
	void STATIC_LimitDataSharing(bool shouldLimitDataSharing);
	bool STATIC_IsAllTrackingStopped();
	bool STATIC_Initialize(const struct FString& apiKey, const struct FString& apiSecret, int sessionTimeout, const struct FString& customUserId, bool skAdNetworkEnabled, bool manualSkanConversionManagement, int waitForTrackingAuthorizationWithTimeoutInterval, bool oaidCollection, bool enableLogging, int logLevel, bool clipboardAttribution);
	bool STATIC_GetLimitDataSharing();
	void STATIC_CreateReferrerShortLink(const struct FString& baseLink, const struct FString& referrerName, const struct FString& referrerId, TMap<struct FString, struct FString> args);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
