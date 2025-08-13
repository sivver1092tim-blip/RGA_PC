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

// Function AudioMixer.SynthComponent.Stop
struct UAudioMixer_SynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct UAudioMixer_SynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct UAudioMixer_SynthComponent_SetVolumeMultiplier_Params
{
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct UAudioMixer_SynthComponent_SetSubmixSend_Params
{
	class UEngine_SoundSubmix*                         Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct UAudioMixer_SynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct UAudioMixer_SubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FAudioMixer_SubmixEffectSubmixEQSettings    InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct UAudioMixer_SubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UEngine_ReverbEffect*                        InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct UAudioMixer_SubmixEffectReverbPreset_SetSettings_Params
{
	struct FAudioMixer_SubmixEffectReverbSettings      InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct UAudioMixer_SubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FAudioMixer_SubmixEffectDynamicsProcessorSettings InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
struct UAudioMixer_SubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Params
{
	class UEngine_ReverbEffect*                        InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
struct UAudioMixer_SubmixEffectReverbFastPreset_SetSettings_Params
{
	struct FAudioMixer_SubmixEffectReverbFastSettings  InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixer_AudioMixerBlueprintLibrary_TrimAudioCache_Params
{
	float                                              InMegabytesToFree;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixer_AudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAudioRecordingExportType           ExportType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UEngine_SoundSubmix*                         SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundWave*                           ExistingSoundWaveToOverwrite;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundWave*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixer_AudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundSubmix*                         SubmixToStopAnalyzing;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixer_AudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundSubmix*                         SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixer_AudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundSubmix*                         SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FAudioMixer_AudioMixer_EFFTSize                    FFTSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FAudioMixer_AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	FAudioMixer_AudioMixer_EFFTWindowType              WindowType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HopSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixer_AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSourcePresetChain*        PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixer_AudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundSubmix*                         SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixer_AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSourcePresetChain*        PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixer_AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSubmixPreset*             SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixer_AudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
	class UEngine_SoundWave*                           SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnLoadCompletion;                                         // (ConstParm, Parm, ZeroConstructor)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct UAudioMixer_AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
{
	class UEngine_SoundCue*                            SoundCue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixer_AudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundSubmix*                         SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixer_AudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Phases;                                                   // (Parm, OutParm, ZeroConstructor)
	class UEngine_SoundSubmix*                         SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixer_AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSourcePresetChain*        PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixer_AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Magnitudes;                                               // (Parm, OutParm, ZeroConstructor)
	class UEngine_SoundSubmix*                         SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixer_AudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixer_AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSourcePresetChain*        PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_SourceEffectChainEntry              Entry;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixer_AudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSubmixPreset*             SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
