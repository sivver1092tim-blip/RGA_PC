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

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params
{
	struct FTransform                                  ExternalTrackingTransform;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params
{
	TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params
{
	class UEngine_Texture*                             InTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params
{
	struct FVector2D                                   EyeRectMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EyeRectMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureRectMin;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureRectMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawEyeFirst;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearBlack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params
{
	FHeadMountedDisplay_HeadMountedDisplay_ESpectatorScreenMode Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params
{
	float                                              Near;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Far;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EOrientPositionSelector> Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params
{
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetVRFocusState_Params
{
	bool                                               bUseFocus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFocus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeftFOV;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightFOV;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TopFOV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BottomFOV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NearPlane;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FarPlane;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params
{
	TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDTrackingOrigin> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
	struct FVector                                     CameraOrigin;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NearPlane;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FarPlane;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetPixelDensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetHMDWornState_Params
{
	TEnumAsByte<FHeadMountedDisplay_HeadMountedDisplay_EHMDWornState> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsTracked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPositionalTracking;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_GetDevicePose_Params
{
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsTracked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPositionalTracking;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params
{
	struct FName                                       SystemId;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FHeadMountedDisplay_HeadMountedDisplay_EXRTrackedDeviceType DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHeadMountedDisplay_XRDeviceId>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_EnableHMD_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
struct UHeadMountedDisplay_HeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params
{
	struct FTransform                                  ExternalTrackingTransform;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
	class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
	class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FInputCore_InputCore_EControllerHand               Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params
{
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct UHeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
	class UHeadMountedDisplay_MotionControllerComponent* MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
struct UHeadMountedDisplay_XRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params
{
	class AEngine_Actor*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SystemName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (Parm, OutParm)
	class UEngine_PrimitiveComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
struct UHeadMountedDisplay_XRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params
{
	class AEngine_Actor*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UEngine_PrimitiveComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params
{
	class AEngine_Actor*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SystemName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (Parm, OutParm)
	class UEngine_PrimitiveComponent*                  NewComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params
{
	class AEngine_Actor*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHeadMountedDisplay_XRDeviceId              XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UEngine_PrimitiveComponent*                  NewComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
struct UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_ShowLoadingScreen_Params
{
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
struct UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_SetLoadingScreen_Params
{
	class UEngine_Texture*                             Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLoadingMovie;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnSet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
struct UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_HideLoadingScreen_Params
{
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
struct UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Params
{
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
struct UHeadMountedDisplay_XRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params
{
	class UEngine_Texture*                             Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearBeforeAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct UHeadMountedDisplay_MotionControllerComponent_SetTrackingSource_Params
{
	FInputCore_InputCore_EControllerHand               NewSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct UHeadMountedDisplay_MotionControllerComponent_SetTrackingMotionSource_Params
{
	struct FName                                       NewSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct UHeadMountedDisplay_MotionControllerComponent_SetShowDeviceModel_Params
{
	bool                                               bShowControllerModel;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct UHeadMountedDisplay_MotionControllerComponent_SetDisplayModelSource_Params
{
	struct FName                                       NewDisplayModelSource;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct UHeadMountedDisplay_MotionControllerComponent_SetCustomDisplayMesh_Params
{
	class UEngine_StaticMesh*                          NewDisplayMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct UHeadMountedDisplay_MotionControllerComponent_SetAssociatedPlayerIndex_Params
{
	int                                                NewPlayer;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
struct UHeadMountedDisplay_MotionControllerComponent_OnMotionControllerUpdated_Params
{
};

// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UHeadMountedDisplay_MotionControllerComponent_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct UHeadMountedDisplay_MotionControllerComponent_GetTrackingSource_Params
{
	FInputCore_InputCore_EControllerHand               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct UHeadMountedDisplay_MotionControllerComponent_GetParameterValue_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValueFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
struct UHeadMountedDisplay_MotionControllerComponent_GetHandJointPosition_Params
{
	int                                                jointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValueFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
