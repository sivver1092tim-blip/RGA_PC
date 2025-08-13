#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapController_MagicLeapControllerFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}


	bool STATIC_SetMotionSourceForHand(FInputCore_InputCore_EControllerHand Hand, const struct FName& MotionSource);
	bool STATIC_SetControllerTrackingMode(FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode);
	bool STATIC_PlayLEDPattern(const struct FName& MotionSource, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayLEDEffect(const struct FName& MotionSource, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayHapticPattern(const struct FName& MotionSource, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity);
	bool STATIC_PlayControllerLEDEffect(FInputCore_InputCore_EControllerHand Hand, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerLED(FInputCore_InputCore_EControllerHand Hand, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerHapticFeedback(FInputCore_InputCore_EControllerHand Hand, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, FMagicLeapController_MagicLeapController_EMagicLeapControllerHapticIntensity Intensity);
	int STATIC_MaxSupportedMagicLeapControllers();
	bool STATIC_IsMLControllerConnected(const struct FName& MotionSource);
	void STATIC_InvertControllerMapping();
	struct FName STATIC_GetMotionSourceForHand(FInputCore_InputCore_EControllerHand Hand);
	FMagicLeapController_MagicLeapController_EMagicLeapControllerType STATIC_GetMLControllerType(FInputCore_InputCore_EControllerHand Hand);
	FInputCore_InputCore_EControllerHand STATIC_GetHandForMotionSource(const struct FName& MotionSource);
	FMagicLeapController_MagicLeapController_EMagicLeapControllerType STATIC_GetControllerType(const struct FName& MotionSource);
	FMagicLeapController_MagicLeapController_EMagicLeapControllerTrackingMode STATIC_GetControllerTrackingMode();
	bool STATIC_GetControllerMapping(int ControllerIndex, FInputCore_InputCore_EControllerHand* Hand);
};


// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (0x0140 - 0x00B0)
class UMagicLeapController_MagicLeapTouchpadGesturesComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTouchpadGestureStart;                                   // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchpadGestureContinue;                                // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchpadGestureEnd;                                     // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
