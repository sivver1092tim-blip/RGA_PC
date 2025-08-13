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

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
struct UMagicLeapPlanes_MagicLeapPlanesComponent_RequestPlanesAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params
{
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> OutReorderedFlags;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params
{
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> OutFlags;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params
{
	struct FMagicLeapPlanes_MagicLeapPlanesQuery       Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_GetContentScale_Params
{
	class AEngine_Actor*                               ContentActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMagicLeapPlanes_MagicLeapPlaneResult       PlaneResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_DestroyTracker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
struct UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_CreateTracker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
