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

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_StaticMeshDescription_SetVertexInstanceUV_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	struct FVector2D                                   UV;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UVIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_StaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_StaticMeshDescription_GetVertexInstanceUV_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	int                                                UVIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_StaticMeshDescription_CreateCube_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfExtents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonGroupID             PolygonGroup;                                             // (Parm)
	struct FMeshDescription_PolygonID                  PolygonID_PlusX;                                          // (Parm, OutParm)
	struct FMeshDescription_PolygonID                  PolygonID_MinusX;                                         // (Parm, OutParm)
	struct FMeshDescription_PolygonID                  PolygonID_PlusY;                                          // (Parm, OutParm)
	struct FMeshDescription_PolygonID                  PolygonID_MinusY;                                         // (Parm, OutParm)
	struct FMeshDescription_PolygonID                  PolygonID_PlusZ;                                          // (Parm, OutParm)
	struct FMeshDescription_PolygonID                  PolygonID_MinusZ;                                         // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
