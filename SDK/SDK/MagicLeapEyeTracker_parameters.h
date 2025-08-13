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

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetFixationComfort
struct UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary_GetFixationComfort_Params
{
	struct FMagicLeapEyeTracker_MagicLeapFixationComfort FixationComfort;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
struct UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Params
{
	struct FMagicLeapEyeTracker_MagicLeapEyeBlinkState BlinkState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
struct UMagicLeapEyeTracker_MagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Params
{
	FMagicLeapEyeTracker_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
