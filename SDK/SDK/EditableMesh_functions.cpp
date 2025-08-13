
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EditableMesh.EditableMesh.WeldVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_VertexID> VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FMeshDescription_VertexID OutNewVertexID                 (Parm, OutParm)

void UEditableMesh_EditableMesh::WeldVertices(TArray<struct FMeshDescription_VertexID> VertexIDs, struct FMeshDescription_VertexID* OutNewVertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");

	UEditableMesh_EditableMesh_WeldVertices_Params params;
	params.VertexIDs = VertexIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexID != nullptr)
		*OutNewVertexID = params.OutNewVertexID;
}


// Function EditableMesh.EditableMesh.TryToRemoveVertex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// bool                           bOutWasVertexRemoved           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_EdgeID OutNewEdgeID                   (Parm, OutParm)

void UEditableMesh_EditableMesh::TryToRemoveVertex(const struct FMeshDescription_VertexID& VertexID, bool* bOutWasVertexRemoved, struct FMeshDescription_EdgeID* OutNewEdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");

	UEditableMesh_EditableMesh_TryToRemoveVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutWasVertexRemoved != nullptr)
		*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
	if (OutNewEdgeID != nullptr)
		*OutNewEdgeID = params.OutNewEdgeID;
}


// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// bool                           bOutWasEdgeRemoved             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonID OutNewPolygonID                (Parm, OutParm)

void UEditableMesh_EditableMesh::TryToRemovePolygonEdge(const struct FMeshDescription_EdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FMeshDescription_PolygonID* OutNewPolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");

	UEditableMesh_EditableMesh_TryToRemovePolygonEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutWasEdgeRemoved != nullptr)
		*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
	if (OutNewPolygonID != nullptr)
		*OutNewPolygonID = params.OutNewPolygonID;
}


// Function EditableMesh.EditableMesh.TriangulatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_PolygonID> OutNewTrianglePolygons         (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::TriangulatePolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, TArray<struct FMeshDescription_PolygonID>* OutNewTrianglePolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");

	UEditableMesh_EditableMesh_TriangulatePolygons_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewTrianglePolygons != nullptr)
		*OutNewTrianglePolygons = params.OutNewTrianglePolygons;
}


// Function EditableMesh.EditableMesh.TessellatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FEditableMesh_EditableMesh_ETriangleTessellationMode TriangleTessellationMode       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::TessellatePolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, FEditableMesh_EditableMesh_ETriangleTessellationMode TriangleTessellationMode, TArray<struct FMeshDescription_PolygonID>* OutNewPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");

	UEditableMesh_EditableMesh_TessellatePolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.TriangleTessellationMode = TriangleTessellationMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
}


// Function EditableMesh.EditableMesh.StartModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FEditableMesh_EditableMesh_EMeshModificationType MeshModificationType           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FEditableMesh_EditableMesh_EMeshTopologyChange MeshTopologyChange             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::StartModification(FEditableMesh_EditableMesh_EMeshModificationType MeshModificationType, FEditableMesh_EditableMesh_EMeshTopologyChange MeshTopologyChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");

	UEditableMesh_EditableMesh_StartModification_Params params;
	params.MeshModificationType = MeshModificationType;
	params.MeshTopologyChange = MeshTopologyChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SplitPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_PolygonToSplit> PolygonsToSplit                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_EdgeID> OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::SplitPolygons(TArray<struct FEditableMesh_PolygonToSplit> PolygonsToSplit, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");

	UEditableMesh_EditableMesh_SplitPolygons_Params params;
	params.PolygonsToSplit = PolygonsToSplit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.SplitPolygonalMesh
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPlane                  InPlane                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> PolygonIDs1                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_PolygonID> PolygonIDs2                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_EdgeID> BoundaryIDs                    (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FMeshDescription_PolygonID>* PolygonIDs1, TArray<struct FMeshDescription_PolygonID>* PolygonIDs2, TArray<struct FMeshDescription_EdgeID>* BoundaryIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");

	UEditableMesh_EditableMesh_SplitPolygonalMesh_Params params;
	params.InPlane = InPlane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PolygonIDs1 != nullptr)
		*PolygonIDs1 = params.PolygonIDs1;
	if (PolygonIDs2 != nullptr)
		*PolygonIDs2 = params.PolygonIDs2;
	if (BoundaryIDs != nullptr)
		*BoundaryIDs = params.BoundaryIDs;
}


// Function EditableMesh.EditableMesh.SplitEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// TArray<float>                  Splits                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_VertexID> OutNewVertexIDs                (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::SplitEdge(const struct FMeshDescription_EdgeID& EdgeID, TArray<float> Splits, TArray<struct FMeshDescription_VertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");

	UEditableMesh_EditableMesh_SplitEdge_Params params;
	params.EdgeID = EdgeID;
	params.Splits = Splits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_VertexID> VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  VerticesNewCornerSharpness     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetVerticesCornerSharpness(TArray<struct FMeshDescription_VertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");

	UEditableMesh_EditableMesh_SetVerticesCornerSharpness_Params params;
	params.VertexIDs = VertexIDs;
	params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetVerticesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_AttributesForVertex> AttributesForVertices          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetVerticesAttributes(TArray<struct FEditableMesh_AttributesForVertex> AttributesForVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");

	UEditableMesh_EditableMesh_SetVerticesAttributes_Params params;
	params.AttributesForVertices = AttributesForVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_AttributesForVertexInstance> AttributesForVertexInstances   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetVertexInstancesAttributes(TArray<struct FEditableMesh_AttributesForVertexInstance> AttributesForVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");

	UEditableMesh_EditableMesh_SetVertexInstancesAttributes_Params params;
	params.AttributesForVertexInstances = AttributesForVertexInstances;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumTexCoords                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::SetTextureCoordinateCount(int NumTexCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");

	UEditableMesh_EditableMesh_SetTextureCoordinateCount_Params params;
	params.NumTexCoords = NumTexCoords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetSubdivisionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewSubdivisionCount            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::SetSubdivisionCount(int NewSubdivisionCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");

	UEditableMesh_EditableMesh_SetSubdivisionCount_Params params;
	params.NewSubdivisionCount = NewSubdivisionCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_VertexAttributesForPolygon> VertexAttributesForPolygons    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetPolygonsVertexAttributes(TArray<struct FEditableMesh_VertexAttributesForPolygon> VertexAttributesForPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");

	UEditableMesh_EditableMesh_SetPolygonsVertexAttributes_Params params;
	params.VertexAttributesForPolygons = VertexAttributesForPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_EdgeID> EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          MaxDotProductForSoftEdge       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::SetEdgesHardnessAutomatically(TArray<struct FMeshDescription_EdgeID> EdgeIDs, float MaxDotProductForSoftEdge)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");

	UEditableMesh_EditableMesh_SetEdgesHardnessAutomatically_Params params;
	params.EdgeIDs = EdgeIDs;
	params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesHardness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_EdgeID> EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   EdgesNewIsHard                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetEdgesHardness(TArray<struct FMeshDescription_EdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");

	UEditableMesh_EditableMesh_SetEdgesHardness_Params params;
	params.EdgeIDs = EdgeIDs;
	params.EdgesNewIsHard = EdgesNewIsHard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_EdgeID> EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  EdgesNewCreaseSharpness        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetEdgesCreaseSharpness(TArray<struct FMeshDescription_EdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");

	UEditableMesh_EditableMesh_SetEdgesCreaseSharpness_Params params;
	params.EdgeIDs = EdgeIDs;
	params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_AttributesForEdge> AttributesForEdges             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::SetEdgesAttributes(TArray<struct FEditableMesh_AttributesForEdge> AttributesForEdges)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");

	UEditableMesh_EditableMesh_SetEdgesAttributes_Params params;
	params.AttributesForEdges = AttributesForEdges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetAllowUndo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowUndo                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::SetAllowUndo(bool bInAllowUndo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");

	UEditableMesh_EditableMesh_SetAllowUndo_Params params;
	params.bInAllowUndo = bInAllowUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowSpatialDatabase        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");

	UEditableMesh_EditableMesh_SetAllowSpatialDatabase_Params params;
	params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetAllowCompact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowCompact                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::SetAllowCompact(bool bInAllowCompact)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");

	UEditableMesh_EditableMesh_SetAllowCompact_Params params;
	params.bInAllowCompact = bInAllowCompact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlane                  InPlane                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> OutPolygons                    (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FMeshDescription_PolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");

	UEditableMesh_EditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params params;
	params.InPlane = InPlane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 LineSegmentStart               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineSegmentEnd                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> OutPolygons                    (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FMeshDescription_PolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	UEditableMesh_EditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params params;
	params.LineSegmentStart = LineSegmentStart;
	params.LineSegmentEnd = LineSegmentEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlane>          Planes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_PolygonID> OutPolygons                    (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FMeshDescription_PolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");

	UEditableMesh_EditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params params;
	params.Planes = Planes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.RevertInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEditableMesh_EditableMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEditableMesh_EditableMesh* UEditableMesh_EditableMesh::RevertInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");

	UEditableMesh_EditableMesh_RevertInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Revert
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh_EditableMesh::Revert()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");

	UEditableMesh_EditableMesh_Revert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.RebuildRenderMesh
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh_EditableMesh::RebuildRenderMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");

	UEditableMesh_EditableMesh_RebuildRenderMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.QuadrangulateMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::QuadrangulateMesh(TArray<struct FMeshDescription_PolygonID>* OutNewPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");

	UEditableMesh_EditableMesh_QuadrangulateMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
}


// Function EditableMesh.EditableMesh.PropagateInstanceChanges
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh_EditableMesh::PropagateInstanceChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");

	UEditableMesh_EditableMesh_PropagateInstanceChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.MoveVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_VertexToMove> VerticesToMove                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::MoveVertices(TArray<struct FEditableMesh_VertexToMove> VerticesToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");

	UEditableMesh_EditableMesh_MoveVertices_Params params;
	params.VerticesToMove = VerticesToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.MakeVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            VertexIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UEditableMesh_EditableMesh::STATIC_MakeVertexID(int VertexIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");

	UEditableMesh_EditableMesh_MakeVertexID_Params params;
	params.VertexIndex = VertexIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PolygonIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UEditableMesh_EditableMesh::STATIC_MakePolygonID(int PolygonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");

	UEditableMesh_EditableMesh_MakePolygonID_Params params;
	params.PolygonIndex = PolygonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PolygonGroupIndex              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UEditableMesh_EditableMesh::STATIC_MakePolygonGroupID(int PolygonGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");

	UEditableMesh_EditableMesh_MakePolygonGroupID_Params params;
	params.PolygonGroupIndex = PolygonGroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakeEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EdgeIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UEditableMesh_EditableMesh::STATIC_MakeEdgeID(int EdgeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");

	UEditableMesh_EditableMesh_MakeEdgeID_Params params;
	params.EdgeIndex = EdgeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsValidVertex(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");

	UEditableMesh_EditableMesh_IsValidVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsValidPolygonGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");

	UEditableMesh_EditableMesh_IsValidPolygonGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsValidPolygon(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");

	UEditableMesh_EditableMesh_IsValidPolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsValidEdge(const struct FMeshDescription_EdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");

	UEditableMesh_EditableMesh_IsValidEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsUndoAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsUndoAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");

	UEditableMesh_EditableMesh_IsUndoAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsSpatialDatabaseAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");

	UEditableMesh_EditableMesh_IsSpatialDatabaseAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsPreviewingSubdivisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");

	UEditableMesh_EditableMesh_IsPreviewingSubdivisions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsOrphanedVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsOrphanedVertex(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");

	UEditableMesh_EditableMesh_IsOrphanedVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCompactAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsCompactAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");

	UEditableMesh_EditableMesh_IsCompactAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsCommittedAsInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");

	UEditableMesh_EditableMesh_IsCommittedAsInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommitted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsCommitted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");

	UEditableMesh_EditableMesh_IsCommitted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsBeingModified
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::IsBeingModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");

	UEditableMesh_EditableMesh_IsBeingModified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UEditableMesh_EditableMesh::STATIC_InvalidVertexID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");

	UEditableMesh_EditableMesh_InvalidVertexID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UEditableMesh_EditableMesh::STATIC_InvalidPolygonID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");

	UEditableMesh_EditableMesh_InvalidPolygonID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UEditableMesh_EditableMesh::STATIC_InvalidPolygonGroupID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");

	UEditableMesh_EditableMesh_InvalidPolygonGroupID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UEditableMesh_EditableMesh::STATIC_InvalidEdgeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");

	UEditableMesh_EditableMesh_InvalidEdgeID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InsetPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InsetFixedDistance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InsetProgressTowardCenter      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FEditableMesh_EditableMesh_EInsetPolygonsMode Mode                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> OutNewCenterPolygonIDs         (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_PolygonID> OutNewSidePolygonIDs           (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::InsetPolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, FEditableMesh_EditableMesh_EInsetPolygonsMode Mode, TArray<struct FMeshDescription_PolygonID>* OutNewCenterPolygonIDs, TArray<struct FMeshDescription_PolygonID>* OutNewSidePolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");

	UEditableMesh_EditableMesh_InsetPolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.InsetFixedDistance = InsetFixedDistance;
	params.InsetProgressTowardCenter = InsetProgressTowardCenter;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}


// Function EditableMesh.EditableMesh.InsertEdgeLoop
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// TArray<float>                  Splits                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_EdgeID> OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::InsertEdgeLoop(const struct FMeshDescription_EdgeID& EdgeID, TArray<float> Splits, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");

	UEditableMesh_EditableMesh_InsertEdgeLoop_Params params;
	params.EdgeID = EdgeID;
	params.Splits = Splits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.InitializeAdapters
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh_EditableMesh::InitializeAdapters()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");

	UEditableMesh_EditableMesh_InitializeAdapters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.GetVertexPairEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// struct FMeshDescription_VertexID NextVertexID                   (ConstParm, Parm)
// bool                           bOutEdgeWindingIsReversed      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UEditableMesh_EditableMesh::GetVertexPairEdge(const struct FMeshDescription_VertexID& VertexID, const struct FMeshDescription_VertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");

	UEditableMesh_EditableMesh_GetVertexPairEdge_Params params;
	params.VertexID = VertexID;
	params.NextVertexID = NextVertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutEdgeWindingIsReversed != nullptr)
		*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (ConstParm, Parm)
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UEditableMesh_EditableMesh::GetVertexInstanceVertex(const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");

	UEditableMesh_EditableMesh_GetVertexInstanceVertex_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetVertexInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");

	UEditableMesh_EditableMesh_GetVertexInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (ConstParm, Parm)
// TArray<struct FMeshDescription_PolygonID> OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetVertexInstanceConnectedPolygons(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");

	UEditableMesh_EditableMesh_GetVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");

	UEditableMesh_EditableMesh_GetVertexInstanceConnectedPolygonCount_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (ConstParm, Parm)
// int                            ConnectedPolygonNumber         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UEditableMesh_EditableMesh::GetVertexInstanceConnectedPolygon(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");

	UEditableMesh_EditableMesh_GetVertexInstanceConnectedPolygon_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetVertexCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");

	UEditableMesh_EditableMesh_GetVertexCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// TArray<struct FMeshDescription_PolygonID> OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetVertexConnectedPolygons(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");

	UEditableMesh_EditableMesh_GetVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// TArray<struct FMeshDescription_EdgeID> OutConnectedEdgeIDs            (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetVertexConnectedEdges(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_EdgeID>* OutConnectedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");

	UEditableMesh_EditableMesh_GetVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedEdgeIDs != nullptr)
		*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetVertexConnectedEdgeCount(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");

	UEditableMesh_EditableMesh_GetVertexConnectedEdgeCount_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// int                            ConnectedEdgeNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UEditableMesh_EditableMesh::GetVertexConnectedEdge(const struct FMeshDescription_VertexID& VertexID, int ConnectedEdgeNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");

	UEditableMesh_EditableMesh_GetVertexConnectedEdge_Params params;
	params.VertexID = VertexID;
	params.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// TArray<struct FMeshDescription_VertexID> OutAdjacentVertexIDs           (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetVertexAdjacentVertices(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_VertexID>* OutAdjacentVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");

	UEditableMesh_EditableMesh_GetVertexAdjacentVertices_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}


// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetTextureCoordinateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");

	UEditableMesh_EditableMesh_GetTextureCoordinateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEditableMesh_SubdivisionLimitData ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FEditableMesh_SubdivisionLimitData UEditableMesh_EditableMesh::GetSubdivisionLimitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");

	UEditableMesh_EditableMesh_GetSubdivisionLimitData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetSubdivisionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");

	UEditableMesh_EditableMesh_GetSubdivisionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetPolygonTriangulatedTriangleCount(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");

	UEditableMesh_EditableMesh_GetPolygonTriangulatedTriangleCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            PolygonTriangleNumber          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_TriangleID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_TriangleID UEditableMesh_EditableMesh::GetPolygonTriangulatedTriangle(const struct FMeshDescription_PolygonID& PolygonID, int PolygonTriangleNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");

	UEditableMesh_EditableMesh_GetPolygonTriangulatedTriangle_Params params;
	params.PolygonID = PolygonID;
	params.PolygonTriangleNumber = PolygonTriangleNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// TArray<struct FMeshDescription_VertexID> OutPolygonPerimeterVertexIDs   (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetPolygonPerimeterVertices(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexID>* OutPolygonPerimeterVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");

	UEditableMesh_EditableMesh_GetPolygonPerimeterVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterVertexIDs != nullptr)
		*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// TArray<struct FMeshDescription_VertexInstanceID> OutPolygonPerimeterVertexInstanceIDs (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetPolygonPerimeterVertexInstances(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");

	UEditableMesh_EditableMesh_GetPolygonPerimeterVertexInstances_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
		*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            PolygonVertexNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexInstanceID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexInstanceID UEditableMesh_EditableMesh::GetPolygonPerimeterVertexInstance(const struct FMeshDescription_PolygonID& PolygonID, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");

	UEditableMesh_EditableMesh_GetPolygonPerimeterVertexInstance_Params params;
	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetPolygonPerimeterVertexCount(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");

	UEditableMesh_EditableMesh_GetPolygonPerimeterVertexCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            PolygonVertexNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UEditableMesh_EditableMesh::GetPolygonPerimeterVertex(const struct FMeshDescription_PolygonID& PolygonID, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");

	UEditableMesh_EditableMesh_GetPolygonPerimeterVertex_Params params;
	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// TArray<struct FMeshDescription_EdgeID> OutPolygonPerimeterEdgeIDs     (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetPolygonPerimeterEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutPolygonPerimeterEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");

	UEditableMesh_EditableMesh_GetPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterEdgeIDs != nullptr)
		*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetPolygonPerimeterEdgeCount(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");

	UEditableMesh_EditableMesh_GetPolygonPerimeterEdgeCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// int                            PerimeterEdgeNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutEdgeWindingIsReversedForPolygon (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UEditableMesh_EditableMesh::GetPolygonPerimeterEdge(const struct FMeshDescription_PolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");

	UEditableMesh_EditableMesh_GetPolygonPerimeterEdge_Params params;
	params.PolygonID = PolygonID;
	params.PerimeterEdgeNumber = PerimeterEdgeNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutEdgeWindingIsReversedForPolygon != nullptr)
		*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (ConstParm, Parm)
// int                            PolygonNumber                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UEditableMesh_EditableMesh::GetPolygonInGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, int PolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");

	UEditableMesh_EditableMesh_GetPolygonInGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.PolygonNumber = PolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetPolygonGroupCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");

	UEditableMesh_EditableMesh_GetPolygonGroupCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetPolygonCountInGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");

	UEditableMesh_EditableMesh_GetPolygonCountInGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetPolygonCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");

	UEditableMesh_EditableMesh_GetPolygonCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// TArray<struct FMeshDescription_PolygonID> OutAdjacentPolygons            (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetPolygonAdjacentPolygons(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_PolygonID>* OutAdjacentPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");

	UEditableMesh_EditableMesh_GetPolygonAdjacentPolygons_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAdjacentPolygons != nullptr)
		*OutAdjacentPolygons = params.OutAdjacentPolygons;
}


// Function EditableMesh.EditableMesh.GetGroupForPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UEditableMesh_EditableMesh::GetGroupForPolygon(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");

	UEditableMesh_EditableMesh_GetGroupForPolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UEditableMesh_EditableMesh::GetFirstValidPolygonGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");

	UEditableMesh_EditableMesh_GetFirstValidPolygonGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// struct FMeshDescription_VertexID OutEdgeVertexID0               (Parm, OutParm)
// struct FMeshDescription_VertexID OutEdgeVertexID1               (Parm, OutParm)

void UEditableMesh_EditableMesh::GetEdgeVertices(const struct FMeshDescription_EdgeID& EdgeID, struct FMeshDescription_VertexID* OutEdgeVertexID0, struct FMeshDescription_VertexID* OutEdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");

	UEditableMesh_EditableMesh_GetEdgeVertices_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeVertexID0 != nullptr)
		*OutEdgeVertexID0 = params.OutEdgeVertexID0;
	if (OutEdgeVertexID1 != nullptr)
		*OutEdgeVertexID1 = params.OutEdgeVertexID1;
}


// Function EditableMesh.EditableMesh.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// int                            EdgeVertexNumber               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UEditableMesh_EditableMesh::GetEdgeVertex(const struct FMeshDescription_EdgeID& EdgeID, int EdgeVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");

	UEditableMesh_EditableMesh_GetEdgeVertex_Params params;
	params.EdgeID = EdgeID;
	params.EdgeVertexNumber = EdgeVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID0                      (ConstParm, Parm)
// struct FMeshDescription_VertexID VertexID1                      (ConstParm, Parm)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UEditableMesh_EditableMesh::GetEdgeThatConnectsVertices(const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");

	UEditableMesh_EditableMesh_GetEdgeThatConnectsVertices_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// TArray<struct FMeshDescription_EdgeID> EdgeLoopIDs                    (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetEdgeLoopElements(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_EdgeID>* EdgeLoopIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");

	UEditableMesh_EditableMesh_GetEdgeLoopElements_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EdgeLoopIDs != nullptr)
		*EdgeLoopIDs = params.EdgeLoopIDs;
}


// Function EditableMesh.EditableMesh.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetEdgeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");

	UEditableMesh_EditableMesh_GetEdgeCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// TArray<struct FMeshDescription_PolygonID> OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::GetEdgeConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");

	UEditableMesh_EditableMesh_GetEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::GetEdgeConnectedPolygonCount(const struct FMeshDescription_EdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");

	UEditableMesh_EditableMesh_GetEdgeConnectedPolygonCount_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// int                            ConnectedPolygonNumber         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UEditableMesh_EditableMesh::GetEdgeConnectedPolygon(const struct FMeshDescription_EdgeID& EdgeID, int ConnectedPolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");

	UEditableMesh_EditableMesh_GetEdgeConnectedPolygon_Params params;
	params.EdgeID = EdgeID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FMeshDescription_PolygonID> PolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");

	UEditableMesh_EditableMesh_GeneratePolygonTangentsAndNormals_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.FlipPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::FlipPolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");

	UEditableMesh_EditableMesh_FlipPolygons_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");

	UEditableMesh_EditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params params;
	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// struct FMeshDescription_VertexID EdgeVertexID0                  (ConstParm, Parm)
// struct FMeshDescription_VertexID EdgeVertexID1                  (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEditableMesh_EditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_VertexID& EdgeVertexID0, const struct FMeshDescription_VertexID& EdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");

	UEditableMesh_EditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params params;
	params.PolygonID = PolygonID;
	params.EdgeVertexID0 = EdgeVertexID0;
	params.EdgeVertexID1 = EdgeVertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonLoop
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// TArray<struct FMeshDescription_EdgeID> OutEdgeLoopEdgeIDs             (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_EdgeID> OutFlippedEdgeIDs              (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_EdgeID> OutReversedEdgeIDPathToTake    (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_PolygonID> OutPolygonIDsToSplit           (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::FindPolygonLoop(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_EdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FMeshDescription_EdgeID>* OutFlippedEdgeIDs, TArray<struct FMeshDescription_EdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FMeshDescription_PolygonID>* OutPolygonIDsToSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");

	UEditableMesh_EditableMesh_FindPolygonLoop_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeLoopEdgeIDs != nullptr)
		*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
	if (OutFlippedEdgeIDs != nullptr)
		*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
	if (OutReversedEdgeIDPathToTake != nullptr)
		*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
	if (OutPolygonIDsToSplit != nullptr)
		*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
}


// Function EditableMesh.EditableMesh.ExtrudePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> Polygons                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ExtrudeDistance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bKeepNeighborsTogether         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> OutNewExtrudedFrontPolygons    (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::ExtrudePolygons(TArray<struct FMeshDescription_PolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FMeshDescription_PolygonID>* OutNewExtrudedFrontPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");

	UEditableMesh_EditableMesh_ExtrudePolygons_Params params;
	params.Polygons = Polygons;
	params.ExtrudeDistance = ExtrudeDistance;
	params.bKeepNeighborsTogether = bKeepNeighborsTogether;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewExtrudedFrontPolygons != nullptr)
		*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
}


// Function EditableMesh.EditableMesh.ExtendVertices
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_VertexID> VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bOnlyExtendClosestEdge         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReferencePosition              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_VertexID> OutNewExtendedVertexIDs        (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::ExtendVertices(TArray<struct FMeshDescription_VertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FMeshDescription_VertexID>* OutNewExtendedVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");

	UEditableMesh_EditableMesh_ExtendVertices_Params params;
	params.VertexIDs = VertexIDs;
	params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewExtendedVertexIDs != nullptr)
		*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
}


// Function EditableMesh.EditableMesh.ExtendEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_EdgeID> EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bWeldNeighbors                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_EdgeID> OutNewExtendedEdgeIDs          (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::ExtendEdges(TArray<struct FMeshDescription_EdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FMeshDescription_EdgeID>* OutNewExtendedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");

	UEditableMesh_EditableMesh_ExtendEdges_Params params;
	params.EdgeIDs = EdgeIDs;
	params.bWeldNeighbors = bWeldNeighbors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewExtendedEdgeIDs != nullptr)
		*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
}


// Function EditableMesh.EditableMesh.EndModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFromUndo                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::EndModification(bool bFromUndo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");

	UEditableMesh_EditableMesh_EndModification_Params params;
	params.bFromUndo = bFromUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDsToDelete      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::DeleteVertexInstances(TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");

	UEditableMesh_EditableMesh_DeleteVertexInstances_Params params;
	params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (ConstParm, Parm)
// bool                           bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FMeshDescription_VertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");

	UEditableMesh_EditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params params;
	params.VertexID = VertexID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeletePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDsToDelete             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::DeletePolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");

	UEditableMesh_EditableMesh_DeletePolygons_Params params;
	params.PolygonIDsToDelete = PolygonIDsToDelete;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeletePolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonGroupID> PolygonGroupIDs                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::DeletePolygonGroups(TArray<struct FMeshDescription_PolygonGroupID> PolygonGroupIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");

	UEditableMesh_EditableMesh_DeletePolygonGroups_Params params;
	params.PolygonGroupIDs = PolygonGroupIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_VertexID> VertexIDsToDelete              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::DeleteOrphanVertices(TArray<struct FMeshDescription_VertexID> VertexIDsToDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");

	UEditableMesh_EditableMesh_DeleteOrphanVertices_Params params;
	params.VertexIDsToDelete = VertexIDsToDelete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_EdgeID> EdgeIDsToDelete                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::DeleteEdges(TArray<struct FMeshDescription_EdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");

	UEditableMesh_EditableMesh_DeleteEdges_Params params;
	params.EdgeIDsToDelete = EdgeIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// bool                           bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::DeleteEdgeAndConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");

	UEditableMesh_EditableMesh_DeleteEdgeAndConnectedPolygons_Params params;
	params.EdgeID = EdgeID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.CreateVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_VertexToCreate> VerticesToCreate               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_VertexID> OutNewVertexIDs                (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreateVertices(TArray<struct FEditableMesh_VertexToCreate> VerticesToCreate, TArray<struct FMeshDescription_VertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");

	UEditableMesh_EditableMesh_CreateVertices_Params params;
	params.VerticesToCreate = VerticesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.CreateVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_VertexInstanceToCreate> VertexInstancesToCreate        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_VertexInstanceID> OutNewVertexInstanceIDs        (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreateVertexInstances(TArray<struct FEditableMesh_VertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FMeshDescription_VertexInstanceID>* OutNewVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");

	UEditableMesh_EditableMesh_CreateVertexInstances_Params params;
	params.VertexInstancesToCreate = VertexInstancesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexInstanceIDs != nullptr)
		*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.CreatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_PolygonToCreate> PolygonsToCreate               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_PolygonID> OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_EdgeID> OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreatePolygons(TArray<struct FEditableMesh_PolygonToCreate> PolygonsToCreate, TArray<struct FMeshDescription_PolygonID>* OutNewPolygonIDs, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");

	UEditableMesh_EditableMesh_CreatePolygons_Params params;
	params.PolygonsToCreate = PolygonsToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreatePolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_PolygonGroupToCreate> PolygonGroupsToCreate          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_PolygonGroupID> OutNewPolygonGroupIDs          (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreatePolygonGroups(TArray<struct FEditableMesh_PolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FMeshDescription_PolygonGroupID>* OutNewPolygonGroupIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");

	UEditableMesh_EditableMesh_CreatePolygonGroups_Params params;
	params.PolygonGroupsToCreate = PolygonGroupsToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonGroupIDs != nullptr)
		*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
}


// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// TArray<struct FMeshDescription_EdgeID> OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreateMissingPolygonPerimeterEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");

	UEditableMesh_EditableMesh_CreateMissingPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumVerticesToCreate            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_VertexID> OutNewVertexIDs                (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FMeshDescription_VertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");

	UEditableMesh_EditableMesh_CreateEmptyVertexRange_Params params;
	params.NumVerticesToCreate = NumVerticesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.CreateEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_EdgeToCreate> EdgesToCreate                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_EdgeID> OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::CreateEdges(TArray<struct FEditableMesh_EdgeToCreate> EdgesToCreate, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");

	UEditableMesh_EditableMesh_CreateEdges_Params params;
	params.EdgesToCreate = EdgesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_EdgeID> OutSharedEdgeIDs               (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::ComputePolygonsSharedEdges(TArray<struct FMeshDescription_PolygonID> PolygonIDs, TArray<struct FMeshDescription_EdgeID>* OutSharedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");

	UEditableMesh_EditableMesh_ComputePolygonsSharedEdges_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSharedEdgeIDs != nullptr)
		*OutSharedEdgeIDs = params.OutSharedEdgeIDs;
}


// Function EditableMesh.EditableMesh.ComputePolygonPlane
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// struct FPlane                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FPlane UEditableMesh_EditableMesh::ComputePolygonPlane(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");

	UEditableMesh_EditableMesh_ComputePolygonPlane_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEditableMesh_EditableMesh::ComputePolygonNormal(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");

	UEditableMesh_EditableMesh_ComputePolygonNormal_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEditableMesh_EditableMesh::ComputePolygonCenter(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");

	UEditableMesh_EditableMesh_ComputePolygonCenter_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBoxSphereBounds UEditableMesh_EditableMesh::ComputeBoundingBoxAndSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");

	UEditableMesh_EditableMesh_ComputeBoundingBoxAndSphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBox UEditableMesh_EditableMesh::ComputeBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");

	UEditableMesh_EditableMesh_ComputeBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.CommitInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEngine_PrimitiveComponent* ComponentToInstanceTo          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UEditableMesh_EditableMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEditableMesh_EditableMesh* UEditableMesh_EditableMesh::CommitInstance(class UEngine_PrimitiveComponent* ComponentToInstanceTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");

	UEditableMesh_EditableMesh_CommitInstance_Params params;
	params.ComponentToInstanceTo = ComponentToInstanceTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Commit
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh_EditableMesh::Commit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");

	UEditableMesh_EditableMesh_Commit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_ChangeVertexInstancesForPolygon> VertexInstancesForPolygons     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEditableMesh_EditableMesh::ChangePolygonsVertexInstances(TArray<struct FEditableMesh_ChangeVertexInstancesForPolygon> VertexInstancesForPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");

	UEditableMesh_EditableMesh_ChangePolygonsVertexInstances_Params params;
	params.VertexInstancesForPolygons = VertexInstancesForPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.BevelPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeshDescription_PolygonID> PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          BevelFixedDistance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BevelProgressTowardCenter      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMeshDescription_PolygonID> OutNewCenterPolygonIDs         (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_PolygonID> OutNewSidePolygonIDs           (Parm, OutParm, ZeroConstructor)

void UEditableMesh_EditableMesh::BevelPolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FMeshDescription_PolygonID>* OutNewCenterPolygonIDs, TArray<struct FMeshDescription_PolygonID>* OutNewSidePolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");

	UEditableMesh_EditableMesh_BevelPolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.BevelFixedDistance = BevelFixedDistance;
	params.BevelProgressTowardCenter = BevelProgressTowardCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}


// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEditableMesh_PolygonGroupForPolygon> PolygonGroupForPolygons        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bDeleteOrphanedPolygonGroups   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEditableMesh_EditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FEditableMesh_PolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");

	UEditableMesh_EditableMesh_AssignPolygonsToPolygonGroups_Params params;
	params.PolygonGroupForPolygons = PolygonGroupForPolygons;
	params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.AnyChangesToUndo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEditableMesh_EditableMesh::AnyChangesToUndo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");

	UEditableMesh_EditableMesh_AnyChangesToUndo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_PrimitiveComponent* PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            LODIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEditableMesh_EditableMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEditableMesh_EditableMesh* UEditableMesh_EditableMeshFactory::STATIC_MakeEditableMesh(class UEngine_PrimitiveComponent* PrimitiveComponent, int LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");

	UEditableMesh_EditableMeshFactory_MakeEditableMesh_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
