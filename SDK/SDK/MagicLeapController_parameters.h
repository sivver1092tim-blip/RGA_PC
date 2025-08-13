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

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params
{
	FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayLEDPattern_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayLEDEffect_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayHapticPattern_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayControllerLED_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_InvertControllerMapping_Params
{
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_GetMLControllerType_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerType ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FInputCore_InputCore_EControllerHand               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_GetControllerType_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapController_MagicLeapController_EMagicLeapControllerType ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params
{
	FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
struct UMagicLeapController_MagicLeapControllerFunctionLibrary_GetControllerMapping_Params
{
	int                                                ControllerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
