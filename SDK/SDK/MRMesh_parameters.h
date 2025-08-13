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

// Function MRMesh.MeshReconstructorBase.StopReconstruction
struct UMRMesh_MeshReconstructorBase_StopReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.StartReconstruction
struct UMRMesh_MeshReconstructorBase_StartReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.PauseReconstruction
struct UMRMesh_MeshReconstructorBase_PauseReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMRMesh_MeshReconstructorBase_IsReconstructionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMRMesh_MeshReconstructorBase_IsReconstructionPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
struct UMRMesh_MeshReconstructorBase_DisconnectMRMesh_Params
{
};

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMRMesh_MeshReconstructorBase_ConnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
struct UMRMesh_MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Confidence;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
struct UMRMesh_MockDataMeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
struct UMRMesh_MockDataMeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.IsConnected
struct UMRMesh_MRMeshComponent_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
struct UMRMesh_MRMeshComponent_ForceNavMeshUpdate_Params
{
};

// Function MRMesh.MRMeshComponent.Clear
struct UMRMesh_MRMeshComponent_Clear_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
