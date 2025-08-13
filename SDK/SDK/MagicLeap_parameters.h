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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
struct UMagicLeap_InAppPurchaseComponent_TryPurchaseItemAsync_Params
{
	struct FMagicLeap_PurchaseItemDetails              ItemDetails;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
struct UMagicLeap_InAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params
{
	int                                                InNumPages;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
struct UMagicLeap_InAppPurchaseComponent_TryGetItemsDetailsAsync_Params
{
	TArray<struct FString>                             ItemIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params
{
	struct FMagicLeap_PurchaseConfirmation             PurchaseConfirmations;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params
{
	struct FString                                     LogMessage;                                               // (Parm, ZeroConstructor)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params
{
	TArray<struct FMagicLeap_PurchaseConfirmation>     PurchaseHistory;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params
{
	TArray<struct FMagicLeap_PurchaseItemDetails>      ItemsDetails;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
struct UMagicLeap_InAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params
{
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
struct UMagicLeap_MagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params
{
	class AEngine_Actor*                               InStabilizationDepthActor;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetFocusActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
struct UMagicLeap_MagicLeapHMDFunctionLibrary_SetFocusActor_Params
{
	class AEngine_Actor*                               InFocusActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetStabilizationActor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
struct UMagicLeap_MagicLeapHMDFunctionLibrary_SetBaseRotation_Params
{
	struct FRotator                                    InBaseRotation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
struct UMagicLeap_MagicLeapHMDFunctionLibrary_SetBasePosition_Params
{
	struct FVector                                     InBasePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
struct UMagicLeap_MagicLeapHMDFunctionLibrary_SetBaseOrientation_Params
{
	struct FQuat                                       InBaseOrientation;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
struct UMagicLeap_MagicLeapHMDFunctionLibrary_SetAppReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
struct UMagicLeap_MagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
struct UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
struct UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
struct UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
struct UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
struct UMagicLeap_MagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params
{
	struct FMagicLeap_MagicLeapHeadTrackingState       State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
struct UMagicLeap_MagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
struct UMagicLeap_MagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params
{
	struct FMagicLeap_MagicLeapTrackingMeshInfo        NewMeshInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FMagicLeap_MagicLeapMeshBlockRequest> RequestedMesh;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks
struct UMagicLeap_MeshTrackerComponent_SelectMeshBlocks_Params
{
	struct FMagicLeap_MagicLeapTrackingMeshInfo        NewMeshInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FMagicLeap_MagicLeapMeshBlockRequest> RequestedMesh;                                            // (Parm, OutParm, ZeroConstructor)
};

// DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
struct UMagicLeap_MeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Confidence;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates
struct UMagicLeap_MeshTrackerComponent_GetNumQueuedBlockUpdates_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh
struct UMagicLeap_MeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector
struct UMagicLeap_MeshTrackerComponent_DisconnectBlockSelector_Params
{
};

// Function MagicLeap.MeshTrackerComponent.ConnectMRMesh
struct UMagicLeap_MeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector
struct UMagicLeap_MeshTrackerComponent_ConnectBlockSelector_Params
{
	TScriptInterface<class UMagicLeap_MagicLeapMeshBlockSelectorInterface> Selector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
struct UMagicLeap_MagicLeapRaycastComponent_RequestRaycast_Params
{
	struct FMagicLeap_MagicLeapRaycastQueryParams      RequestParams;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
struct UMagicLeap_MagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params
{
	struct FMagicLeap_MagicLeapRaycastHitResult        HitResult;                                                // (Parm)
};

// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
struct UMagicLeap_MagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params
{
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalFovDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CollideWithUnobserved;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMagicLeap_MagicLeapRaycastQueryParams      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
