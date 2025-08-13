
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

// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UAudioMixer_SynthComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	UAudioMixer_SynthComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)

void UAudioMixer_SynthComponent::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	UAudioMixer_SynthComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_SynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	UAudioMixer_SynthComponent_SetVolumeMultiplier_Params params;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_SoundSubmix*     Submix                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          SendLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_SynthComponent::SetSubmixSend(class UEngine_SoundSubmix* Submix, float SendLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	UAudioMixer_SynthComponent_SetSubmixSend_Params params;
	params.Submix = Submix;
	params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioMixer_SynthComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	UAudioMixer_SynthComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioMixer_SubmixEffectSubmixEQSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioMixer_SubmixEffectSubmixEQPreset::SetSettings(const struct FAudioMixer_SubmixEffectSubmixEQSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	UAudioMixer_SubmixEffectSubmixEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_ReverbEffect*    InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DryLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_SubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UEngine_ReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	UAudioMixer_SubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioMixer_SubmixEffectReverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioMixer_SubmixEffectReverbPreset::SetSettings(const struct FAudioMixer_SubmixEffectReverbSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	UAudioMixer_SubmixEffectReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioMixer_SubmixEffectDynamicsProcessorSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioMixer_SubmixEffectDynamicsProcessorPreset::SetSettings(const struct FAudioMixer_SubmixEffectDynamicsProcessorSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	UAudioMixer_SubmixEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_ReverbEffect*    InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DryLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_SubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(class UEngine_ReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect");

	UAudioMixer_SubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioMixer_SubmixEffectReverbFastSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioMixer_SubmixEffectReverbFastPreset::SetSettings(const struct FAudioMixer_SubmixEffectReverbFastSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings");

	UAudioMixer_SubmixEffectReverbFastPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMegabytesToFree              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioMixer_AudioMixerBlueprintLibrary::STATIC_TrimAudioCache(float InMegabytesToFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache");

	UAudioMixer_AudioMixerBlueprintLibrary_TrimAudioCache_Params params;
	params.InMegabytesToFree = InMegabytesToFree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FEngine_Engine_EAudioRecordingExportType ExportType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UEngine_SoundSubmix*     SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundWave*       ExistingSoundWaveToOverwrite   (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundWave*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_SoundWave* UAudioMixer_AudioMixerBlueprintLibrary::STATIC_StopRecordingOutput(class UObject* WorldContextObject, FEngine_Engine_EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class UEngine_SoundSubmix* SubmixToRecord, class UEngine_SoundWave* ExistingSoundWaveToOverwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");

	UAudioMixer_AudioMixerBlueprintLibrary_StopRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExportType = ExportType;
	params.Name = Name;
	params.Path = Path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundSubmix*     SubmixToStopAnalyzing          (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToStopAnalyzing)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");

	UAudioMixer_AudioMixerBlueprintLibrary_StopAnalyzingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectedDuration               (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundSubmix*     SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class UEngine_SoundSubmix* SubmixToRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");

	UAudioMixer_AudioMixerBlueprintLibrary_StartRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundSubmix*     SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)
// FAudioMixer_AudioMixer_EFFTSize FFTSize                        (Parm, ZeroConstructor, IsPlainOldData)
// FAudioMixer_AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod            (Parm, ZeroConstructor, IsPlainOldData)
// FAudioMixer_AudioMixer_EFFTWindowType WindowType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          HopSize                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToAnalyze, FAudioMixer_AudioMixer_EFFTSize FFTSize, FAudioMixer_AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod, FAudioMixer_AudioMixer_EFFTWindowType WindowType, float HopSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");

	UAudioMixer_AudioMixerBlueprintLibrary_StartAnalyzingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToAnalyze = SubmixToAnalyze;
	params.FFTSize = FFTSize;
	params.InterpolationMethod = InterpolationMethod;
	params.WindowType = WindowType;
	params.HopSize = HopSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBypassed                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");

	UAudioMixer_AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundSubmix*     SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");

	UAudioMixer_AudioMixerBlueprintLibrary_ResumeRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");

	UAudioMixer_AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class UEngine_SoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");

	UAudioMixer_AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_SoundWave*       SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnLoadCompletion               (ConstParm, Parm, ZeroConstructor)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_PrimeSoundForPlayback(class UEngine_SoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback");

	UAudioMixer_AudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params params;
	params.SoundWave = SoundWave;
	params.OnLoadCompletion = OnLoadCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_SoundCue*        SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_PrimeSoundCueForPlayback(class UEngine_SoundCue* SoundCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback");

	UAudioMixer_AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params params;
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundSubmix*     SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class UEngine_SoundSubmix* SubmixToPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");

	UAudioMixer_AudioMixerBlueprintLibrary_PauseRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Phases                         (Parm, OutParm, ZeroConstructor)
// class UEngine_SoundSubmix*     SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class UEngine_SoundSubmix* SubmixToAnalyze, TArray<float>* Phases)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");

	UAudioMixer_AudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Phases != nullptr)
		*Phases = params.Phases;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioMixer_AudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");

	UAudioMixer_AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Magnitudes                     (Parm, OutParm, ZeroConstructor)
// class UEngine_SoundSubmix*     SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class UEngine_SoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");

	UAudioMixer_AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magnitudes != nullptr)
		*Magnitudes = params.Magnitudes;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");

	UAudioMixer_AudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_SourceEffectChainEntry Entry                          (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class UEngine_SoundEffectSourcePresetChain* PresetChain, const struct FEngine_SourceEffectChainEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");

	UAudioMixer_AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixer_AudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class UEngine_SoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");

	UAudioMixer_AudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
