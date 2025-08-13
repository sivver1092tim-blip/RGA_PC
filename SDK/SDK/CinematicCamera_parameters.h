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

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
struct ACinematicCamera_CameraRig_Rail_GetRailSplineComponent_Params
{
	class UEngine_SplineComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
struct ACinematicCamera_CineCameraActor_GetCineCameraComponent_Params
{
	class UCinematicCamera_CineCameraComponent*        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
struct UCinematicCamera_CineCameraComponent_SetLensPresetByName_Params
{
	struct FString                                     InPresetName;                                             // (Parm, ZeroConstructor)
};

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
struct UCinematicCamera_CineCameraComponent_SetFilmbackPresetByName_Params
{
	struct FString                                     InPresetName;                                             // (Parm, ZeroConstructor)
};

// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
struct UCinematicCamera_CineCameraComponent_SetCurrentFocalLength_Params
{
	float                                              InFocalLength;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
struct UCinematicCamera_CineCameraComponent_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
struct UCinematicCamera_CineCameraComponent_GetLensPresetsCopy_Params
{
	TArray<struct FCinematicCamera_NamedLensPreset>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
struct UCinematicCamera_CineCameraComponent_GetLensPresetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
struct UCinematicCamera_CineCameraComponent_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
struct UCinematicCamera_CineCameraComponent_GetFilmbackPresetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
struct UCinematicCamera_CineCameraComponent_GetDefaultFilmbackPresetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
