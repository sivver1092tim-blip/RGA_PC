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

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
struct UMagicLeapImageTracker_MagicLeapImageTrackerComponent_SetTargetAsync_Params
{
	class UEngine_Texture2D*                           ImageTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
struct UMagicLeapImageTracker_MagicLeapImageTrackerComponent_RemoveTargetAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
struct UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params
{
	int                                                MaxSimultaneousTargets;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
struct UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
struct UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
struct UMagicLeapImageTracker_MagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
