
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

// Function AudioCapture.AudioCapture.StopCapturingAudio
// (Final, Native, Public, BlueprintCallable)

void UAudioCapture_AudioCapture::StopCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");

	UAudioCapture_AudioCapture_StopCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// (Final, Native, Public, BlueprintCallable)

void UAudioCapture_AudioCapture::StartCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");

	UAudioCapture_AudioCapture_StartCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioCapture_AudioCapture::IsCapturingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");

	UAudioCapture_AudioCapture_IsCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioCapture_AudioCaptureDeviceInfo OutInfo                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioCapture_AudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCapture_AudioCaptureDeviceInfo* OutInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");

	UAudioCapture_AudioCapture_GetAudioCaptureDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioCapture_AudioCapture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioCapture_AudioCapture* UAudioCapture_AudioCaptureFunctionLibrary::STATIC_CreateAudioCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");

	UAudioCapture_AudioCaptureFunctionLibrary_CreateAudioCapture_Params params;

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
