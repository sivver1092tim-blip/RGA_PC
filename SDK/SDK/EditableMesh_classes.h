#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EditableMesh.EditableMeshAdapter
// 0x0000 (0x0028 - 0x0028)
class UEditableMesh_EditableMeshAdapter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}

};


// Class EditableMesh.EditableGeometryCollectionAdapter
// 0x00B0 (0x00D8 - 0x0028)
class UEditableMesh_EditableGeometryCollectionAdapter : public UEditableMesh_EditableMeshAdapter
{
public:
	class UGeometryCollectionEngine_GeometryCollection* GeometryCollection;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGeometryCollectionEngine_GeometryCollection* OriginalGeometryCollection;                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                GeometryCollectionLODIndex;                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x003C(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableGeometryCollectionAdapter");
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableGeometryCollectionAdapter");
		return ptr;
	}

};


// Class EditableMesh.EditableMesh
// 0x06E0 (0x0708 - 0x0028)
class UEditableMesh_EditableMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0028(0x0390) MISSED OFFSET
	TArray<class UEditableMesh_EditableMeshAdapter*>   Adapters;                                                 // 0x03B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	int                                                TextureCoordinateCount;                                   // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x148];                                     // 0x03D4(0x0148) MISSED OFFSET
	int                                                PendingCompactCounter;                                    // 0x051C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubdivisionCount;                                         // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1E4];                                     // 0x0524(0x01E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}


	void WeldVertices(TArray<struct FMeshDescription_VertexID> VertexIDs, struct FMeshDescription_VertexID* OutNewVertexID);
	void TryToRemoveVertex(const struct FMeshDescription_VertexID& VertexID, bool* bOutWasVertexRemoved, struct FMeshDescription_EdgeID* OutNewEdgeID);
	void TryToRemovePolygonEdge(const struct FMeshDescription_EdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FMeshDescription_PolygonID* OutNewPolygonID);
	void TriangulatePolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, TArray<struct FMeshDescription_PolygonID>* OutNewTrianglePolygons);
	void TessellatePolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, FEditableMesh_EditableMesh_ETriangleTessellationMode TriangleTessellationMode, TArray<struct FMeshDescription_PolygonID>* OutNewPolygonIDs);
	void StartModification(FEditableMesh_EditableMesh_EMeshModificationType MeshModificationType, FEditableMesh_EditableMesh_EMeshTopologyChange MeshTopologyChange);
	void SplitPolygons(TArray<struct FEditableMesh_PolygonToSplit> PolygonsToSplit, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs);
	void SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FMeshDescription_PolygonID>* PolygonIDs1, TArray<struct FMeshDescription_PolygonID>* PolygonIDs2, TArray<struct FMeshDescription_EdgeID>* BoundaryIDs);
	void SplitEdge(const struct FMeshDescription_EdgeID& EdgeID, TArray<float> Splits, TArray<struct FMeshDescription_VertexID>* OutNewVertexIDs);
	void SetVerticesCornerSharpness(TArray<struct FMeshDescription_VertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness);
	void SetVerticesAttributes(TArray<struct FEditableMesh_AttributesForVertex> AttributesForVertices);
	void SetVertexInstancesAttributes(TArray<struct FEditableMesh_AttributesForVertexInstance> AttributesForVertexInstances);
	void SetTextureCoordinateCount(int NumTexCoords);
	void SetSubdivisionCount(int NewSubdivisionCount);
	void SetPolygonsVertexAttributes(TArray<struct FEditableMesh_VertexAttributesForPolygon> VertexAttributesForPolygons);
	void SetEdgesHardnessAutomatically(TArray<struct FMeshDescription_EdgeID> EdgeIDs, float MaxDotProductForSoftEdge);
	void SetEdgesHardness(TArray<struct FMeshDescription_EdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard);
	void SetEdgesCreaseSharpness(TArray<struct FMeshDescription_EdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness);
	void SetEdgesAttributes(TArray<struct FEditableMesh_AttributesForEdge> AttributesForEdges);
	void SetAllowUndo(bool bInAllowUndo);
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
	void SetAllowCompact(bool bInAllowCompact);
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FMeshDescription_PolygonID>* OutPolygons);
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FMeshDescription_PolygonID>* OutPolygons);
	void SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FMeshDescription_PolygonID>* OutPolygons);
	class UEditableMesh_EditableMesh* RevertInstance();
	void Revert();
	void RebuildRenderMesh();
	void QuadrangulateMesh(TArray<struct FMeshDescription_PolygonID>* OutNewPolygonIDs);
	void PropagateInstanceChanges();
	void MoveVertices(TArray<struct FEditableMesh_VertexToMove> VerticesToMove);
	struct FMeshDescription_VertexID STATIC_MakeVertexID(int VertexIndex);
	struct FMeshDescription_PolygonID STATIC_MakePolygonID(int PolygonIndex);
	struct FMeshDescription_PolygonGroupID STATIC_MakePolygonGroupID(int PolygonGroupIndex);
	struct FMeshDescription_EdgeID STATIC_MakeEdgeID(int EdgeIndex);
	bool IsValidVertex(const struct FMeshDescription_VertexID& VertexID);
	bool IsValidPolygonGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	bool IsValidPolygon(const struct FMeshDescription_PolygonID& PolygonID);
	bool IsValidEdge(const struct FMeshDescription_EdgeID& EdgeID);
	bool IsUndoAllowed();
	bool IsSpatialDatabaseAllowed();
	bool IsPreviewingSubdivisions();
	bool IsOrphanedVertex(const struct FMeshDescription_VertexID& VertexID);
	bool IsCompactAllowed();
	bool IsCommittedAsInstance();
	bool IsCommitted();
	bool IsBeingModified();
	struct FMeshDescription_VertexID STATIC_InvalidVertexID();
	struct FMeshDescription_PolygonID STATIC_InvalidPolygonID();
	struct FMeshDescription_PolygonGroupID STATIC_InvalidPolygonGroupID();
	struct FMeshDescription_EdgeID STATIC_InvalidEdgeID();
	void InsetPolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, FEditableMesh_EditableMesh_EInsetPolygonsMode Mode, TArray<struct FMeshDescription_PolygonID>* OutNewCenterPolygonIDs, TArray<struct FMeshDescription_PolygonID>* OutNewSidePolygonIDs);
	void InsertEdgeLoop(const struct FMeshDescription_EdgeID& EdgeID, TArray<float> Splits, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs);
	void InitializeAdapters();
	struct FMeshDescription_EdgeID GetVertexPairEdge(const struct FMeshDescription_VertexID& VertexID, const struct FMeshDescription_VertexID& NextVertexID, bool* bOutEdgeWindingIsReversed);
	struct FMeshDescription_VertexID GetVertexInstanceVertex(const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	int GetVertexInstanceCount();
	void GetVertexInstanceConnectedPolygons(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs);
	int GetVertexInstanceConnectedPolygonCount(const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	struct FMeshDescription_PolygonID GetVertexInstanceConnectedPolygon(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber);
	int GetVertexCount();
	void GetVertexConnectedPolygons(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_EdgeID>* OutConnectedEdgeIDs);
	int GetVertexConnectedEdgeCount(const struct FMeshDescription_VertexID& VertexID);
	struct FMeshDescription_EdgeID GetVertexConnectedEdge(const struct FMeshDescription_VertexID& VertexID, int ConnectedEdgeNumber);
	void GetVertexAdjacentVertices(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_VertexID>* OutAdjacentVertexIDs);
	int GetTextureCoordinateCount();
	struct FEditableMesh_SubdivisionLimitData GetSubdivisionLimitData();
	int GetSubdivisionCount();
	int GetPolygonTriangulatedTriangleCount(const struct FMeshDescription_PolygonID& PolygonID);
	struct FMeshDescription_TriangleID GetPolygonTriangulatedTriangle(const struct FMeshDescription_PolygonID& PolygonID, int PolygonTriangleNumber);
	void GetPolygonPerimeterVertices(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexID>* OutPolygonPerimeterVertexIDs);
	void GetPolygonPerimeterVertexInstances(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs);
	struct FMeshDescription_VertexInstanceID GetPolygonPerimeterVertexInstance(const struct FMeshDescription_PolygonID& PolygonID, int PolygonVertexNumber);
	int GetPolygonPerimeterVertexCount(const struct FMeshDescription_PolygonID& PolygonID);
	struct FMeshDescription_VertexID GetPolygonPerimeterVertex(const struct FMeshDescription_PolygonID& PolygonID, int PolygonVertexNumber);
	void GetPolygonPerimeterEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutPolygonPerimeterEdgeIDs);
	int GetPolygonPerimeterEdgeCount(const struct FMeshDescription_PolygonID& PolygonID);
	struct FMeshDescription_EdgeID GetPolygonPerimeterEdge(const struct FMeshDescription_PolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon);
	struct FMeshDescription_PolygonID GetPolygonInGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, int PolygonNumber);
	int GetPolygonGroupCount();
	int GetPolygonCountInGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	int GetPolygonCount();
	void GetPolygonAdjacentPolygons(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_PolygonID>* OutAdjacentPolygons);
	struct FMeshDescription_PolygonGroupID GetGroupForPolygon(const struct FMeshDescription_PolygonID& PolygonID);
	struct FMeshDescription_PolygonGroupID GetFirstValidPolygonGroup();
	void GetEdgeVertices(const struct FMeshDescription_EdgeID& EdgeID, struct FMeshDescription_VertexID* OutEdgeVertexID0, struct FMeshDescription_VertexID* OutEdgeVertexID1);
	struct FMeshDescription_VertexID GetEdgeVertex(const struct FMeshDescription_EdgeID& EdgeID, int EdgeVertexNumber);
	struct FMeshDescription_EdgeID GetEdgeThatConnectsVertices(const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1);
	void GetEdgeLoopElements(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_EdgeID>* EdgeLoopIDs);
	int GetEdgeCount();
	void GetEdgeConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs);
	int GetEdgeConnectedPolygonCount(const struct FMeshDescription_EdgeID& EdgeID);
	struct FMeshDescription_PolygonID GetEdgeConnectedPolygon(const struct FMeshDescription_EdgeID& EdgeID, int ConnectedPolygonNumber);
	void GeneratePolygonTangentsAndNormals(TArray<struct FMeshDescription_PolygonID> PolygonIDs);
	void FlipPolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs);
	int FindPolygonPerimeterVertexNumberForVertex(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_VertexID& VertexID);
	int FindPolygonPerimeterEdgeNumberForVertices(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_VertexID& EdgeVertexID0, const struct FMeshDescription_VertexID& EdgeVertexID1);
	void FindPolygonLoop(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_EdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FMeshDescription_EdgeID>* OutFlippedEdgeIDs, TArray<struct FMeshDescription_EdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FMeshDescription_PolygonID>* OutPolygonIDsToSplit);
	void ExtrudePolygons(TArray<struct FMeshDescription_PolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FMeshDescription_PolygonID>* OutNewExtrudedFrontPolygons);
	void ExtendVertices(TArray<struct FMeshDescription_VertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FMeshDescription_VertexID>* OutNewExtendedVertexIDs);
	void ExtendEdges(TArray<struct FMeshDescription_EdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FMeshDescription_EdgeID>* OutNewExtendedEdgeIDs);
	void EndModification(bool bFromUndo);
	void DeleteVertexInstances(TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
	void DeleteVertexAndConnectedEdgesAndPolygons(const struct FMeshDescription_VertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void DeletePolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void DeletePolygonGroups(TArray<struct FMeshDescription_PolygonGroupID> PolygonGroupIDs);
	void DeleteOrphanVertices(TArray<struct FMeshDescription_VertexID> VertexIDsToDelete);
	void DeleteEdges(TArray<struct FMeshDescription_EdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices);
	void DeleteEdgeAndConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void CreateVertices(TArray<struct FEditableMesh_VertexToCreate> VerticesToCreate, TArray<struct FMeshDescription_VertexID>* OutNewVertexIDs);
	void CreateVertexInstances(TArray<struct FEditableMesh_VertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FMeshDescription_VertexInstanceID>* OutNewVertexInstanceIDs);
	void CreatePolygons(TArray<struct FEditableMesh_PolygonToCreate> PolygonsToCreate, TArray<struct FMeshDescription_PolygonID>* OutNewPolygonIDs, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs);
	void CreatePolygonGroups(TArray<struct FEditableMesh_PolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FMeshDescription_PolygonGroupID>* OutNewPolygonGroupIDs);
	void CreateMissingPolygonPerimeterEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs);
	void CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FMeshDescription_VertexID>* OutNewVertexIDs);
	void CreateEdges(TArray<struct FEditableMesh_EdgeToCreate> EdgesToCreate, TArray<struct FMeshDescription_EdgeID>* OutNewEdgeIDs);
	void ComputePolygonsSharedEdges(TArray<struct FMeshDescription_PolygonID> PolygonIDs, TArray<struct FMeshDescription_EdgeID>* OutSharedEdgeIDs);
	struct FPlane ComputePolygonPlane(const struct FMeshDescription_PolygonID& PolygonID);
	struct FVector ComputePolygonNormal(const struct FMeshDescription_PolygonID& PolygonID);
	struct FVector ComputePolygonCenter(const struct FMeshDescription_PolygonID& PolygonID);
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere();
	struct FBox ComputeBoundingBox();
	class UEditableMesh_EditableMesh* CommitInstance(class UEngine_PrimitiveComponent* ComponentToInstanceTo);
	void Commit();
	void ChangePolygonsVertexInstances(TArray<struct FEditableMesh_ChangeVertexInstancesForPolygon> VertexInstancesForPolygons);
	void BevelPolygons(TArray<struct FMeshDescription_PolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FMeshDescription_PolygonID>* OutNewCenterPolygonIDs, TArray<struct FMeshDescription_PolygonID>* OutNewSidePolygonIDs);
	void AssignPolygonsToPolygonGroups(TArray<struct FEditableMesh_PolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
	bool AnyChangesToUndo();
};


// Class EditableMesh.EditableMeshFactory
// 0x0000 (0x0028 - 0x0028)
class UEditableMesh_EditableMeshFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}


	class UEditableMesh_EditableMesh* STATIC_MakeEditableMesh(class UEngine_PrimitiveComponent* PrimitiveComponent, int LODIndex);
};


// Class EditableMesh.EditableStaticMeshAdapter
// 0x00B8 (0x00E0 - 0x0028)
class UEditableMesh_EditableStaticMeshAdapter : public UEditableMesh_EditableMeshAdapter
{
public:
	class UEngine_StaticMesh*                          StaticMesh;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_StaticMesh*                          OriginalStaticMesh;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticMeshLODIndex;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x003C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
