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

// Function MovieScene.MovieSceneSection.SetRowIndex
struct UMovieScene_MovieSceneSection_SetRowIndex_Params
{
	int                                                NewRowIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetPreRollFrames
struct UMovieScene_MovieSceneSection_SetPreRollFrames_Params
{
	int                                                InPreRollFrames;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetPostRollFrames
struct UMovieScene_MovieSceneSection_SetPostRollFrames_Params
{
	int                                                InPostRollFrames;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetOverlapPriority
struct UMovieScene_MovieSceneSection_SetOverlapPriority_Params
{
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetIsLocked
struct UMovieScene_MovieSceneSection_SetIsLocked_Params
{
	bool                                               bInIsLocked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetIsActive
struct UMovieScene_MovieSceneSection_SetIsActive_Params
{
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetCompletionMode
struct UMovieScene_MovieSceneSection_SetCompletionMode_Params
{
	FMovieScene_MovieScene_EMovieSceneCompletionMode   InCompletionMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetBlendType
struct UMovieScene_MovieSceneSection_SetBlendType_Params
{
	FMovieScene_MovieScene_EMovieSceneBlendType        InBlendType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.IsLocked
struct UMovieScene_MovieSceneSection_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.IsActive
struct UMovieScene_MovieSceneSection_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetRowIndex
struct UMovieScene_MovieSceneSection_GetRowIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetPreRollFrames
struct UMovieScene_MovieSceneSection_GetPreRollFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetPostRollFrames
struct UMovieScene_MovieSceneSection_GetPostRollFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetOverlapPriority
struct UMovieScene_MovieSceneSection_GetOverlapPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetCompletionMode
struct UMovieScene_MovieSceneSection_GetCompletionMode_Params
{
	FMovieScene_MovieScene_EMovieSceneCompletionMode   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetBlendType
struct UMovieScene_MovieSceneSection_GetBlendType_Params
{
	struct FMovieScene_OptionalMovieSceneBlendType     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequence.FindBindingsByTag
struct UMovieScene_MovieSceneSequence_FindBindingsByTag_Params
{
	struct FName                                       InBindingName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieScene_MovieSceneObjectBindingID> ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MovieScene.MovieSceneSequence.FindBindingByTag
struct UMovieScene_MovieSceneSequence_FindBindingByTag_Params
{
	struct FName                                       InBindingName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneObjectBindingID       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
struct UMovieScene_MovieSceneSequencePlayer_StopAtCurrentTime_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UMovieScene_MovieSceneSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UMovieScene_MovieSceneSequencePlayer_SetTimeRange_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieScene_MovieSceneSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
struct UMovieScene_MovieSceneSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewEndTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieScene_MovieSceneSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UMovieScene_MovieSceneSequencePlayer_SetFrameRate_Params
{
	struct FFrameRate                                  FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UMovieScene_MovieSceneSequencePlayer_SetFrameRange_Params
{
	int                                                StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UMovieScene_MovieSceneSequencePlayer_SetDisableCameraCuts_Params
{
	bool                                               bInDisableCameraCuts;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UMovieScene_MovieSceneSequencePlayer_ScrubToSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct UMovieScene_MovieSceneSequencePlayer_ScrubToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UMovieScene_MovieSceneSequencePlayer_ScrubToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.Scrub
struct UMovieScene_MovieSceneSequencePlayer_Scrub_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct UMovieScene_MovieSceneSequencePlayer_RPC_OnStopEvent_Params
{
	struct FFrameTime                                  StoppedTime;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct UMovieScene_MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
{
	FMovieScene_MovieScene_EUpdatePositionMethod       Method;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  RelevantTime;                                             // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UMovieScene_MovieSceneSequencePlayer_PlayToSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct UMovieScene_MovieSceneSequencePlayer_PlayToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UMovieScene_MovieSceneSequencePlayer_PlayToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UMovieScene_MovieSceneSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieScene_MovieSceneSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UMovieScene_MovieSceneSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UMovieScene_MovieSceneSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UMovieScene_MovieSceneSequencePlayer_JumpToSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
struct UMovieScene_MovieSceneSequencePlayer_JumpToPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct UMovieScene_MovieSceneSequencePlayer_JumpToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UMovieScene_MovieSceneSequencePlayer_JumpToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct UMovieScene_MovieSceneSequencePlayer_IsReversed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieScene_MovieSceneSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieScene_MovieSceneSequencePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
struct UMovieScene_MovieSceneSequencePlayer_GoToEndAndStop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UMovieScene_MovieSceneSequencePlayer_GetStartTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieScene_MovieSceneSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
struct UMovieScene_MovieSceneSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
struct UMovieScene_MovieSceneSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
struct UMovieScene_MovieSceneSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct UMovieScene_MovieSceneSequencePlayer_GetObjectBindings_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieScene_MovieSceneObjectBindingID> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetLength
struct UMovieScene_MovieSceneSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UMovieScene_MovieSceneSequencePlayer_GetFrameRate_Params
{
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UMovieScene_MovieSceneSequencePlayer_GetFrameDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UMovieScene_MovieSceneSequencePlayer_GetEndTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UMovieScene_MovieSceneSequencePlayer_GetDuration_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UMovieScene_MovieSceneSequencePlayer_GetDisableCameraCuts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UMovieScene_MovieSceneSequencePlayer_GetCurrentTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieScene_MovieSceneSequencePlayer_GetBoundObjects_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       ObjectBinding;                                            // (Parm)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UMovieScene_MovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
};

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct UMovieScene_MovieSceneEasingFunction_OnEvaluate_Params
{
	float                                              Interp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSubSection.SetSequence
struct UMovieScene_MovieSceneSubSection_SetSequence_Params
{
	class UMovieScene_MovieSceneSequence*              Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSubSection.GetSequence
struct UMovieScene_MovieSceneSubSection_GetSequence_Params
{
	class UMovieScene_MovieSceneSequence*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
