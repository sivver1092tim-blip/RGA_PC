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

// Class KakaoGameRemotePlayPlugin.FreezeFrame
// 0x0008 (0x0030 - 0x0028)
class UKakaoGameRemotePlayPlugin_FreezeFrame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KakaoGameRemotePlayPlugin.FreezeFrame");
		if (!ptr)
			ptr = UObject::FindClass("Class KakaoGameRemotePlayPlugin.FreezeFrame");
		return ptr;
	}


	void STATIC_UnfreezeFrame();
	void STATIC_FreezeFrame(class UEngine_Texture2D* Texture);
};


// Class KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent
// 0x0070 (0x0690 - 0x0620)
class UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent : public UAudioMixer_SynthComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0620(0x0008) MISSED OFFSET
	struct FString                                     PlayerToHear;                                             // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAutoFindPeer;                                            // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0639(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent");
		return ptr;
	}


	void Reset();
	bool ListenTo(const struct FString& PlayerToListenTo);
	bool IsListeningToPlayer();
};


// Class KakaoGameRemotePlayPlugin.KGRemotePlayDelegates
// 0x00C0 (0x00E8 - 0x0028)
class UKakaoGameRemotePlayPlugin_KGRemotePlayDelegates : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KakaoGameRemotePlayPlugin.KGRemotePlayDelegates");
		if (!ptr)
			ptr = UObject::FindClass("Class KakaoGameRemotePlayPlugin.KGRemotePlayDelegates");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
