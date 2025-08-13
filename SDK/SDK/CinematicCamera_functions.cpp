
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

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UEngine_SplineComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEngine_SplineComponent* ACinematicCamera_CameraRig_Rail::GetRailSplineComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");

	ACinematicCamera_CameraRig_Rail_GetRailSplineComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCinematicCamera_CineCameraComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCinematicCamera_CineCameraComponent* ACinematicCamera_CineCameraActor::GetCineCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	ACinematicCamera_CineCameraActor_GetCineCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor)

void UCinematicCamera_CineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	UCinematicCamera_CineCameraComponent_SetLensPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor)

void UCinematicCamera_CineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	UCinematicCamera_CineCameraComponent_SetFilmbackPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          InFocalLength                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCinematicCamera_CineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");

	UCinematicCamera_CineCameraComponent_SetCurrentFocalLength_Params params;
	params.InFocalLength = InFocalLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCinematicCamera_CineCameraComponent::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	UCinematicCamera_CineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCinematicCamera_NamedLensPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCinematicCamera_NamedLensPreset> UCinematicCamera_CineCameraComponent::STATIC_GetLensPresetsCopy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");

	UCinematicCamera_CineCameraComponent_GetLensPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCinematicCamera_CineCameraComponent::GetLensPresetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	UCinematicCamera_CineCameraComponent_GetLensPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCinematicCamera_CineCameraComponent::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	UCinematicCamera_CineCameraComponent_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCinematicCamera_CineCameraComponent::GetFilmbackPresetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	UCinematicCamera_CineCameraComponent_GetFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCinematicCamera_CineCameraComponent::GetDefaultFilmbackPresetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");

	UCinematicCamera_CineCameraComponent_GetDefaultFilmbackPresetName_Params params;

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
