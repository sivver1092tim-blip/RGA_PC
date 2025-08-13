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

// Class AudioMixer.SynthComponent
// 0x0430 (0x0620 - 0x01F0)
class UAudioMixer_SynthComponent : public UEngine_SceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                         // 0x01F0(0x0001)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x01F0(0x0001)
	unsigned char                                      bAllowSpatialization : 1;                                 // 0x01F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x01F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	unsigned char                                      bOutputToBusOnly : 1;                                     // 0x01F4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	class UEngine_SoundAttenuation*                    AttenuationSettings;                                      // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_SoundAttenuationSettings            AttenuationOverrides;                                     // 0x0200(0x02F0) (Edit, BlueprintVisible)
	class UEngine_SoundConcurrency*                    ConcurrencySettings;                                      // 0x04F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x04F8(0x0050) UNKNOWN PROPERTY: SetProperty AudioMixer.SynthComponent.ConcurrencySet
	class UEngine_SoundClass*                          SoundClass;                                               // 0x0548(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSourcePresetChain*        SourceEffectChain;                                        // 0x0550(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundSubmix*                         SoundSubmix;                                              // 0x0558(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_SoundSubmixSendInfo>         SoundSubmixSends;                                         // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEngine_SoundSourceBusSendInfo>      BusSends;                                                 // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FEngine_SoundModulation                     Modulation;                                               // 0x0580(0x0010) (Edit)
	TArray<struct FEngine_SoundSourceBusSendInfo>      PreEffectBusSends;                                        // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x05A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x05A0(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAudioEnvelopeValue;                                     // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x20];                                      // 0x05C0(0x0020) MISSED OFFSET
	class UAudioMixer_SynthSound*                      Synth;                                                    // 0x05E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEngine_AudioComponent*                      AudioComponent;                                           // 0x05E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x30];                                      // 0x05F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class UEngine_SoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};


// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioMixer_AudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class UAudioMixer_SubmixEffectSubmixEQPreset : public UEngine_SoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FAudioMixer_SubmixEffectSubmixEQSettings    Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings(const struct FAudioMixer_SubmixEffectSubmixEQSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
class UAudioMixer_SubmixEffectReverbPreset : public UEngine_SoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FAudioMixer_SubmixEffectReverbSettings      Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UEngine_ReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FAudioMixer_SubmixEffectReverbSettings& InSettings);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class UAudioMixer_SubmixEffectDynamicsProcessorPreset : public UEngine_SoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	struct FAudioMixer_SubmixEffectDynamicsProcessorSettings Settings;                                                 // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(const struct FAudioMixer_SubmixEffectDynamicsProcessorSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0090 (0x00D0 - 0x0040)
class UAudioMixer_SubmixEffectReverbFastPreset : public UEngine_SoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FAudioMixer_SubmixEffectReverbFastSettings  Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UEngine_ReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FAudioMixer_SubmixEffectReverbFastSettings& InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x03F0 - 0x03D0)
class UAudioMixer_SynthSound : public UEngine_SoundWaveProcedural
{
public:
	class UAudioMixer_SynthComponent*                  OwningSynthComponent;                                     // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixer_AudioMixerBlueprintLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	float STATIC_TrimAudioCache(float InMegabytesToFree);
	class UEngine_SoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, FEngine_Engine_EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class UEngine_SoundSubmix* SubmixToRecord, class UEngine_SoundWave* ExistingSoundWaveToOverwrite);
	void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToStopAnalyzing);
	void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class UEngine_SoundSubmix* SubmixToRecord);
	void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToAnalyze, FAudioMixer_AudioMixer_EFFTSize FFTSize, FAudioMixer_AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod, FAudioMixer_AudioMixer_EFFTWindowType WindowType, float HopSize);
	void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToPause);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class UEngine_SoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_PrimeSoundForPlayback(class UEngine_SoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion);
	void STATIC_PrimeSoundCueForPlayback(class UEngine_SoundCue* SoundCue);
	void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToPause);
	void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class UEngine_SoundSubmix* SubmixToAnalyze, TArray<float>* Phases);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain);
	void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class UEngine_SoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes);
	void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain, const struct FEngine_SourceEffectChainEntry& Entry);
	void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class UEngine_SoundEffectSubmixPreset* SubmixEffectPreset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
