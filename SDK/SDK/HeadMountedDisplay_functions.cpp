
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

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ExternalTrackingTransform      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params params;
	params.ExternalTrackingTransform = ExternalTrackingTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> Origin                         (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_SetTrackingOrigin(TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         InTexture                      (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenTexture(class UEngine_Texture* InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               EyeRectMin                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               EyeRectMax                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TextureRectMin                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TextureRectMax                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawEyeFirst                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearBlack                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params params;
	params.EyeRectMin = EyeRectMin;
	params.EyeRectMax = EyeRectMax;
	params.TextureRectMin = TextureRectMin;
	params.TextureRectMax = TextureRectMax;
	params.bDrawEyeFirst = bDrawEyeFirst;
	params.bClearBlack = bClearBlack;
	params.bUseAlpha = bUseAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FHeadMountedDisplay_HeadMountedDisplay_ESpectatorScreenMode Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenMode(FHeadMountedDisplay_HeadMountedDisplay_ESpectatorScreenMode Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Near                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Far                            (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_SetClippingPlanes(float Near, float Far)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params params;
	params.Near = Near;
	params.Far = Far;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params params;
	params.Yaw = Yaw;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_IsSpectatorScreenModeControllable()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_IsInLowPersistenceMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_IsHeadMountedDisplayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_IsHeadMountedDisplayConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_IsDeviceTracking(const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params params;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_HasValidTrackingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetWorldToMetersScale(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bUseFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetVRFocusState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUseFocus != nullptr)
		*bUseFocus = params.bUseFocus;
	if (bHasFocus != nullptr)
		*bHasFocus = params.bHasFocus;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetTrackingToWorldTransform(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeftFOV                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFOV                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TopFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BottomFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LeftFOV != nullptr)
		*LeftFOV = params.LeftFOV;
	if (RightFOV != nullptr)
		*RightFOV = params.RightFOV;
	if (TopFOV != nullptr)
		*TopFOV = params.TopFOV;
	if (BottomFOV != nullptr)
		*BottomFOV = params.BottomFOV;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetTrackingOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetScreenPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 CameraOrigin                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraOrigin != nullptr)
		*CameraOrigin = params.CameraOrigin;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (HFOV != nullptr)
		*HFOV = params.HFOV;
	if (VFOV != nullptr)
		*VFOV = params.VFOV;
	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetPixelDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetPixelDensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DevicePosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetNumOfTrackingSensors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDWornState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDWornState> UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetHMDWornState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetHMDWornState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetHMDDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsTracked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasPositionalTracking         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params params;
	params.WorldContext = WorldContext;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsTracked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasPositionalTracking         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_GetDevicePose(const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetDevicePose_Params params;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SystemId                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FHeadMountedDisplay_HeadMountedDisplay_EXRTrackedDeviceType DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHeadMountedDisplay_XRDeviceId> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FHeadMountedDisplay_XRDeviceId> UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_EnumerateTrackedDevices(const struct FName& SystemId, FHeadMountedDisplay_HeadMountedDisplay_EXRTrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params params;
	params.SystemId = SystemId;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_EnableLowPersistenceMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_EnableHMD(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_EnableHMD_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ExternalTrackingTransform      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary::STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD");

	UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params params;
	params.ExternalTrackingTransform = ExternalTrackingTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, FInputCore_InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForComponent(class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackedDeviceCountManagementNecessary()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_GetMotionTrackingEnabledControllerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_GetMaximumMotionTrackedControllerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_GetActiveTrackingSystemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_EnumerateMotionSources()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, FInputCore_InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingForComponent(class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, FInputCore_InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, Native, Static, Public, BlueprintCallable)

void UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfAllControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingForComponent(class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SystemName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DeviceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (Parm, OutParm)
// class UEngine_PrimitiveComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEngine_PrimitiveComponent* UHeadMountedDisplay_XRAssetFunctionLibrary::STATIC_AddNamedDeviceVisualizationComponentBlocking(class AEngine_Actor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FHeadMountedDisplay_XRDeviceId* XRDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking");

	UHeadMountedDisplay_XRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params params;
	params.Target = Target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UEngine_PrimitiveComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEngine_PrimitiveComponent* UHeadMountedDisplay_XRAssetFunctionLibrary::STATIC_AddDeviceVisualizationComponentBlocking(class AEngine_Actor* Target, const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking");

	UHeadMountedDisplay_XRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params params;
	params.Target = Target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SystemName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DeviceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (Parm, OutParm)
// class UEngine_PrimitiveComponent* NewComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent::STATIC_AddNamedDeviceVisualizationComponentAsync(class AEngine_Actor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FHeadMountedDisplay_XRDeviceId* XRDeviceId, class UEngine_PrimitiveComponent** NewComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params params;
	params.Target = Target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;
	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHeadMountedDisplay_XRDeviceId XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UEngine_PrimitiveComponent* NewComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent::STATIC_AddDeviceVisualizationComponentAsync(class AEngine_Actor* Target, const struct FHeadMountedDisplay_XRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UEngine_PrimitiveComponent** NewComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params params;
	params.Target = Target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UHeadMountedDisplay_XRLoadingScreenFunctionLibrary::STATIC_ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen");

	UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowLoadingMovie              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowOnSet                     (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_XRLoadingScreenFunctionLibrary::STATIC_SetLoadingScreen(class UEngine_Texture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen");

	UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_SetLoadingScreen_Params params;
	params.Texture = Texture;
	params.Scale = Scale;
	params.Offset = Offset;
	params.bShowLoadingMovie = bShowLoadingMovie;
	params.bShowOnSet = bShowOnSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UHeadMountedDisplay_XRLoadingScreenFunctionLibrary::STATIC_HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen");

	UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
// (Final, Native, Static, Public, BlueprintCallable)

void UHeadMountedDisplay_XRLoadingScreenFunctionLibrary::STATIC_ClearLoadingScreenSplashes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes");

	UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Translation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearBeforeAdd                (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_XRLoadingScreenFunctionLibrary::STATIC_AddLoadingScreenSplash(class UEngine_Texture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash");

	UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params params;
	params.Texture = Texture;
	params.Translation = Translation;
	params.Rotation = Rotation;
	params.Size = Size;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand NewSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionControllerComponent::SetTrackingSource(FInputCore_InputCore_EControllerHand NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	UHeadMountedDisplay_MotionControllerComponent_SetTrackingSource_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionControllerComponent::SetTrackingMotionSource(const struct FName& NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	UHeadMountedDisplay_MotionControllerComponent_SetTrackingMotionSource_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowControllerModel           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	UHeadMountedDisplay_MotionControllerComponent_SetShowDeviceModel_Params params;
	params.bShowControllerModel = bShowControllerModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewDisplayModelSource          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionControllerComponent::SetDisplayModelSource(const struct FName& NewDisplayModelSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	UHeadMountedDisplay_MotionControllerComponent_SetDisplayModelSource_Params params;
	params.NewDisplayModelSource = NewDisplayModelSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_StaticMesh*      NewDisplayMesh                 (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionControllerComponent::SetCustomDisplayMesh(class UEngine_StaticMesh* NewDisplayMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	UHeadMountedDisplay_MotionControllerComponent_SetCustomDisplayMesh_Params params;
	params.NewDisplayMesh = NewDisplayMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPlayer                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplay_MotionControllerComponent::SetAssociatedPlayerIndex(int NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	UHeadMountedDisplay_MotionControllerComponent_SetAssociatedPlayerIndex_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (Event, Protected, BlueprintEvent)

void UHeadMountedDisplay_MotionControllerComponent::OnMotionControllerUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	UHeadMountedDisplay_MotionControllerComponent_OnMotionControllerUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplay_MotionControllerComponent::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	UHeadMountedDisplay_MotionControllerComponent_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FInputCore_InputCore_EControllerHand ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FInputCore_InputCore_EControllerHand UHeadMountedDisplay_MotionControllerComponent::GetTrackingSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	UHeadMountedDisplay_MotionControllerComponent_GetTrackingSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValueFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHeadMountedDisplay_MotionControllerComponent::GetParameterValue(const struct FName& InName, bool* bValueFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	UHeadMountedDisplay_MotionControllerComponent_GetParameterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            jointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValueFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UHeadMountedDisplay_MotionControllerComponent::GetHandJointPosition(int jointIndex, bool* bValueFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition");

	UHeadMountedDisplay_MotionControllerComponent_GetHandJointPosition_Params params;
	params.jointIndex = jointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
