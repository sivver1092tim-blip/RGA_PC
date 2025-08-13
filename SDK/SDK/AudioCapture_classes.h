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

// Class AudioCapture.AudioCapture
// 0x0008 (0x00B0 - 0x00A8)
class UAudioCapture_AudioCapture : public UAudioMixer_AudioGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}


	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(struct FAudioCapture_AudioCaptureDeviceInfo* OutInfo);
};


// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioCapture_AudioCaptureFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}


	class UAudioCapture_AudioCapture* STATIC_CreateAudioCapture();
};


// Class AudioCapture.AudioCaptureComponent
// 0x00B0 (0x06D0 - 0x0620)
class UAudioCapture_AudioCaptureComponent : public UAudioMixer_SynthComponent
{
public:
	int                                                JitterLatencyFrames;                                      // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0624(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
