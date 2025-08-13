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

// Function KakaoGameRemotePlayPlugin.FreezeFrame.UnfreezeFrame
struct UKakaoGameRemotePlayPlugin_FreezeFrame_UnfreezeFrame_Params
{
};

// Function KakaoGameRemotePlayPlugin.FreezeFrame.FreezeFrame
struct UKakaoGameRemotePlayPlugin_FreezeFrame_FreezeFrame_Params
{
	class UEngine_Texture2D*                           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.Reset
struct UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent_Reset_Params
{
};

// Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.ListenTo
struct UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent_ListenTo_Params
{
	struct FString                                     PlayerToListenTo;                                         // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.IsListeningToPlayer
struct UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent_IsListeningToPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
