
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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperFlipbook::IsValidKeyFrameIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	UPaper2D_PaperFlipbook_IsValidKeyFrameIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaper2D_PaperFlipbook::GetTotalDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	UPaper2D_PaperFlipbook_GetTotalDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPaper2D_PaperSprite*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaper2D_PaperSprite* UPaper2D_PaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	UPaper2D_PaperFlipbook_GetSpriteAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPaper2D_PaperSprite*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaper2D_PaperSprite* UPaper2D_PaperFlipbook::GetSpriteAtFrame(int FrameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	UPaper2D_PaperFlipbook_GetSpriteAtFrame_Params params;
	params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperFlipbook::GetNumKeyFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	UPaper2D_PaperFlipbook_GetNumKeyFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperFlipbook::GetNumFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	UPaper2D_PaperFlipbook_GetNumFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	UPaper2D_PaperFlipbook_GetKeyFrameIndexAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperFlipbookComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	UPaper2D_PaperFlipbookComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	UPaper2D_PaperFlipbookComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewRate                        (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::SetPlayRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	UPaper2D_PaperFlipbookComponent_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	UPaper2D_PaperFlipbookComponent_SetPlaybackPositionInFrames_Params params;
	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	UPaper2D_PaperFlipbookComponent_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::SetNewTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	UPaper2D_PaperFlipbookComponent_SetNewTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::SetLooping(bool bNewLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	UPaper2D_PaperFlipbookComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaper2D_PaperFlipbook*  NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperFlipbookComponent::SetFlipbook(class UPaper2D_PaperFlipbook* NewFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	UPaper2D_PaperFlipbookComponent_SetFlipbook_Params params;
	params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperFlipbookComponent::ReverseFromEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	UPaper2D_PaperFlipbookComponent_ReverseFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Reverse
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperFlipbookComponent::Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	UPaper2D_PaperFlipbookComponent_Reverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperFlipbookComponent::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	UPaper2D_PaperFlipbookComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Play
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperFlipbookComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	UPaper2D_PaperFlipbookComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// (Final, Native, Protected)
// Parameters:
// class UPaper2D_PaperFlipbook*  OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperFlipbookComponent::OnRep_SourceFlipbook(class UPaper2D_PaperFlipbook* OldFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	UPaper2D_PaperFlipbookComponent_OnRep_SourceFlipbook_Params params;
	params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperFlipbookComponent::IsReversing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	UPaper2D_PaperFlipbookComponent_IsReversing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperFlipbookComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	UPaper2D_PaperFlipbookComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperFlipbookComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	UPaper2D_PaperFlipbookComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaper2D_PaperFlipbookComponent::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	UPaper2D_PaperFlipbookComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	UPaper2D_PaperFlipbookComponent_GetPlaybackPositionInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaper2D_PaperFlipbookComponent::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	UPaper2D_PaperFlipbookComponent_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	UPaper2D_PaperFlipbookComponent_GetFlipbookLengthInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaper2D_PaperFlipbookComponent::GetFlipbookLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	UPaper2D_PaperFlipbookComponent_GetFlipbookLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaper2D_PaperFlipbookComponent::GetFlipbookFramerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	UPaper2D_PaperFlipbookComponent_GetFlipbookFramerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaper2D_PaperFlipbook*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaper2D_PaperFlipbook* UPaper2D_PaperFlipbookComponent::GetFlipbook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	UPaper2D_PaperFlipbookComponent_GetFlipbook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	UPaper2D_PaperGroupedSpriteComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewInstanceColor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	UPaper2D_PaperGroupedSpriteComponent_UpdateInstanceColor_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldSpaceSortAxis             (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	UPaper2D_PaperGroupedSpriteComponent_SortInstancesAlongAxis_Params params;
	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	UPaper2D_PaperGroupedSpriteComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	UPaper2D_PaperGroupedSpriteComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperGroupedSpriteComponent::GetInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	UPaper2D_PaperGroupedSpriteComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// (Native, Public, BlueprintCallable)

void UPaper2D_PaperGroupedSpriteComponent::ClearInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	UPaper2D_PaperGroupedSpriteComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPaper2D_PaperSprite*    Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaper2D_PaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaper2D_PaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	UPaper2D_PaperGroupedSpriteComponent_AddInstance_Params params;
	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaper2D_PaperSprite*    Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateCore_SlateBrush   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateCore_SlateBrush UPaper2D_PaperSpriteBlueprintLibrary::STATIC_MakeBrushFromSprite(class UPaper2D_PaperSprite* Sprite, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	UPaper2D_PaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params params;
	params.Sprite = Sprite;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	UPaper2D_PaperSpriteComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperSpriteComponent.SetSprite
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaper2D_PaperSprite*    NewSprite                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperSpriteComponent::SetSprite(class UPaper2D_PaperSprite* NewSprite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	UPaper2D_PaperSpriteComponent_SetSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.GetSprite
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaper2D_PaperSprite*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaper2D_PaperSprite* UPaper2D_PaperSpriteComponent::GetSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	UPaper2D_PaperSpriteComponent_GetSprite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	UPaper2D_PaperTerrainComponent_SetTerrainColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	UPaper2D_PaperTileMapComponent_SetTileMapColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaper2D_PaperTileMap*   NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperTileMapComponent::SetTileMap(class UPaper2D_PaperTileMap* NewTileMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	UPaper2D_PaperTileMapComponent_SetTileMap_Params params;
	params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.SetTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaper2D_PaperTileInfo  NewValue                       (Parm)

void UPaper2D_PaperTileMapComponent::SetTile(int X, int Y, int Layer, const struct FPaper2D_PaperTileInfo& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	UPaper2D_PaperTileMapComponent_SetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	UPaper2D_PaperTileMapComponent_SetLayerColor_Params params;
	params.NewColor = NewColor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomThickness                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	UPaper2D_PaperTileMapComponent_SetLayerCollision_Params params;
	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	UPaper2D_PaperTileMapComponent_SetDefaultCollisionThickness_Params params;
	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	UPaper2D_PaperTileMapComponent_ResizeMap_Params params;
	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperTileMapComponent::RebuildCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	UPaper2D_PaperTileMapComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaper2D_PaperTileMapComponent::OwnsTileMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	UPaper2D_PaperTileMapComponent_OwnsTileMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// (Final, Native, Public, BlueprintCallable)

void UPaper2D_PaperTileMapComponent::MakeTileMapEditable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	UPaper2D_PaperTileMapComponent_MakeTileMapEditable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	UPaper2D_PaperTileMapComponent_GetTilePolygon_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPaper2D_PaperTileMapComponent::GetTileMapColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	UPaper2D_PaperTileMapComponent_GetTileMapColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaper2D_PaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	UPaper2D_PaperTileMapComponent_GetTileCornerPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaper2D_PaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	UPaper2D_PaperTileMapComponent_GetTileCenterPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaper2D_PaperTileInfo  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPaper2D_PaperTileInfo UPaper2D_PaperTileMapComponent::GetTile(int X, int Y, int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	UPaper2D_PaperTileMapComponent_GetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            MapWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MapHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumLayers                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	UPaper2D_PaperTileMapComponent_GetMapSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;
}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPaper2D_PaperTileMapComponent::GetLayerColor(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	UPaper2D_PaperTileMapComponent_GetLayerColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MapWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MapHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileWidth                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData)

void UPaper2D_PaperTileMapComponent::CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	UPaper2D_PaperTileMapComponent_CreateNewTileMap_Params params;
	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPaper2D_PaperTileLayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaper2D_PaperTileLayer* UPaper2D_PaperTileMapComponent::AddNewLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	UPaper2D_PaperTileMapComponent_AddNewLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            TileIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPaper2D_PaperTileSet*   TileSet                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipH                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipV                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipD                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaper2D_PaperTileInfo  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPaper2D_PaperTileInfo UPaper2D_TileMapBlueprintLibrary::STATIC_MakeTile(int TileIndex, class UPaper2D_PaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	UPaper2D_TileMapBlueprintLibrary_MakeTile_Params params;
	params.TileIndex = TileIndex;
	params.TileSet = TileSet;
	params.bFlipH = bFlipH;
	params.bFlipV = bFlipV;
	params.bFlipD = bFlipD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaper2D_PaperTileInfo  Tile                           (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UPaper2D_TileMapBlueprintLibrary::STATIC_GetTileUserData(const struct FPaper2D_PaperTileInfo& Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	UPaper2D_TileMapBlueprintLibrary_GetTileUserData_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaper2D_PaperTileInfo  Tile                           (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPaper2D_TileMapBlueprintLibrary::STATIC_GetTileTransform(const struct FPaper2D_PaperTileInfo& Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	UPaper2D_TileMapBlueprintLibrary_GetTileTransform_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaper2D_PaperTileInfo  Tile                           (Parm)
// int                            TileIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPaper2D_PaperTileSet*   TileSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipH                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPaper2D_TileMapBlueprintLibrary::STATIC_BreakTile(const struct FPaper2D_PaperTileInfo& Tile, int* TileIndex, class UPaper2D_PaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	UPaper2D_TileMapBlueprintLibrary_BreakTile_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TileIndex != nullptr)
		*TileIndex = params.TileIndex;
	if (TileSet != nullptr)
		*TileSet = params.TileSet;
	if (bFlipH != nullptr)
		*bFlipH = params.bFlipH;
	if (bFlipV != nullptr)
		*bFlipV = params.bFlipV;
	if (bFlipD != nullptr)
		*bFlipD = params.bFlipD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
