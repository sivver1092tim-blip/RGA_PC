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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
struct UMagicLeapARPin_MagicLeapARPinComponent_UnPin_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
struct UMagicLeapARPin_MagicLeapARPinComponent_PinSceneComponent_Params
{
	class UEngine_SceneComponent*                      ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
struct UMagicLeapARPin_MagicLeapARPinComponent_PinRestoredOrSynced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
struct UMagicLeapARPin_MagicLeapARPinComponent_PinActor_Params
{
	class AEngine_Actor*                               ActorToPin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
struct UMagicLeapARPin_MagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params
{
	bool                                               bRestoredOrSynced;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
struct UMagicLeapARPin_MagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
struct UMagicLeapARPin_MagicLeapARPinComponent_IsPinned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
struct UMagicLeapARPin_MagicLeapARPinComponent_GetPinnedPinID_Params
{
	struct FGuid                                       PinID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
struct UMagicLeapARPin_MagicLeapARPinComponent_GetPinData_Params
{
	class UClass*                                      PinDataClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMagicLeapARPin_MagicLeapARPinSaveGame*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params
{
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_GetClosestARPin_Params
{
	struct FVector                                     SearchPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuid                                       PinID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_GetAvailableARPins_Params
{
	int                                                NumRequested;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               Pins;                                                     // (Parm, OutParm, ZeroConstructor)
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params
{
	struct FGuid                                       PinID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PinFoundInEnvironment;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_DestroyTracker_Params
{
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
struct UMagicLeapARPin_MagicLeapARPinFunctionLibrary_CreateTracker_Params
{
	FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
