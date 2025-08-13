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

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
struct UMeshDescription_MeshDescriptionBase_SetVertexPosition_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
struct UMeshDescription_MeshDescriptionBase_SetPolygonVertexInstance_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	int                                                PerimeterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
struct UMeshDescription_MeshDescriptionBase_SetPolygonPolygonGroup_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
struct UMeshDescription_MeshDescriptionBase_ReversePolygonFacing_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
struct UMeshDescription_MeshDescriptionBase_ReserveNewVertices_Params
{
	int                                                NumberOfNewVertices;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
struct UMeshDescription_MeshDescriptionBase_ReserveNewVertexInstances_Params
{
	int                                                NumberOfNewVertexInstances;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
struct UMeshDescription_MeshDescriptionBase_ReserveNewTriangles_Params
{
	int                                                NumberOfNewTriangles;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
struct UMeshDescription_MeshDescriptionBase_ReserveNewPolygons_Params
{
	int                                                NumberOfNewPolygons;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
struct UMeshDescription_MeshDescriptionBase_ReserveNewPolygonGroups_Params
{
	int                                                NumberOfNewPolygonGroups;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
struct UMeshDescription_MeshDescriptionBase_ReserveNewEdges_Params
{
	int                                                NumberOfNewEdges;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexValid
struct UMeshDescription_MeshDescriptionBase_IsVertexValid_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
struct UMeshDescription_MeshDescriptionBase_IsVertexOrphaned_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
struct UMeshDescription_MeshDescriptionBase_IsVertexInstanceValid_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
struct UMeshDescription_MeshDescriptionBase_IsTriangleValid_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
struct UMeshDescription_MeshDescriptionBase_IsTrianglePartOfNgon_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
struct UMeshDescription_MeshDescriptionBase_IsPolygonValid_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
struct UMeshDescription_MeshDescriptionBase_IsPolygonGroupValid_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEmpty
struct UMeshDescription_MeshDescriptionBase_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
struct UMeshDescription_MeshDescriptionBase_IsEdgeValid_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
struct UMeshDescription_MeshDescriptionBase_IsEdgeInternalToPolygon_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
struct UMeshDescription_MeshDescriptionBase_IsEdgeInternal_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
struct UMeshDescription_MeshDescriptionBase_GetVertexVertexInstances_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   OutVertexInstanceIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
struct UMeshDescription_MeshDescriptionBase_GetVertexPosition_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
struct UMeshDescription_MeshDescriptionBase_GetVertexPairEdge_Params
{
	struct FMeshDescription_VertexID                   VertexID0;                                                // (Parm)
	struct FMeshDescription_VertexID                   VertexID1;                                                // (Parm)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
struct UMeshDescription_MeshDescriptionBase_GetVertexInstanceVertex_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
struct UMeshDescription_MeshDescriptionBase_GetVertexInstancePairEdge_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID0;                                        // (Parm)
	struct FMeshDescription_VertexInstanceID           VertexInstanceID1;                                        // (Parm)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
struct UMeshDescription_MeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	struct FMeshDescription_VertexInstanceID           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
struct UMeshDescription_MeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	struct FMeshDescription_VertexInstanceID           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
struct UMeshDescription_MeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	TArray<struct FMeshDescription_TriangleID>         OutConnectedTriangleIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
struct UMeshDescription_MeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	TArray<struct FMeshDescription_PolygonID>          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
struct UMeshDescription_MeshDescriptionBase_GetVertexConnectedTriangles_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	TArray<struct FMeshDescription_TriangleID>         OutConnectedTriangleIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
struct UMeshDescription_MeshDescriptionBase_GetVertexConnectedPolygons_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	TArray<struct FMeshDescription_PolygonID>          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
struct UMeshDescription_MeshDescriptionBase_GetVertexConnectedEdges_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	TArray<struct FMeshDescription_EdgeID>             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
struct UMeshDescription_MeshDescriptionBase_GetVertexAdjacentVertices_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	TArray<struct FMeshDescription_VertexID>           OutAdjacentVertexIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
struct UMeshDescription_MeshDescriptionBase_GetTriangleVertices_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	TArray<struct FMeshDescription_VertexID>           OutVertexIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
struct UMeshDescription_MeshDescriptionBase_GetTriangleVertexInstances_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   OutVertexInstanceIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
struct UMeshDescription_MeshDescriptionBase_GetTriangleVertexInstance_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexInstanceID           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
struct UMeshDescription_MeshDescriptionBase_GetTrianglePolygonGroup_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
struct UMeshDescription_MeshDescriptionBase_GetTrianglePolygon_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
struct UMeshDescription_MeshDescriptionBase_GetTriangleEdges_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	TArray<struct FMeshDescription_EdgeID>             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
struct UMeshDescription_MeshDescriptionBase_GetTriangleAdjacentTriangles_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	TArray<struct FMeshDescription_TriangleID>         OutTriangleIDs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
struct UMeshDescription_MeshDescriptionBase_GetPolygonVertices_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_VertexID>           OutVertexIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
struct UMeshDescription_MeshDescriptionBase_GetPolygonVertexInstances_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   OutVertexInstanceIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
struct UMeshDescription_MeshDescriptionBase_GetPolygonTriangles_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_TriangleID>         OutTriangleIDs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
struct UMeshDescription_MeshDescriptionBase_GetPolygonPolygonGroup_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
struct UMeshDescription_MeshDescriptionBase_GetPolygonPerimeterEdges_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_EdgeID>             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
struct UMeshDescription_MeshDescriptionBase_GetPolygonInternalEdges_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_EdgeID>             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
struct UMeshDescription_MeshDescriptionBase_GetPolygonGroupPolygons_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	TArray<struct FMeshDescription_PolygonID>          OutPolygonIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
struct UMeshDescription_MeshDescriptionBase_GetPolygonAdjacentPolygons_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_PolygonID>          OutPolygonIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
struct UMeshDescription_MeshDescriptionBase_GetNumVertexVertexInstances_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
struct UMeshDescription_MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
struct UMeshDescription_MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
struct UMeshDescription_MeshDescriptionBase_GetNumVertexConnectedTriangles_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
struct UMeshDescription_MeshDescriptionBase_GetNumVertexConnectedPolygons_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
struct UMeshDescription_MeshDescriptionBase_GetNumVertexConnectedEdges_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
struct UMeshDescription_MeshDescriptionBase_GetNumPolygonVertices_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
struct UMeshDescription_MeshDescriptionBase_GetNumPolygonTriangles_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
struct UMeshDescription_MeshDescriptionBase_GetNumPolygonInternalEdges_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
struct UMeshDescription_MeshDescriptionBase_GetNumPolygonGroupPolygons_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
struct UMeshDescription_MeshDescriptionBase_GetNumEdgeConnectedTriangles_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
struct UMeshDescription_MeshDescriptionBase_GetNumEdgeConnectedPolygons_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
struct UMeshDescription_MeshDescriptionBase_GetEdgeVertices_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<struct FMeshDescription_VertexID>           OutVertexIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
struct UMeshDescription_MeshDescriptionBase_GetEdgeVertex_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	int                                                VertexNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
struct UMeshDescription_MeshDescriptionBase_GetEdgeConnectedTriangles_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	TArray<struct FMeshDescription_TriangleID>         OutConnectedTriangleIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
struct UMeshDescription_MeshDescriptionBase_GetEdgeConnectedPolygons_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	TArray<struct FMeshDescription_PolygonID>          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.Empty
struct UMeshDescription_MeshDescriptionBase_Empty_Params
{
};

// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
struct UMeshDescription_MeshDescriptionBase_DeleteVertexInstance_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	TArray<struct FMeshDescription_VertexID>           OrphanedVertices;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.DeleteVertex
struct UMeshDescription_MeshDescriptionBase_DeleteVertex_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
struct UMeshDescription_MeshDescriptionBase_DeleteTriangle_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	TArray<struct FMeshDescription_EdgeID>             OrphanedEdges;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_VertexInstanceID>   OrphanedVertexInstances;                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_PolygonGroupID>     OrphanedPolygonGroupsPtr;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
struct UMeshDescription_MeshDescriptionBase_DeletePolygonGroup_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.DeletePolygon
struct UMeshDescription_MeshDescriptionBase_DeletePolygon_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	TArray<struct FMeshDescription_EdgeID>             OrphanedEdges;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_VertexInstanceID>   OrphanedVertexInstances;                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_PolygonGroupID>     OrphanedPolygonGroups;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.DeleteEdge
struct UMeshDescription_MeshDescriptionBase_DeleteEdge_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	TArray<struct FMeshDescription_VertexID>           OrphanedVertices;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
struct UMeshDescription_MeshDescriptionBase_CreateVertexWithID_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
struct UMeshDescription_MeshDescriptionBase_CreateVertexInstanceWithID_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (Parm)
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
struct UMeshDescription_MeshDescriptionBase_CreateVertexInstance_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (Parm)
	struct FMeshDescription_VertexInstanceID           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertex
struct UMeshDescription_MeshDescriptionBase_CreateVertex_Params
{
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
struct UMeshDescription_MeshDescriptionBase_CreateTriangleWithID_Params
{
	struct FMeshDescription_TriangleID                 TriangleID;                                               // (Parm)
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   VertexInstanceIDs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_EdgeID>             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.CreateTriangle
struct UMeshDescription_MeshDescriptionBase_CreateTriangle_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   VertexInstanceIDs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_EdgeID>             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
	struct FMeshDescription_TriangleID                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
struct UMeshDescription_MeshDescriptionBase_CreatePolygonWithID_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   VertexInstanceIDs;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_EdgeID>             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
struct UMeshDescription_MeshDescriptionBase_CreatePolygonGroupWithID_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
struct UMeshDescription_MeshDescriptionBase_CreatePolygonGroup_Params
{
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygon
struct UMeshDescription_MeshDescriptionBase_CreatePolygon_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   VertexInstanceIDs;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_EdgeID>             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
struct UMeshDescription_MeshDescriptionBase_CreateEdgeWithID_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (Parm)
	struct FMeshDescription_VertexID                   VertexID0;                                                // (Parm)
	struct FMeshDescription_VertexID                   VertexID1;                                                // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreateEdge
struct UMeshDescription_MeshDescriptionBase_CreateEdge_Params
{
	struct FMeshDescription_VertexID                   VertexID0;                                                // (Parm)
	struct FMeshDescription_VertexID                   VertexID1;                                                // (Parm)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
struct UMeshDescription_MeshDescriptionBase_ComputePolygonTriangulation_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
