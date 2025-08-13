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

// Function LevelSequence.LevelSequenceActor.ShowBurnin
struct ALevelSequence_LevelSequenceActor_ShowBurnin_Params
{
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequence_LevelSequenceActor_SetSequence_Params
{
	class ULevelSequence_LevelSequence*                InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
struct ALevelSequence_LevelSequenceActor_SetReplicatePlayback_Params
{
	bool                                               ReplicatePlayback;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetEventReceivers
struct ALevelSequence_LevelSequenceActor_SetEventReceivers_Params
{
	TArray<class AEngine_Actor*>                       AdditionalReceivers;                                      // (Parm, ZeroConstructor)
};

// Function LevelSequence.LevelSequenceActor.SetBindingByTag
struct ALevelSequence_LevelSequenceActor_SetBindingByTag_Params
{
	struct FName                                       BindingTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AEngine_Actor*>                       Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequence_LevelSequenceActor_SetBinding_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       Binding;                                                  // (Parm)
	TArray<class AEngine_Actor*>                       Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ALevelSequence_LevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequence_LevelSequenceActor_ResetBinding_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       Binding;                                                  // (Parm)
};

// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
struct ALevelSequence_LevelSequenceActor_RemoveBindingByTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequence_LevelSequenceActor_RemoveBinding_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       Binding;                                                  // (Parm)
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.LoadSequence
struct ALevelSequence_LevelSequenceActor_LoadSequence_Params
{
	class ULevelSequence_LevelSequence*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.HideBurnin
struct ALevelSequence_LevelSequenceActor_HideBurnin_Params
{
};

// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
struct ALevelSequence_LevelSequenceActor_GetSequencePlayer_Params
{
	class ULevelSequence_LevelSequencePlayer*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequence_LevelSequenceActor_GetSequence_Params
{
	class ULevelSequence_LevelSequence*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.FindNamedBindings
struct ALevelSequence_LevelSequenceActor_FindNamedBindings_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieScene_MovieSceneObjectBindingID> ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function LevelSequence.LevelSequenceActor.FindNamedBinding
struct ALevelSequence_LevelSequenceActor_FindNamedBinding_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneObjectBindingID       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LevelSequence.LevelSequenceActor.AddBindingByTag
struct ALevelSequence_LevelSequenceActor_AddBindingByTag_Params
{
	struct FName                                       BindingTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequence_LevelSequenceActor_AddBinding_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       Binding;                                                  // (Parm)
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceDirector.OnCreated
struct ULevelSequence_LevelSequenceDirector_OnCreated_Params
{
};

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
struct ULevelSequence_LevelSequence_RemoveMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
struct ULevelSequence_LevelSequence_FindOrAddMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequence.FindMetaDataByClass
struct ULevelSequence_LevelSequence_FindMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequence.CopyMetaData
struct ULevelSequence_LevelSequence_CopyMetaData_Params
{
	class UObject*                                     InMetaData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
struct ULevelSequence_LevelSequenceBurnInOptions_SetBurnIn_Params
{
	struct FSoftClassPath                              InBurnInClass;                                            // (Parm, ZeroConstructor)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequence_LevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequence_LevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
struct ULevelSequence_LevelSequencePlayer_GetActiveCameraComponent_Params
{
	class UEngine_CameraComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequence_LevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence_LevelSequence*                LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneSequencePlaybackSettings Settings;                                                 // (Parm)
	class ALevelSequence_LevelSequenceActor*           OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence_LevelSequencePlayer*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
