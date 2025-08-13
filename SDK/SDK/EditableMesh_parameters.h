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

// Function EditableMesh.EditableMesh.WeldVertices
struct UEditableMesh_EditableMesh_WeldVertices_Params
{
	TArray<struct FMeshDescription_VertexID>           VertexIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FMeshDescription_VertexID                   OutNewVertexID;                                           // (Parm, OutParm)
};

// Function EditableMesh.EditableMesh.TryToRemoveVertex
struct UEditableMesh_EditableMesh_TryToRemoveVertex_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	bool                                               bOutWasVertexRemoved;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_EdgeID                     OutNewEdgeID;                                             // (Parm, OutParm)
};

// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
struct UEditableMesh_EditableMesh_TryToRemovePolygonEdge_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	bool                                               bOutWasEdgeRemoved;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonID                  OutNewPolygonID;                                          // (Parm, OutParm)
};

// Function EditableMesh.EditableMesh.TriangulatePolygons
struct UEditableMesh_EditableMesh_TriangulatePolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_PolygonID>          OutNewTrianglePolygons;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.TessellatePolygons
struct UEditableMesh_EditableMesh_TessellatePolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FEditableMesh_EditableMesh_ETriangleTessellationMode TriangleTessellationMode;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          OutNewPolygonIDs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.StartModification
struct UEditableMesh_EditableMesh_StartModification_Params
{
	FEditableMesh_EditableMesh_EMeshModificationType   MeshModificationType;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FEditableMesh_EditableMesh_EMeshTopologyChange     MeshTopologyChange;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SplitPolygons
struct UEditableMesh_EditableMesh_SplitPolygons_Params
{
	TArray<struct FEditableMesh_PolygonToSplit>        PolygonsToSplit;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_EdgeID>             OutNewEdgeIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.SplitPolygonalMesh
struct UEditableMesh_EditableMesh_SplitPolygonalMesh_Params
{
	struct FPlane                                      InPlane;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs1;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs2;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_EdgeID>             BoundaryIDs;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.SplitEdge
struct UEditableMesh_EditableMesh_SplitEdge_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<float>                                      Splits;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_VertexID>           OutNewVertexIDs;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
struct UEditableMesh_EditableMesh_SetVerticesCornerSharpness_Params
{
	TArray<struct FMeshDescription_VertexID>           VertexIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      VerticesNewCornerSharpness;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetVerticesAttributes
struct UEditableMesh_EditableMesh_SetVerticesAttributes_Params
{
	TArray<struct FEditableMesh_AttributesForVertex>   AttributesForVertices;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
struct UEditableMesh_EditableMesh_SetVertexInstancesAttributes_Params
{
	TArray<struct FEditableMesh_AttributesForVertexInstance> AttributesForVertexInstances;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
struct UEditableMesh_EditableMesh_SetTextureCoordinateCount_Params
{
	int                                                NumTexCoords;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SetSubdivisionCount
struct UEditableMesh_EditableMesh_SetSubdivisionCount_Params
{
	int                                                NewSubdivisionCount;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
struct UEditableMesh_EditableMesh_SetPolygonsVertexAttributes_Params
{
	TArray<struct FEditableMesh_VertexAttributesForPolygon> VertexAttributesForPolygons;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
struct UEditableMesh_EditableMesh_SetEdgesHardnessAutomatically_Params
{
	TArray<struct FMeshDescription_EdgeID>             EdgeIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              MaxDotProductForSoftEdge;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SetEdgesHardness
struct UEditableMesh_EditableMesh_SetEdgesHardness_Params
{
	TArray<struct FMeshDescription_EdgeID>             EdgeIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       EdgesNewIsHard;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
struct UEditableMesh_EditableMesh_SetEdgesCreaseSharpness_Params
{
	TArray<struct FMeshDescription_EdgeID>             EdgeIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      EdgesNewCreaseSharpness;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetEdgesAttributes
struct UEditableMesh_EditableMesh_SetEdgesAttributes_Params
{
	TArray<struct FEditableMesh_AttributesForEdge>     AttributesForEdges;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.SetAllowUndo
struct UEditableMesh_EditableMesh_SetAllowUndo_Params
{
	bool                                               bInAllowUndo;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
struct UEditableMesh_EditableMesh_SetAllowSpatialDatabase_Params
{
	bool                                               bInAllowSpatialDatabase;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SetAllowCompact
struct UEditableMesh_EditableMesh_SetAllowCompact_Params
{
	bool                                               bInAllowCompact;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
struct UEditableMesh_EditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params
{
	struct FPlane                                      InPlane;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          OutPolygons;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
struct UEditableMesh_EditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params
{
	struct FVector                                     LineSegmentStart;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineSegmentEnd;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          OutPolygons;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
struct UEditableMesh_EditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params
{
	TArray<struct FPlane>                              Planes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_PolygonID>          OutPolygons;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.RevertInstance
struct UEditableMesh_EditableMesh_RevertInstance_Params
{
	class UEditableMesh_EditableMesh*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.Revert
struct UEditableMesh_EditableMesh_Revert_Params
{
};

// Function EditableMesh.EditableMesh.RebuildRenderMesh
struct UEditableMesh_EditableMesh_RebuildRenderMesh_Params
{
};

// Function EditableMesh.EditableMesh.QuadrangulateMesh
struct UEditableMesh_EditableMesh_QuadrangulateMesh_Params
{
	TArray<struct FMeshDescription_PolygonID>          OutNewPolygonIDs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.PropagateInstanceChanges
struct UEditableMesh_EditableMesh_PropagateInstanceChanges_Params
{
};

// Function EditableMesh.EditableMesh.MoveVertices
struct UEditableMesh_EditableMesh_MoveVertices_Params
{
	TArray<struct FEditableMesh_VertexToMove>          VerticesToMove;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.MakeVertexID
struct UEditableMesh_EditableMesh_MakeVertexID_Params
{
	int                                                VertexIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.MakePolygonID
struct UEditableMesh_EditableMesh_MakePolygonID_Params
{
	int                                                PolygonIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.MakePolygonGroupID
struct UEditableMesh_EditableMesh_MakePolygonGroupID_Params
{
	int                                                PolygonGroupIndex;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.MakeEdgeID
struct UEditableMesh_EditableMesh_MakeEdgeID_Params
{
	int                                                EdgeIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.IsValidVertex
struct UEditableMesh_EditableMesh_IsValidVertex_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsValidPolygonGroup
struct UEditableMesh_EditableMesh_IsValidPolygonGroup_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsValidPolygon
struct UEditableMesh_EditableMesh_IsValidPolygon_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsValidEdge
struct UEditableMesh_EditableMesh_IsValidEdge_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsUndoAllowed
struct UEditableMesh_EditableMesh_IsUndoAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
struct UEditableMesh_EditableMesh_IsSpatialDatabaseAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
struct UEditableMesh_EditableMesh_IsPreviewingSubdivisions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsOrphanedVertex
struct UEditableMesh_EditableMesh_IsOrphanedVertex_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsCompactAllowed
struct UEditableMesh_EditableMesh_IsCompactAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsCommittedAsInstance
struct UEditableMesh_EditableMesh_IsCommittedAsInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsCommitted
struct UEditableMesh_EditableMesh_IsCommitted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.IsBeingModified
struct UEditableMesh_EditableMesh_IsBeingModified_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.InvalidVertexID
struct UEditableMesh_EditableMesh_InvalidVertexID_Params
{
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.InvalidPolygonID
struct UEditableMesh_EditableMesh_InvalidPolygonID_Params
{
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
struct UEditableMesh_EditableMesh_InvalidPolygonGroupID_Params
{
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.InvalidEdgeID
struct UEditableMesh_EditableMesh_InvalidEdgeID_Params
{
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.InsetPolygons
struct UEditableMesh_EditableMesh_InsetPolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InsetFixedDistance;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InsetProgressTowardCenter;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FEditableMesh_EditableMesh_EInsetPolygonsMode      Mode;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          OutNewCenterPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_PolygonID>          OutNewSidePolygonIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.InsertEdgeLoop
struct UEditableMesh_EditableMesh_InsertEdgeLoop_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<float>                                      Splits;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_EdgeID>             OutNewEdgeIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.InitializeAdapters
struct UEditableMesh_EditableMesh_InitializeAdapters_Params
{
};

// Function EditableMesh.EditableMesh.GetVertexPairEdge
struct UEditableMesh_EditableMesh_GetVertexPairEdge_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   NextVertexID;                                             // (ConstParm, Parm)
	bool                                               bOutEdgeWindingIsReversed;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
struct UEditableMesh_EditableMesh_GetVertexInstanceVertex_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceCount
struct UEditableMesh_EditableMesh_GetVertexInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
struct UEditableMesh_EditableMesh_GetVertexInstanceConnectedPolygons_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (ConstParm, Parm)
	TArray<struct FMeshDescription_PolygonID>          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
struct UEditableMesh_EditableMesh_GetVertexInstanceConnectedPolygonCount_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
struct UEditableMesh_EditableMesh_GetVertexInstanceConnectedPolygon_Params
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // (ConstParm, Parm)
	int                                                ConnectedPolygonNumber;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetVertexCount
struct UEditableMesh_EditableMesh_GetVertexCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
struct UEditableMesh_EditableMesh_GetVertexConnectedPolygons_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	TArray<struct FMeshDescription_PolygonID>          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
struct UEditableMesh_EditableMesh_GetVertexConnectedEdges_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	TArray<struct FMeshDescription_EdgeID>             OutConnectedEdgeIDs;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
struct UEditableMesh_EditableMesh_GetVertexConnectedEdgeCount_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
struct UEditableMesh_EditableMesh_GetVertexConnectedEdge_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	int                                                ConnectedEdgeNumber;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
struct UEditableMesh_EditableMesh_GetVertexAdjacentVertices_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	TArray<struct FMeshDescription_VertexID>           OutAdjacentVertexIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
struct UEditableMesh_EditableMesh_GetTextureCoordinateCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
struct UEditableMesh_EditableMesh_GetSubdivisionLimitData_Params
{
	struct FEditableMesh_SubdivisionLimitData          ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EditableMesh.EditableMesh.GetSubdivisionCount
struct UEditableMesh_EditableMesh_GetSubdivisionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
struct UEditableMesh_EditableMesh_GetPolygonTriangulatedTriangleCount_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
struct UEditableMesh_EditableMesh_GetPolygonTriangulatedTriangle_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                PolygonTriangleNumber;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_TriangleID                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
struct UEditableMesh_EditableMesh_GetPolygonPerimeterVertices_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	TArray<struct FMeshDescription_VertexID>           OutPolygonPerimeterVertexIDs;                             // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
struct UEditableMesh_EditableMesh_GetPolygonPerimeterVertexInstances_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	TArray<struct FMeshDescription_VertexInstanceID>   OutPolygonPerimeterVertexInstanceIDs;                     // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
struct UEditableMesh_EditableMesh_GetPolygonPerimeterVertexInstance_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                PolygonVertexNumber;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexInstanceID           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
struct UEditableMesh_EditableMesh_GetPolygonPerimeterVertexCount_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
struct UEditableMesh_EditableMesh_GetPolygonPerimeterVertex_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                PolygonVertexNumber;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
struct UEditableMesh_EditableMesh_GetPolygonPerimeterEdges_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	TArray<struct FMeshDescription_EdgeID>             OutPolygonPerimeterEdgeIDs;                               // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
struct UEditableMesh_EditableMesh_GetPolygonPerimeterEdgeCount_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
struct UEditableMesh_EditableMesh_GetPolygonPerimeterEdge_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	int                                                PerimeterEdgeNumber;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutEdgeWindingIsReversedForPolygon;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetPolygonInGroup
struct UEditableMesh_EditableMesh_GetPolygonInGroup_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (ConstParm, Parm)
	int                                                PolygonNumber;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetPolygonGroupCount
struct UEditableMesh_EditableMesh_GetPolygonGroupCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
struct UEditableMesh_EditableMesh_GetPolygonCountInGroup_Params
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonCount
struct UEditableMesh_EditableMesh_GetPolygonCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
struct UEditableMesh_EditableMesh_GetPolygonAdjacentPolygons_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	TArray<struct FMeshDescription_PolygonID>          OutAdjacentPolygons;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetGroupForPolygon
struct UEditableMesh_EditableMesh_GetGroupForPolygon_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
struct UEditableMesh_EditableMesh_GetFirstValidPolygonGroup_Params
{
	struct FMeshDescription_PolygonGroupID             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetEdgeVertices
struct UEditableMesh_EditableMesh_GetEdgeVertices_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   OutEdgeVertexID0;                                         // (Parm, OutParm)
	struct FMeshDescription_VertexID                   OutEdgeVertexID1;                                         // (Parm, OutParm)
};

// Function EditableMesh.EditableMesh.GetEdgeVertex
struct UEditableMesh_EditableMesh_GetEdgeVertex_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	int                                                EdgeVertexNumber;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexID                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
struct UEditableMesh_EditableMesh_GetEdgeThatConnectsVertices_Params
{
	struct FMeshDescription_VertexID                   VertexID0;                                                // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   VertexID1;                                                // (ConstParm, Parm)
	struct FMeshDescription_EdgeID                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GetEdgeLoopElements
struct UEditableMesh_EditableMesh_GetEdgeLoopElements_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<struct FMeshDescription_EdgeID>             EdgeLoopIDs;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetEdgeCount
struct UEditableMesh_EditableMesh_GetEdgeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
struct UEditableMesh_EditableMesh_GetEdgeConnectedPolygons_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<struct FMeshDescription_PolygonID>          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
struct UEditableMesh_EditableMesh_GetEdgeConnectedPolygonCount_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
struct UEditableMesh_EditableMesh_GetEdgeConnectedPolygon_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	int                                                ConnectedPolygonNumber;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_PolygonID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
struct UEditableMesh_EditableMesh_GeneratePolygonTangentsAndNormals_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.FlipPolygons
struct UEditableMesh_EditableMesh_FlipPolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
struct UEditableMesh_EditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
struct UEditableMesh_EditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   EdgeVertexID0;                                            // (ConstParm, Parm)
	struct FMeshDescription_VertexID                   EdgeVertexID1;                                            // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.FindPolygonLoop
struct UEditableMesh_EditableMesh_FindPolygonLoop_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<struct FMeshDescription_EdgeID>             OutEdgeLoopEdgeIDs;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_EdgeID>             OutFlippedEdgeIDs;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_EdgeID>             OutReversedEdgeIDPathToTake;                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_PolygonID>          OutPolygonIDsToSplit;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.ExtrudePolygons
struct UEditableMesh_EditableMesh_ExtrudePolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          Polygons;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ExtrudeDistance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepNeighborsTogether;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          OutNewExtrudedFrontPolygons;                              // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.ExtendVertices
struct UEditableMesh_EditableMesh_ExtendVertices_Params
{
	TArray<struct FMeshDescription_VertexID>           VertexIDs;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bOnlyExtendClosestEdge;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReferencePosition;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_VertexID>           OutNewExtendedVertexIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.ExtendEdges
struct UEditableMesh_EditableMesh_ExtendEdges_Params
{
	TArray<struct FMeshDescription_EdgeID>             EdgeIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bWeldNeighbors;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_EdgeID>             OutNewExtendedEdgeIDs;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.EndModification
struct UEditableMesh_EditableMesh_EndModification_Params
{
	bool                                               bFromUndo;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.DeleteVertexInstances
struct UEditableMesh_EditableMesh_DeleteVertexInstances_Params
{
	TArray<struct FMeshDescription_VertexInstanceID>   VertexInstanceIDsToDelete;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDeleteOrphanedVertices;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
struct UEditableMesh_EditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // (ConstParm, Parm)
	bool                                               bDeleteOrphanedEdges;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteOrphanedVertices;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteOrphanedVertexInstances;                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteEmptyPolygonGroups;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.DeletePolygons
struct UEditableMesh_EditableMesh_DeletePolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDsToDelete;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDeleteOrphanedEdges;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteOrphanedVertices;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteOrphanedVertexInstances;                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteEmptyPolygonGroups;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.DeletePolygonGroups
struct UEditableMesh_EditableMesh_DeletePolygonGroups_Params
{
	TArray<struct FMeshDescription_PolygonGroupID>     PolygonGroupIDs;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.DeleteOrphanVertices
struct UEditableMesh_EditableMesh_DeleteOrphanVertices_Params
{
	TArray<struct FMeshDescription_VertexID>           VertexIDsToDelete;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.DeleteEdges
struct UEditableMesh_EditableMesh_DeleteEdges_Params
{
	TArray<struct FMeshDescription_EdgeID>             EdgeIDsToDelete;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDeleteOrphanedVertices;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
struct UEditableMesh_EditableMesh_DeleteEdgeAndConnectedPolygons_Params
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // (ConstParm, Parm)
	bool                                               bDeleteOrphanedEdges;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteOrphanedVertices;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteOrphanedVertexInstances;                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeleteEmptyPolygonGroups;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.CreateVertices
struct UEditableMesh_EditableMesh_CreateVertices_Params
{
	TArray<struct FEditableMesh_VertexToCreate>        VerticesToCreate;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_VertexID>           OutNewVertexIDs;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.CreateVertexInstances
struct UEditableMesh_EditableMesh_CreateVertexInstances_Params
{
	TArray<struct FEditableMesh_VertexInstanceToCreate> VertexInstancesToCreate;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_VertexInstanceID>   OutNewVertexInstanceIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.CreatePolygons
struct UEditableMesh_EditableMesh_CreatePolygons_Params
{
	TArray<struct FEditableMesh_PolygonToCreate>       PolygonsToCreate;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_PolygonID>          OutNewPolygonIDs;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_EdgeID>             OutNewEdgeIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.CreatePolygonGroups
struct UEditableMesh_EditableMesh_CreatePolygonGroups_Params
{
	TArray<struct FEditableMesh_PolygonGroupToCreate>  PolygonGroupsToCreate;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_PolygonGroupID>     OutNewPolygonGroupIDs;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
struct UEditableMesh_EditableMesh_CreateMissingPolygonPerimeterEdges_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	TArray<struct FMeshDescription_EdgeID>             OutNewEdgeIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
struct UEditableMesh_EditableMesh_CreateEmptyVertexRange_Params
{
	int                                                NumVerticesToCreate;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_VertexID>           OutNewVertexIDs;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.CreateEdges
struct UEditableMesh_EditableMesh_CreateEdges_Params
{
	TArray<struct FEditableMesh_EdgeToCreate>          EdgesToCreate;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_EdgeID>             OutNewEdgeIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
struct UEditableMesh_EditableMesh_ComputePolygonsSharedEdges_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMeshDescription_EdgeID>             OutSharedEdgeIDs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.ComputePolygonPlane
struct UEditableMesh_EditableMesh_ComputePolygonPlane_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	struct FPlane                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.ComputePolygonNormal
struct UEditableMesh_EditableMesh_ComputePolygonNormal_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.ComputePolygonCenter
struct UEditableMesh_EditableMesh_ComputePolygonCenter_Params
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
struct UEditableMesh_EditableMesh_ComputeBoundingBoxAndSphere_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.ComputeBoundingBox
struct UEditableMesh_EditableMesh_ComputeBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.CommitInstance
struct UEditableMesh_EditableMesh_CommitInstance_Params
{
	class UEngine_PrimitiveComponent*                  ComponentToInstanceTo;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEditableMesh_EditableMesh*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.Commit
struct UEditableMesh_EditableMesh_Commit_Params
{
};

// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
struct UEditableMesh_EditableMesh_ChangePolygonsVertexInstances_Params
{
	TArray<struct FEditableMesh_ChangeVertexInstancesForPolygon> VertexInstancesForPolygons;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EditableMesh.EditableMesh.BevelPolygons
struct UEditableMesh_EditableMesh_BevelPolygons_Params
{
	TArray<struct FMeshDescription_PolygonID>          PolygonIDs;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BevelFixedDistance;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BevelProgressTowardCenter;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeshDescription_PolygonID>          OutNewCenterPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMeshDescription_PolygonID>          OutNewSidePolygonIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
struct UEditableMesh_EditableMesh_AssignPolygonsToPolygonGroups_Params
{
	TArray<struct FEditableMesh_PolygonGroupForPolygon> PolygonGroupForPolygons;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDeleteOrphanedPolygonGroups;                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditableMesh.EditableMesh.AnyChangesToUndo
struct UEditableMesh_EditableMesh_AnyChangesToUndo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
struct UEditableMesh_EditableMeshFactory_MakeEditableMesh_Params
{
	class UEngine_PrimitiveComponent*                  PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                LODIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEditableMesh_EditableMesh*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
