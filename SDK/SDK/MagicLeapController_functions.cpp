
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

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_SetMotionSourceForHand(FInputCore_InputCore_EControllerHand Hand, const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params params;
	params.Hand = Hand;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_SetControllerTrackingMode(FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params params;
	params.TrackingMode = TrackingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_PlayLEDPattern(const struct FName& MotionSource, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayLEDPattern_Params params;
	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect                      (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_PlayLEDEffect(const struct FName& MotionSource, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayLEDEffect_Params params;
	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                  (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_PlayHapticPattern(const struct FName& MotionSource, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayHapticPattern_Params params;
	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect                      (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_PlayControllerLEDEffect(FInputCore_InputCore_EControllerHand Hand, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params params;
	params.Hand = Hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                     (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_PlayControllerLED(FInputCore_InputCore_EControllerHand Hand, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayControllerLED_Params params;
	params.Hand = Hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                  (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_PlayControllerHapticFeedback(FInputCore_InputCore_EControllerHand Hand, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params params;
	params.Hand = Hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_MaxSupportedMagicLeapControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_IsMLControllerConnected(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
// (Final, Native, Static, Public, BlueprintCallable)

void UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_InvertControllerMapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_InvertControllerMapping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_GetMotionSourceForHand(FInputCore_InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FInputCore_InputCore_EControllerHand Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapController_MagicLeapController_EMagicLeapControllerType UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_GetMLControllerType(FInputCore_InputCore_EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_GetMLControllerType_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// FInputCore_InputCore_EControllerHand ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FInputCore_InputCore_EControllerHand UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_GetHandForMotionSource(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// FMagicLeapController_MagicLeapController_EMagicLeapControllerType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapController_MagicLeapController_EMagicLeapControllerType UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_GetControllerType(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_GetControllerType_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_GetControllerTrackingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// FInputCore_InputCore_EControllerHand Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapController_MagicLeapControllerFunctionLibrary::STATIC_GetControllerMapping(int ControllerIndex, FInputCore_InputCore_EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");

	UMagicLeapController_MagicLeapControllerFunctionLibrary_GetControllerMapping_Params params;
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
