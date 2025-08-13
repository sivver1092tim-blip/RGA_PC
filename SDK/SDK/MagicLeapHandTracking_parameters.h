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

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params
{
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params
{
	TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackingEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params
{
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params
{
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Secondary;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Pointer;                                                  // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HandCenterNormalized;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  HandCenter;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Keypoints;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params
{
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
struct UMagicLeapHandTracking_MagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params
{
	TArray<FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures;                                     // (Parm, OutParm, ZeroConstructor)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FMagicLeapHandTracking_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackingEnabled;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
