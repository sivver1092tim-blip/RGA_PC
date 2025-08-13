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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UProceduralMeshComponent_KismetProceduralMeshLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}


	void STATIC_SliceProceduralMesh(class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, FProceduralMeshComponent_ProceduralMeshComponent_EProcMeshSliceCapOption CapOption, class UEngine_MaterialInterface* CapMaterial, class UProceduralMeshComponent_ProceduralMeshComponent** OutOtherHalfProcMesh);
	void STATIC_GetSectionFromStaticMesh(class UEngine_StaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents);
	void STATIC_GetSectionFromProceduralMesh(class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents);
	void STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents);
	void STATIC_CreateGridMeshWelded(int NumX, int NumY, float GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs);
	void STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	void STATIC_CreateGridMeshSplit(int NumX, int NumY, float GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s);
	void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UEngine_StaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent_ProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void STATIC_ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles);
	void STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents);
};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (0x0470 - 0x0400)
class UProceduralMeshComponent_ProceduralMeshComponent : public UEngine_MeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	bool                                               bUseComplexAsSimpleCollision;                             // 0x0408(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x0409(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	class UEngine_BodySetup*                           ProcMeshBodySetup;                                        // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProceduralMeshComponent_ProcMeshSection> ProcMeshSections;                                         // 0x0418(0x0010) (ZeroConstructor)
	TArray<struct FEngine_KConvexElem>                 CollisionConvexElems;                                     // 0x0428(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0438(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<class UEngine_BodySetup*>                   AsyncBodySetupQueue;                                      // 0x0458(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}


	void UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents);
	void UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents);
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int SectionIndex);
	int GetNumSections();
	void CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents, bool bCreateCollision);
	void CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents, bool bCreateCollision);
	void ClearMeshSection(int SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
