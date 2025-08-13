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

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
struct UEyeTracker_EyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
struct UEyeTracker_EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
struct UEyeTracker_EyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
struct UEyeTracker_EyeTrackerFunctionLibrary_GetStereoGazeData_Params
{
	struct FEyeTracker_EyeTrackerStereoGazeData        OutGazeData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
struct UEyeTracker_EyeTrackerFunctionLibrary_GetGazeData_Params
{
	struct FEyeTracker_EyeTrackerGazeData              OutGazeData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
