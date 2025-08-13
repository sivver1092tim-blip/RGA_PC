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

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct UMovieSceneTracks_MovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieSceneTracks_MovieScene3DConstraintSection_SetConstraintBindingID_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       InConstraintBindingID;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieSceneTracks_MovieScene3DConstraintSection_GetConstraintBindingID_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneTracks_MovieSceneAudioSection_SetStartOffset_Params
{
	struct FFrameNumber                                InStartOffset;                                            // (Parm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneTracks_MovieSceneAudioSection_SetSound_Params
{
	class UEngine_SoundBase*                           InSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneTracks_MovieSceneAudioSection_GetStartOffset_Params
{
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneTracks_MovieSceneAudioSection_GetSound_Params
{
	class UEngine_SoundBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneTracks_MovieSceneCameraCutSection_SetCameraBindingID_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       InCameraBindingID;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneTracks_MovieSceneCameraCutSection_GetCameraBindingID_Params
{
	struct FMovieScene_MovieSceneObjectBindingID       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneTracks_MovieSceneCinematicShotSection_SetShotDisplayName_Params
{
	struct FString                                     InShotDisplayName;                                        // (Parm, ZeroConstructor)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneTracks_MovieSceneCinematicShotSection_GetShotDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneTracks_MovieSceneLevelVisibilitySection_SetVisibility_Params
{
	FMovieSceneTracks_MovieSceneTracks_ELevelVisibility InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneTracks_MovieSceneLevelVisibilitySection_SetLevelNames_Params
{
	TArray<struct FName>                               InLevelNames;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneTracks_MovieSceneLevelVisibilitySection_GetVisibility_Params
{
	FMovieSceneTracks_MovieSceneTracks_ELevelVisibility ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneTracks_MovieSceneLevelVisibilitySection_GetLevelNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
