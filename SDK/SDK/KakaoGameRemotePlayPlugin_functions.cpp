
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

// Function KakaoGameRemotePlayPlugin.FreezeFrame.UnfreezeFrame
// (Final, Native, Static, Public, BlueprintCallable)

void UKakaoGameRemotePlayPlugin_FreezeFrame::STATIC_UnfreezeFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.FreezeFrame.UnfreezeFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.FreezeFrame.UnfreezeFrame");

	UKakaoGameRemotePlayPlugin_FreezeFrame_UnfreezeFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KakaoGameRemotePlayPlugin.FreezeFrame.FreezeFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture2D*       Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UKakaoGameRemotePlayPlugin_FreezeFrame::STATIC_FreezeFrame(class UEngine_Texture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.FreezeFrame.FreezeFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.FreezeFrame.FreezeFrame");

	UKakaoGameRemotePlayPlugin_FreezeFrame_FreezeFrame_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.Reset
// (Final, Native, Public, BlueprintCallable)

void UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.Reset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.Reset");

	UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.ListenTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerToListenTo               (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent::ListenTo(const struct FString& PlayerToListenTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.ListenTo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.ListenTo");

	UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent_ListenTo_Params params;
	params.PlayerToListenTo = PlayerToListenTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.IsListeningToPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent::IsListeningToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.IsListeningToPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function KakaoGameRemotePlayPlugin.KGRemotePlayAudioComponent.IsListeningToPlayer");

	UKakaoGameRemotePlayPlugin_KGRemotePlayAudioComponent_IsListeningToPlayer_Params params;

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
