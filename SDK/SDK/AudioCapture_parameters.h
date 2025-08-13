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

// Function AudioCapture.AudioCapture.StopCapturingAudio
struct UAudioCapture_AudioCapture_StopCapturingAudio_Params
{
};

// Function AudioCapture.AudioCapture.StartCapturingAudio
struct UAudioCapture_AudioCapture_StartCapturingAudio_Params
{
};

// Function AudioCapture.AudioCapture.IsCapturingAudio
struct UAudioCapture_AudioCapture_IsCapturingAudio_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct UAudioCapture_AudioCapture_GetAudioCaptureDeviceInfo_Params
{
	struct FAudioCapture_AudioCaptureDeviceInfo        OutInfo;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct UAudioCapture_AudioCaptureFunctionLibrary_CreateAudioCapture_Params
{
	class UAudioCapture_AudioCapture*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
