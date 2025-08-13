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

// Class MeshDescription.MeshDescription
// 0x0000 (0x0028 - 0x0028)
class UMeshDescription_MeshDescription : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		if (!ptr)
			ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		return ptr;
	}

};


// Class MeshDescription.MeshDescriptionBase
// 0x0368 (0x0390 - 0x0028)
class UMeshDescription_MeshDescriptionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0028(0x0368) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescriptionBase");
		if (!ptr)
			ptr = UObject::FindClass("Class MeshDescription.MeshDescriptionBase");
		return ptr;
	}


	void SetVertexPosition(const struct FMeshDescription_VertexID& VertexID, const struct FVector& Position);
	void SetPolygonVertexInstance(const struct FMeshDescription_PolygonID& PolygonID, int PerimeterIndex, const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	void SetPolygonPolygonGroup(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	void ReversePolygonFacing(const struct FMeshDescription_PolygonID& PolygonID);
	void ReserveNewVertices(int NumberOfNewVertices);
	void ReserveNewVertexInstances(int NumberOfNewVertexInstances);
	void ReserveNewTriangles(int NumberOfNewTriangles);
	void ReserveNewPolygons(int NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int NumberOfNewPolygonGroups);
	void ReserveNewEdges(int NumberOfNewEdges);
	bool IsVertexValid(const struct FMeshDescription_VertexID& VertexID);
	bool IsVertexOrphaned(const struct FMeshDescription_VertexID& VertexID);
	bool IsVertexInstanceValid(const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	bool IsTriangleValid(const struct FMeshDescription_TriangleID& TriangleID);
	bool IsTrianglePartOfNgon(const struct FMeshDescription_TriangleID& TriangleID);
	bool IsPolygonValid(const struct FMeshDescription_PolygonID& PolygonID);
	bool IsPolygonGroupValid(const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(const struct FMeshDescription_EdgeID& EdgeID);
	bool IsEdgeInternalToPolygon(const struct FMeshDescription_EdgeID& EdgeID, const struct FMeshDescription_PolygonID& PolygonID);
	bool IsEdgeInternal(const struct FMeshDescription_EdgeID& EdgeID);
	void GetVertexVertexInstances(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_VertexInstanceID>* OutVertexInstanceIDs);
	struct FVector GetVertexPosition(const struct FMeshDescription_VertexID& VertexID);
	struct FMeshDescription_EdgeID GetVertexPairEdge(const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1);
	struct FMeshDescription_VertexID GetVertexInstanceVertex(const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	struct FMeshDescription_EdgeID GetVertexInstancePairEdge(const struct FMeshDescription_VertexInstanceID& VertexInstanceID0, const struct FMeshDescription_VertexInstanceID& VertexInstanceID1);
	struct FMeshDescription_VertexInstanceID GetVertexInstanceForTriangleVertex(const struct FMeshDescription_TriangleID& TriangleID, const struct FMeshDescription_VertexID& VertexID);
	struct FMeshDescription_VertexInstanceID GetVertexInstanceForPolygonVertex(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_VertexID& VertexID);
	void GetVertexInstanceConnectedTriangles(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_TriangleID>* OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedTriangles(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_TriangleID>* OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs);
	void GetVertexAdjacentVertices(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_VertexID>* OutAdjacentVertexIDs);
	void GetTriangleVertices(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_VertexID>* OutVertexIDs);
	void GetTriangleVertexInstances(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_VertexInstanceID>* OutVertexInstanceIDs);
	struct FMeshDescription_VertexInstanceID GetTriangleVertexInstance(const struct FMeshDescription_TriangleID& TriangleID, int Index);
	struct FMeshDescription_PolygonGroupID GetTrianglePolygonGroup(const struct FMeshDescription_TriangleID& TriangleID);
	struct FMeshDescription_PolygonID GetTrianglePolygon(const struct FMeshDescription_TriangleID& TriangleID);
	void GetTriangleEdges(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs);
	void GetTriangleAdjacentTriangles(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_TriangleID>* OutTriangleIDs);
	void GetPolygonVertices(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexID>* OutVertexIDs);
	void GetPolygonVertexInstances(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexInstanceID>* OutVertexInstanceIDs);
	void GetPolygonTriangles(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_TriangleID>* OutTriangleIDs);
	struct FMeshDescription_PolygonGroupID GetPolygonPolygonGroup(const struct FMeshDescription_PolygonID& PolygonID);
	void GetPolygonPerimeterEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs);
	void GetPolygonInternalEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs);
	void GetPolygonGroupPolygons(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_PolygonID>* OutPolygonIDs);
	void GetPolygonAdjacentPolygons(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_PolygonID>* OutPolygonIDs);
	int GetNumVertexVertexInstances(const struct FMeshDescription_VertexID& VertexID);
	int GetNumVertexInstanceConnectedTriangles(const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	int GetNumVertexInstanceConnectedPolygons(const struct FMeshDescription_VertexInstanceID& VertexInstanceID);
	int GetNumVertexConnectedTriangles(const struct FMeshDescription_VertexID& VertexID);
	int GetNumVertexConnectedPolygons(const struct FMeshDescription_VertexID& VertexID);
	int GetNumVertexConnectedEdges(const struct FMeshDescription_VertexID& VertexID);
	int GetNumPolygonVertices(const struct FMeshDescription_PolygonID& PolygonID);
	int GetNumPolygonTriangles(const struct FMeshDescription_PolygonID& PolygonID);
	int GetNumPolygonInternalEdges(const struct FMeshDescription_PolygonID& PolygonID);
	int GetNumPolygonGroupPolygons(const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	int GetNumEdgeConnectedTriangles(const struct FMeshDescription_EdgeID& EdgeID);
	int GetNumEdgeConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID);
	void GetEdgeVertices(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_VertexID>* OutVertexIDs);
	struct FMeshDescription_VertexID GetEdgeVertex(const struct FMeshDescription_EdgeID& EdgeID, int VertexNumber);
	void GetEdgeConnectedTriangles(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_TriangleID>* OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_VertexID>* OrphanedVertices);
	void DeleteVertex(const struct FMeshDescription_VertexID& VertexID);
	void DeleteTriangle(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_EdgeID>* OrphanedEdges, TArray<struct FMeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct FMeshDescription_PolygonGroupID>* OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	void DeletePolygon(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OrphanedEdges, TArray<struct FMeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct FMeshDescription_PolygonGroupID>* OrphanedPolygonGroups);
	void DeleteEdge(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_VertexID>* OrphanedVertices);
	void CreateVertexWithID(const struct FMeshDescription_VertexID& VertexID);
	void CreateVertexInstanceWithID(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, const struct FMeshDescription_VertexID& VertexID);
	struct FMeshDescription_VertexInstanceID CreateVertexInstance(const struct FMeshDescription_VertexID& VertexID);
	struct FMeshDescription_VertexID CreateVertex();
	void CreateTriangleWithID(const struct FMeshDescription_TriangleID& TriangleID, const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs);
	struct FMeshDescription_TriangleID CreateTriangle(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs);
	void CreatePolygonWithID(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs);
	void CreatePolygonGroupWithID(const struct FMeshDescription_PolygonGroupID& PolygonGroupID);
	struct FMeshDescription_PolygonGroupID CreatePolygonGroup();
	struct FMeshDescription_PolygonID CreatePolygon(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs);
	void CreateEdgeWithID(const struct FMeshDescription_EdgeID& EdgeID, const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1);
	struct FMeshDescription_EdgeID CreateEdge(const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1);
	void ComputePolygonTriangulation(const struct FMeshDescription_PolygonID& PolygonID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
