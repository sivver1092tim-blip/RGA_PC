#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MagicLeapAR.ELuminARTrackingState
enum class FMagicLeapAR_MagicLeapAR_ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking = 0,
	ELuminARTrackingState__NotTracking = 1,
	ELuminARTrackingState__StoppedTracking = 2,
	ELuminARTrackingState__ELuminARTrackingState_MAX = 3
};


// Enum MagicLeapAR.ELuminARAvailability
enum class FMagicLeapAR_MagicLeapAR_ELuminARAvailability : uint8_t
{
	ELuminARAvailability__UnknownError = 0,
	ELuminARAvailability__SupportedInstalled = 1,
	ELuminARAvailability__ELuminARAvailability_MAX = 2
};


// Enum MagicLeapAR.ELuminARFunctionStatus
enum class FMagicLeapAR_MagicLeapAR_ELuminARFunctionStatus : uint8_t
{
	ELuminARFunctionStatus__Success = 0,
	ELuminARFunctionStatus__Fatal  = 1,
	ELuminARFunctionStatus__SessionPaused = 2,
	ELuminARFunctionStatus__NotTracking = 3,
	ELuminARFunctionStatus__ResourceExhausted = 4,
	ELuminARFunctionStatus__NotAvailable = 5,
	ELuminARFunctionStatus__InvalidType = 6,
	ELuminARFunctionStatus__Unknown = 7,
	ELuminARFunctionStatus__ELuminARFunctionStatus_MAX = 8
};


// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class FMagicLeapAR_MagicLeapAR_ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None = 0,
	ELuminARLineTraceChannel__FeaturePoint = 1,
	ELuminARLineTraceChannel__InfinitePlane = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent = 3,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon = 4,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal = 5,
	ELuminARLineTraceChannel__ELuminARLineTraceChannel_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapAR.LuminARLightEstimate
// 0x0014
struct FMagicLeapAR_LuminARLightEstimate
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PixelIntensity;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RGBScaleFactor;                                           // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
