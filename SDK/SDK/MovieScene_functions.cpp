
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

// Function MovieScene.MovieSceneSection.SetRowIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewRowIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetRowIndex(int NewRowIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	UMovieScene_MovieSceneSection_SetRowIndex_Params params;
	params.NewRowIndex = NewRowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetPreRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPreRollFrames                (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetPreRollFrames(int InPreRollFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	UMovieScene_MovieSceneSection_SetPreRollFrames_Params params;
	params.InPreRollFrames = InPreRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetPostRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPostRollFrames               (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetPostRollFrames(int InPostRollFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	UMovieScene_MovieSceneSection_SetPostRollFrames_Params params;
	params.InPostRollFrames = InPostRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetOverlapPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetOverlapPriority(int NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	UMovieScene_MovieSceneSection_SetOverlapPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsLocked                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	UMovieScene_MovieSceneSection_SetIsLocked_Params params;
	params.bInIsLocked = bInIsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetIsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsActive                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetIsActive(bool bInIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	UMovieScene_MovieSceneSection_SetIsActive_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetCompletionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FMovieScene_MovieScene_EMovieSceneCompletionMode InCompletionMode               (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetCompletionMode(FMovieScene_MovieScene_EMovieSceneCompletionMode InCompletionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	UMovieScene_MovieSceneSection_SetCompletionMode_Params params;
	params.InCompletionMode = InCompletionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.SetBlendType
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FMovieScene_MovieScene_EMovieSceneBlendType InBlendType                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSection::SetBlendType(FMovieScene_MovieScene_EMovieSceneBlendType InBlendType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	UMovieScene_MovieSceneSection_SetBlendType_Params params;
	params.InBlendType = InBlendType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSection.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSection::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	UMovieScene_MovieSceneSection_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSection::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	UMovieScene_MovieSceneSection_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetRowIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieScene_MovieSceneSection::GetRowIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	UMovieScene_MovieSceneSection_GetRowIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetPreRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieScene_MovieSceneSection::GetPreRollFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	UMovieScene_MovieSceneSection_GetPreRollFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetPostRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieScene_MovieSceneSection::GetPostRollFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	UMovieScene_MovieSceneSection_GetPostRollFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetOverlapPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieScene_MovieSceneSection::GetOverlapPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	UMovieScene_MovieSceneSection_GetOverlapPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetCompletionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMovieScene_MovieScene_EMovieSceneCompletionMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMovieScene_MovieScene_EMovieSceneCompletionMode UMovieScene_MovieSceneSection::GetCompletionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	UMovieScene_MovieSceneSection_GetCompletionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetBlendType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieScene_OptionalMovieSceneBlendType ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieScene_OptionalMovieSceneBlendType UMovieScene_MovieSceneSection::GetBlendType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	UMovieScene_MovieSceneSection_GetBlendType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InBindingName                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMovieScene_MovieSceneObjectBindingID> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FMovieScene_MovieSceneObjectBindingID> UMovieScene_MovieSceneSequence::FindBindingsByTag(const struct FName& InBindingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	UMovieScene_MovieSceneSequence_FindBindingsByTag_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequence.FindBindingByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InBindingName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieScene_MovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieScene_MovieSceneObjectBindingID UMovieScene_MovieSceneSequence::FindBindingByTag(const struct FName& InBindingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	UMovieScene_MovieSceneSequence_FindBindingByTag_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::StopAtCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	UMovieScene_MovieSceneSequencePlayer_StopAtCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieScene_MovieSceneSequencePlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	UMovieScene_MovieSceneSequencePlayer_SetTimeRange_Params params;
	params.StartTime = StartTime;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieScene_MovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewStartTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewEndTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	UMovieScene_MovieSceneSequencePlayer_SetPlaybackRange_Params params;
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieScene_MovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameRate              FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	UMovieScene_MovieSceneSequencePlayer_SetFrameRate_Params params;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetFrameRange(int StartFrame, int Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	UMovieScene_MovieSceneSequencePlayer_SetFrameRange_Params params;
	params.StartFrame = StartFrame;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInDisableCameraCuts           (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	UMovieScene_MovieSceneSequencePlayer_SetDisableCameraCuts_Params params;
	params.bInDisableCameraCuts = bInDisableCameraCuts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	UMovieScene_MovieSceneSequencePlayer_ScrubToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLabel                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::ScrubToMarkedFrame(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	UMovieScene_MovieSceneSequencePlayer_ScrubToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (Parm)

void UMovieScene_MovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	UMovieScene_MovieSceneSequencePlayer_ScrubToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::Scrub()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	UMovieScene_MovieSceneSequencePlayer_Scrub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FFrameTime              StoppedTime                    (Parm)

void UMovieScene_MovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	UMovieScene_MovieSceneSequencePlayer_RPC_OnStopEvent_Params params;
	params.StoppedTime = StoppedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// FMovieScene_MovieScene_EUpdatePositionMethod Method                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              RelevantTime                   (Parm)

void UMovieScene_MovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(FMovieScene_MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	UMovieScene_MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params params;
	params.Method = Method;
	params.RelevantTime = RelevantTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	UMovieScene_MovieSceneSequencePlayer_PlayToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLabel                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::PlayToMarkedFrame(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	UMovieScene_MovieSceneSequencePlayer_PlayToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (Parm)

void UMovieScene_MovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	UMovieScene_MovieSceneSequencePlayer_PlayToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::PlayReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieScene_MovieSceneSequencePlayer_PlayReverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieScene_MovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieScene_MovieSceneSequencePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieScene_MovieSceneSequencePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	UMovieScene_MovieSceneSequencePlayer_JumpToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPosition");

	UMovieScene_MovieSceneSequencePlayer_JumpToPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLabel                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::JumpToMarkedFrame(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	UMovieScene_MovieSceneSequencePlayer_JumpToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (Parm)

void UMovieScene_MovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	UMovieScene_MovieSceneSequencePlayer_JumpToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::IsReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	UMovieScene_MovieSceneSequencePlayer_IsReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieScene_MovieSceneSequencePlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	UMovieScene_MovieSceneSequencePlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::GoToEndAndStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	UMovieScene_MovieSceneSequencePlayer_GoToEndAndStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQualifiedFrameTime UMovieScene_MovieSceneSequencePlayer::GetStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	UMovieScene_MovieSceneSequencePlayer_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieScene_MovieSceneSequencePlayer::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieScene_MovieSceneSequencePlayer_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieScene_MovieSceneSequencePlayer::GetPlaybackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	UMovieScene_MovieSceneSequencePlayer_GetPlaybackStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieScene_MovieSceneSequencePlayer::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	UMovieScene_MovieSceneSequencePlayer_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieScene_MovieSceneSequencePlayer::GetPlaybackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	UMovieScene_MovieSceneSequencePlayer_GetPlaybackEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMovieScene_MovieSceneObjectBindingID> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMovieScene_MovieSceneObjectBindingID> UMovieScene_MovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	UMovieScene_MovieSceneSequencePlayer_GetObjectBindings_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieScene_MovieSceneSequencePlayer::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	UMovieScene_MovieSceneSequencePlayer_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFrameRate UMovieScene_MovieSceneSequencePlayer::GetFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	UMovieScene_MovieSceneSequencePlayer_GetFrameRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieScene_MovieSceneSequencePlayer::GetFrameDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	UMovieScene_MovieSceneSequencePlayer_GetFrameDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQualifiedFrameTime UMovieScene_MovieSceneSequencePlayer::GetEndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	UMovieScene_MovieSceneSequencePlayer_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQualifiedFrameTime UMovieScene_MovieSceneSequencePlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	UMovieScene_MovieSceneSequencePlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieScene_MovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	UMovieScene_MovieSceneSequencePlayer_GetDisableCameraCuts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQualifiedFrameTime UMovieScene_MovieSceneSequencePlayer::GetCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	UMovieScene_MovieSceneSequencePlayer_GetCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID ObjectBinding                  (Parm)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UMovieScene_MovieSceneSequencePlayer::GetBoundObjects(const struct FMovieScene_MovieSceneObjectBindingID& ObjectBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	UMovieScene_MovieSceneSequencePlayer_GetBoundObjects_Params params;
	params.ObjectBinding = ObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)

void UMovieScene_MovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieScene_MovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Interp                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieScene_MovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	UMovieScene_MovieSceneEasingFunction_OnEvaluate_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSubSection.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieScene_MovieSceneSequence* Sequence                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScene_MovieSceneSubSection::SetSequence(class UMovieScene_MovieSceneSequence* Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	UMovieScene_MovieSceneSubSection_SetSequence_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSubSection.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieScene_MovieSceneSequence* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieScene_MovieSceneSequence* UMovieScene_MovieSceneSubSection::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	UMovieScene_MovieSceneSubSection_GetSequence_Params params;

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
