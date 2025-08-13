
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

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UMovieSceneTracks_MovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	UMovieSceneTracks_MovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID InConstraintBindingID          (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneTracks_MovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieScene_MovieSceneObjectBindingID& InConstraintBindingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	UMovieSceneTracks_MovieScene3DConstraintSection_SetConstraintBindingID_Params params;
	params.InConstraintBindingID = InConstraintBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FMovieScene_MovieSceneObjectBindingID UMovieSceneTracks_MovieScene3DConstraintSection::GetConstraintBindingID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	UMovieSceneTracks_MovieScene3DConstraintSection_GetConstraintBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InStartOffset                  (Parm)

void UMovieSceneTracks_MovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	UMovieSceneTracks_MovieSceneAudioSection_SetStartOffset_Params params;
	params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_SoundBase*       InSound                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneTracks_MovieSceneAudioSection::SetSound(class UEngine_SoundBase* InSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	UMovieSceneTracks_MovieSceneAudioSection_SetSound_Params params;
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UMovieSceneTracks_MovieSceneAudioSection::GetStartOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	UMovieSceneTracks_MovieSceneAudioSection_GetStartOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_SoundBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngine_SoundBase* UMovieSceneTracks_MovieSceneAudioSection::GetSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	UMovieSceneTracks_MovieSceneAudioSection_GetSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID InCameraBindingID              (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneTracks_MovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieScene_MovieSceneObjectBindingID& InCameraBindingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	UMovieSceneTracks_MovieSceneCameraCutSection_SetCameraBindingID_Params params;
	params.InCameraBindingID = InCameraBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FMovieScene_MovieSceneObjectBindingID UMovieSceneTracks_MovieSceneCameraCutSection::GetCameraBindingID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	UMovieSceneTracks_MovieSceneCameraCutSection_GetCameraBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InShotDisplayName              (Parm, ZeroConstructor)

void UMovieSceneTracks_MovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	UMovieSceneTracks_MovieSceneCinematicShotSection_SetShotDisplayName_Params params;
	params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneTracks_MovieSceneCinematicShotSection::GetShotDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	UMovieSceneTracks_MovieSceneCinematicShotSection_GetShotDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FMovieSceneTracks_MovieSceneTracks_ELevelVisibility InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneTracks_MovieSceneLevelVisibilitySection::SetVisibility(FMovieSceneTracks_MovieSceneTracks_ELevelVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	UMovieSceneTracks_MovieSceneLevelVisibilitySection_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           InLevelNames                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMovieSceneTracks_MovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	UMovieSceneTracks_MovieSceneLevelVisibilitySection_SetLevelNames_Params params;
	params.InLevelNames = InLevelNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMovieSceneTracks_MovieSceneTracks_ELevelVisibility ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMovieSceneTracks_MovieSceneTracks_ELevelVisibility UMovieSceneTracks_MovieSceneLevelVisibilitySection::GetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	UMovieSceneTracks_MovieSceneLevelVisibilitySection_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UMovieSceneTracks_MovieSceneLevelVisibilitySection::GetLevelNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	UMovieSceneTracks_MovieSceneLevelVisibilitySection_GetLevelNames_Params params;

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
