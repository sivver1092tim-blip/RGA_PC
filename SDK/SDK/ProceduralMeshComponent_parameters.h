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

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_SliceProceduralMesh_Params
{
	class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PlanePosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateOtherHalf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UProceduralMeshComponent_ProceduralMeshComponent* OutOtherHalfProcMesh;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FProceduralMeshComponent_ProceduralMeshComponent_EProcMeshSliceCapOption CapOption;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   CapMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
	class UEngine_StaticMesh*                          InMesh;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
{
	class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
	struct FVector                                     BoxRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_CreateGridMeshWelded_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	float                                              GridSpacing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWinding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_CreateGridMeshSplit_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UV1s;                                                     // (Parm, OutParm, ZeroConstructor)
	float                                              GridSpacing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
	class UEngine_StaticMeshComponent*                 StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UProceduralMeshComponent_ProceduralMeshComponent* ProcMeshComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Vert0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vert1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vert2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vert3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct UProceduralMeshComponent_KismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UVs;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UProceduralMeshComponent_ProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV1;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV2;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV3;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
struct UProceduralMeshComponent_ProceduralMeshComponent_UpdateMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FColor>                              VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
struct UProceduralMeshComponent_ProceduralMeshComponent_SetMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
struct UProceduralMeshComponent_ProceduralMeshComponent_IsMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
struct UProceduralMeshComponent_ProceduralMeshComponent_GetNumSections_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
struct UProceduralMeshComponent_ProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV1;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV2;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV3;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
struct UProceduralMeshComponent_ProceduralMeshComponent_CreateMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FColor>                              VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
struct UProceduralMeshComponent_ProceduralMeshComponent_ClearMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
struct UProceduralMeshComponent_ProceduralMeshComponent_ClearCollisionConvexMeshes_Params
{
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
struct UProceduralMeshComponent_ProceduralMeshComponent_ClearAllMeshSections_Params
{
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
struct UProceduralMeshComponent_ProceduralMeshComponent_AddCollisionConvexMesh_Params
{
	TArray<struct FVector>                             ConvexVerts;                                              // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
