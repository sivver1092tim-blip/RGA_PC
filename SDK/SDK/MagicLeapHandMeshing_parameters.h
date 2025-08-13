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

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
struct UMagicLeapHandMeshing_MagicLeapHandMeshingComponent_DisconnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
struct UMagicLeapHandMeshing_MagicLeapHandMeshingComponent_ConnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
struct UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
struct UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_DestroyClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
struct UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_CreateClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
struct UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params
{
	class UMRMesh_MRMeshComponent*                     InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
