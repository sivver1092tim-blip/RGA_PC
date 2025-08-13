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

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct UAugmentedReality_ARSessionConfig_ShouldResetTrackedObjects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct UAugmentedReality_ARSessionConfig_ShouldResetCameraTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct UAugmentedReality_ARSessionConfig_ShouldRenderCameraOverlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct UAugmentedReality_ARSessionConfig_ShouldEnableCameraTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct UAugmentedReality_ARSessionConfig_ShouldEnableAutoFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct UAugmentedReality_ARSessionConfig_SetWorldMapData_Params
{
	TArray<unsigned char>                              WorldMapData;                                             // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
struct UAugmentedReality_ARSessionConfig_SetSessionTrackingFeatureToEnable_Params
{
	FAugmentedReality_AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct UAugmentedReality_ARSessionConfig_SetResetTrackedObjects_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct UAugmentedReality_ARSessionConfig_SetResetCameraTracking_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct UAugmentedReality_ARSessionConfig_SetFaceTrackingUpdate_Params
{
	FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate InUpdate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct UAugmentedReality_ARSessionConfig_SetFaceTrackingDirection_Params
{
	FAugmentedReality_AugmentedReality_EARFaceTrackingDirection InDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct UAugmentedReality_ARSessionConfig_SetEnableAutoFocus_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct UAugmentedReality_ARSessionConfig_SetDesiredVideoFormat_Params
{
	struct FAugmentedReality_ARVideoFormat             NewFormat;                                                // (Parm)
};

// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct UAugmentedReality_ARSessionConfig_SetCandidateObjectList_Params
{
	TArray<class UAugmentedReality_ARCandidateObject*> InCandidateObjects;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct UAugmentedReality_ARSessionConfig_GetWorldMapData_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct UAugmentedReality_ARSessionConfig_GetWorldAlignment_Params
{
	FAugmentedReality_AugmentedReality_EARWorldAlignment ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetSessionType
struct UAugmentedReality_ARSessionConfig_GetSessionType_Params
{
	FAugmentedReality_AugmentedReality_EARSessionType  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct UAugmentedReality_ARSessionConfig_GetPlaneDetectionMode_Params
{
	FAugmentedReality_AugmentedReality_EARPlaneDetectionMode ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct UAugmentedReality_ARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct UAugmentedReality_ARSessionConfig_GetLightEstimationMode_Params
{
	FAugmentedReality_AugmentedReality_EARLightEstimationMode ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct UAugmentedReality_ARSessionConfig_GetFrameSyncMode_Params
{
	FAugmentedReality_AugmentedReality_EARFrameSyncMode ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct UAugmentedReality_ARSessionConfig_GetFaceTrackingUpdate_Params
{
	FAugmentedReality_AugmentedReality_EARFaceTrackingUpdate ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct UAugmentedReality_ARSessionConfig_GetFaceTrackingDirection_Params
{
	FAugmentedReality_AugmentedReality_EARFaceTrackingDirection ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct UAugmentedReality_ARSessionConfig_GetEnvironmentCaptureProbeType_Params
{
	FAugmentedReality_AugmentedReality_EAREnvironmentCaptureProbeType ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
struct UAugmentedReality_ARSessionConfig_GetEnabledSessionTrackingFeature_Params
{
	FAugmentedReality_AugmentedReality_EARSessionTrackingFeature ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct UAugmentedReality_ARSessionConfig_GetDesiredVideoFormat_Params
{
	struct FAugmentedReality_ARVideoFormat             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct UAugmentedReality_ARSessionConfig_GetCandidateObjectList_Params
{
	TArray<class UAugmentedReality_ARCandidateObject*> ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct UAugmentedReality_ARSessionConfig_GetCandidateImageList_Params
{
	TArray<class UAugmentedReality_ARCandidateImage*>  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct UAugmentedReality_ARSessionConfig_AddCandidateObject_Params
{
	class UAugmentedReality_ARCandidateObject*         CandidateObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct UAugmentedReality_ARSessionConfig_AddCandidateImage_Params
{
	class UAugmentedReality_ARCandidateImage*          NewCandidateImage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
struct UAugmentedReality_ARTraceResultLibrary_GetTrackedGeometry_Params
{
	struct FAugmentedReality_ARTraceResult             TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAugmentedReality_ARTrackedGeometry*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct UAugmentedReality_ARTraceResultLibrary_GetTraceChannel_Params
{
	struct FAugmentedReality_ARTraceResult             TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	FAugmentedReality_AugmentedReality_EARLineTraceChannels ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
struct UAugmentedReality_ARTraceResultLibrary_GetLocalToWorldTransform_Params
{
	struct FAugmentedReality_ARTraceResult             TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
struct UAugmentedReality_ARTraceResultLibrary_GetLocalToTrackingTransform_Params
{
	struct FAugmentedReality_ARTraceResult             TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct UAugmentedReality_ARTraceResultLibrary_GetDistanceFromCamera_Params
{
	struct FAugmentedReality_ARTraceResult             TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UAugmentedReality_ARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UAugmentedReality_ARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UAugmentedReality_ARBasicLightEstimate_GetAmbientColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetTrackingState
struct UAugmentedReality_ARPin_GetTrackingState_Params
{
	FAugmentedReality_AugmentedReality_EARTrackingState ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UAugmentedReality_ARPin_GetTrackedGeometry_Params
{
	class UAugmentedReality_ARTrackedGeometry*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetPinnedComponent
struct UAugmentedReality_ARPin_GetPinnedComponent_Params
{
	class UEngine_SceneComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UAugmentedReality_ARPin_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UAugmentedReality_ARPin_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetDebugName
struct UAugmentedReality_ARPin_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.DebugDraw
struct UAugmentedReality_ARPin_DebugDraw_Params
{
	class UEngine_World*                               World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct AAugmentedReality_ARSharedWorldGameMode_SetPreviewImageData_Params
{
	TArray<unsigned char>                              ImageData;                                                // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
struct AAugmentedReality_ARSharedWorldGameMode_SetARWorldSharingIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct AAugmentedReality_ARSharedWorldGameMode_SetARSharedWorldData_Params
{
	TArray<unsigned char>                              ARWorldData;                                              // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct AAugmentedReality_ARSharedWorldGameMode_GetARSharedWorldGameState_Params
{
	class AAugmentedReality_ARSharedWorldGameState*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
struct AAugmentedReality_ARSharedWorldGameState_K2_OnARWorldMapIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
struct AAugmentedReality_ARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
struct AAugmentedReality_ARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params
{
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
struct AAugmentedReality_ARSharedWorldPlayerController_ClientUpdateARWorldData_Params
{
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
struct AAugmentedReality_ARSharedWorldPlayerController_ClientInitSharedWorld_Params
{
	int                                                PreviewImageSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldDataSize;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct AAugmentedReality_ARSkyLight_SetEnvironmentCaptureProbe_Params
{
	class UAugmentedReality_AREnvironmentCaptureProbe* InCaptureProbe;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UAugmentedReality_ARTrackedGeometry_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
struct UAugmentedReality_ARTrackedGeometry_GetUnderlyingMesh_Params
{
	class UMRMesh_MRMeshComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UAugmentedReality_ARTrackedGeometry_GetTrackingState_Params
{
	FAugmentedReality_AugmentedReality_EARTrackingState ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
struct UAugmentedReality_ARTrackedGeometry_GetObjectClassification_Params
{
	FAugmentedReality_AugmentedReality_EARObjectClassification ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UAugmentedReality_ARTrackedGeometry_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UAugmentedReality_ARTrackedGeometry_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UAugmentedReality_ARTrackedGeometry_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UAugmentedReality_ARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UAugmentedReality_ARTrackedGeometry_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UAugmentedReality_ARPlaneGeometry_GetSubsumedBy_Params
{
	class UAugmentedReality_ARPlaneGeometry*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetOrientation
struct UAugmentedReality_ARPlaneGeometry_GetOrientation_Params
{
	FAugmentedReality_AugmentedReality_EARPlaneOrientation ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UAugmentedReality_ARPlaneGeometry_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UAugmentedReality_ARPlaneGeometry_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UAugmentedReality_ARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct UAugmentedReality_ARTrackedImage_GetEstimateSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct UAugmentedReality_ARTrackedImage_GetDetectedImage_Params
{
	class UAugmentedReality_ARCandidateImage*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct UAugmentedReality_ARFaceGeometry_GetWorldSpaceEyeTransform_Params
{
	FAugmentedReality_AugmentedReality_EAREye          Eye;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct UAugmentedReality_ARFaceGeometry_GetLocalSpaceEyeTransform_Params
{
	FAugmentedReality_AugmentedReality_EAREye          Eye;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UAugmentedReality_ARFaceGeometry_GetBlendShapeValue_Params
{
	FAugmentedReality_AugmentedReality_EARFaceBlendShape BlendShape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UAugmentedReality_ARFaceGeometry_GetBlendShapes_Params
{
	TMap<FAugmentedReality_AugmentedReality_EARFaceBlendShape, float> ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct UAugmentedReality_AREnvironmentCaptureProbe_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct UAugmentedReality_AREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
{
	class UAugmentedReality_AREnvironmentCaptureProbeTexture* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct UAugmentedReality_ARTrackedObject_GetDetectedObject_Params
{
	class UAugmentedReality_ARCandidateObject*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
struct UAugmentedReality_ARTrackedPose_GetTrackedPoseData_Params
{
	struct FAugmentedReality_ARPose3D                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct UAugmentedReality_ARCandidateImage_GetPhysicalWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct UAugmentedReality_ARCandidateImage_GetPhysicalHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetOrientation
struct UAugmentedReality_ARCandidateImage_GetOrientation_Params
{
	FAugmentedReality_AugmentedReality_EARCandidateImageOrientation ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetFriendlyName
struct UAugmentedReality_ARCandidateImage_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct UAugmentedReality_ARCandidateImage_GetCandidateTexture_Params
{
	class UEngine_Texture2D*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateObject.SetFriendlyName
struct UAugmentedReality_ARCandidateObject_SetFriendlyName_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct UAugmentedReality_ARCandidateObject_SetCandidateObjectData_Params
{
	TArray<unsigned char>                              InCandidateObject;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct UAugmentedReality_ARCandidateObject_SetBoundingBox_Params
{
	struct FBox                                        InBoundingBox;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct UAugmentedReality_ARCandidateObject_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct UAugmentedReality_ARCandidateObject_GetCandidateObjectData_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct UAugmentedReality_ARCandidateObject_GetBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct UAugmentedReality_ARBlueprintLibrary_UnpinComponent_Params
{
	class UEngine_SceneComponent*                      ComponentToUnpin;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.StopARSession
struct UAugmentedReality_ARBlueprintLibrary_StopARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct UAugmentedReality_ARBlueprintLibrary_StartARSession_Params
{
	class UAugmentedReality_ARSessionConfig*           SessionConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct UAugmentedReality_ARBlueprintLibrary_SetAlignmentTransform_Params
{
	struct FTransform                                  InAlignmentTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct UAugmentedReality_ARBlueprintLibrary_RemovePin_Params
{
	class UAugmentedReality_ARPin*                     PinToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct UAugmentedReality_ARBlueprintLibrary_PinComponentToTraceResult_Params
{
	class UEngine_SceneComponent*                      ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAugmentedReality_ARTraceResult             TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       DebugName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAugmentedReality_ARPin*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct UAugmentedReality_ARBlueprintLibrary_PinComponent_Params
{
	class UEngine_SceneComponent*                      ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  PinToWorldTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAugmentedReality_ARTrackedGeometry*         TrackedGeometry;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DebugName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAugmentedReality_ARPin*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
struct UAugmentedReality_ARBlueprintLibrary_PauseARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
struct UAugmentedReality_ARBlueprintLibrary_LineTraceTrackedObjects3D_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestFeaturePoints;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestGroundPlane;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestPlaneExtents;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestPlaneBoundaryPolygon;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAugmentedReality_ARTraceResult>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct UAugmentedReality_ARBlueprintLibrary_LineTraceTrackedObjects_Params
{
	struct FVector2D                                   ScreenCoord;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestFeaturePoints;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestGroundPlane;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestPlaneExtents;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestPlaneBoundaryPolygon;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAugmentedReality_ARTraceResult>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct UAugmentedReality_ARBlueprintLibrary_IsSessionTypeSupported_Params
{
	FAugmentedReality_AugmentedReality_EARSessionType  SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
struct UAugmentedReality_ARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params
{
	FAugmentedReality_AugmentedReality_EARSessionType  SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FAugmentedReality_AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
struct UAugmentedReality_ARBlueprintLibrary_IsARSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
struct UAugmentedReality_ARBlueprintLibrary_GetWorldMappingStatus_Params
{
	FAugmentedReality_AugmentedReality_EARWorldMappingState ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
struct UAugmentedReality_ARBlueprintLibrary_GetTrackingQualityReason_Params
{
	FAugmentedReality_AugmentedReality_EARTrackingQualityReason ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct UAugmentedReality_ARBlueprintLibrary_GetTrackingQuality_Params
{
	FAugmentedReality_AugmentedReality_EARTrackingQuality ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
struct UAugmentedReality_ARBlueprintLibrary_GetSupportedVideoFormats_Params
{
	FAugmentedReality_AugmentedReality_EARSessionType  SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAugmentedReality_ARVideoFormat>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct UAugmentedReality_ARBlueprintLibrary_GetSessionConfig_Params
{
	class UAugmentedReality_ARSessionConfig*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
struct UAugmentedReality_ARBlueprintLibrary_GetPointCloud_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
struct UAugmentedReality_ARBlueprintLibrary_GetPersonSegmentationImage_Params
{
	class UAugmentedReality_ARTextureCameraImage*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
struct UAugmentedReality_ARBlueprintLibrary_GetPersonSegmentationDepthImage_Params
{
	class UAugmentedReality_ARTextureCameraImage*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct UAugmentedReality_ARBlueprintLibrary_GetCurrentLightEstimate_Params
{
	class UAugmentedReality_ARLightEstimate*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
struct UAugmentedReality_ARBlueprintLibrary_GetCameraImage_Params
{
	class UAugmentedReality_ARTextureCameraImage*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
struct UAugmentedReality_ARBlueprintLibrary_GetCameraDepth_Params
{
	class UAugmentedReality_ARTextureCameraDepth*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct UAugmentedReality_ARBlueprintLibrary_GetARSessionStatus_Params
{
	struct FAugmentedReality_ARSessionStatus           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
struct UAugmentedReality_ARBlueprintLibrary_GetAllTrackedPoses_Params
{
	TArray<class UAugmentedReality_ARTrackedPose*>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
struct UAugmentedReality_ARBlueprintLibrary_GetAllTrackedPoints_Params
{
	TArray<class UAugmentedReality_ARTrackedPoint*>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
struct UAugmentedReality_ARBlueprintLibrary_GetAllTrackedPlanes_Params
{
	TArray<class UAugmentedReality_ARPlaneGeometry*>   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
struct UAugmentedReality_ARBlueprintLibrary_GetAllTrackedImages_Params
{
	TArray<class UAugmentedReality_ARTrackedImage*>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
struct UAugmentedReality_ARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params
{
	TArray<class UAugmentedReality_AREnvironmentCaptureProbe*> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
struct UAugmentedReality_ARBlueprintLibrary_GetAllTracked2DPoses_Params
{
	TArray<struct FAugmentedReality_ARPose2D>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct UAugmentedReality_ARBlueprintLibrary_GetAllPins_Params
{
	TArray<class UAugmentedReality_ARPin*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct UAugmentedReality_ARBlueprintLibrary_GetAllGeometries_Params
{
	TArray<class UAugmentedReality_ARTrackedGeometry*> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct UAugmentedReality_ARBlueprintLibrary_DebugDrawTrackedGeometry_Params
{
	class UAugmentedReality_ARTrackedGeometry*         TrackedGeometry;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutlineThickness;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct UAugmentedReality_ARBlueprintLibrary_DebugDrawPin_Params
{
	class UAugmentedReality_ARPin*                     ARPin;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
struct UAugmentedReality_ARBlueprintLibrary_AddRuntimeCandidateImage_Params
{
	class UAugmentedReality_ARSessionConfig*           SessionConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           CandidateTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FriendlyName;                                             // (Parm, ZeroConstructor)
	float                                              PhysicalWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAugmentedReality_ARCandidateImage*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
struct UAugmentedReality_ARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
