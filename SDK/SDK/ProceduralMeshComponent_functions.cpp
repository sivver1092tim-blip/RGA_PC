
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

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 PlanePosition                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlaneNormal                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreateOtherHalf               (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent_ProceduralMeshComponent* OutOtherHalfProcMesh           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FProceduralMeshComponent_ProceduralMeshComponent_EProcMeshSliceCapOption CapOption                      (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_MaterialInterface* CapMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_SliceProceduralMesh(class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, FProceduralMeshComponent_ProceduralMeshComponent_EProcMeshSliceCapOption CapOption, class UEngine_MaterialInterface* CapMaterial, class UProceduralMeshComponent_ProceduralMeshComponent** OutOtherHalfProcMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_SliceProceduralMesh_Params params;
	params.InProcMesh = InProcMesh;
	params.PlanePosition = PlanePosition;
	params.PlaneNormal = PlaneNormal;
	params.bCreateOtherHalf = bCreateOtherHalf;
	params.CapOption = CapOption;
	params.CapMaterial = CapMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UEngine_StaticMesh*      InMesh                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_GetSectionFromStaticMesh(class UEngine_StaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params params;
	params.InMesh = InMesh;
	params.LODIndex = LODIndex;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_GetSectionFromProceduralMesh(class UProceduralMeshComponent_ProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params params;
	params.InProcMesh = InProcMesh;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 BoxRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_GenerateBoxMesh_Params params;
	params.BoxRadius = BoxRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// float                          GridSpacing                    (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_CreateGridMeshWelded(int NumX, int NumY, float GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_CreateGridMeshWelded_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.GridSpacing = GridSpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (UVs != nullptr)
		*UVs = params.UVs;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinding                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_CreateGridMeshTriangles_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UV1s                           (Parm, OutParm, ZeroConstructor)
// float                          GridSpacing                    (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_CreateGridMeshSplit(int NumX, int NumY, float GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_CreateGridMeshSplit_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.GridSpacing = GridSpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (UV1s != nullptr)
		*UV1s = params.UV1s;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEngine_StaticMeshComponent* StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent_ProceduralMeshComponent* ProcMeshComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_CopyProceduralMeshFromStaticMeshComponent(class UEngine_StaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent_ProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.LODIndex = LODIndex;
	params.ProcMeshComponent = ProcMeshComponent;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Vert0                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert1                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert2                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert3                          (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_ConvertQuadToTriangles_Params params;
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void UProceduralMeshComponent_KismetProceduralMeshLibrary::STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProceduralMeshComponent_ProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh");

	UProceduralMeshComponent_KismetProceduralMeshLibrary_CalculateTangentsForMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV1                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV2                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV3                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UProceduralMeshComponent_ProceduralMeshComponent::UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");

	UProceduralMeshComponent_ProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.UV2 = UV2;
	params.UV3 = UV3;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UProceduralMeshComponent_ProceduralMeshComponent::UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");

	UProceduralMeshComponent_ProceduralMeshComponent_UpdateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_ProceduralMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");

	UProceduralMeshComponent_ProceduralMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProceduralMeshComponent_ProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");

	UProceduralMeshComponent_ProceduralMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UProceduralMeshComponent_ProceduralMeshComponent::GetNumSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");

	UProceduralMeshComponent_ProceduralMeshComponent_GetNumSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV1                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV2                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV3                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_ProceduralMeshComponent::CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents, bool bCreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");

	UProceduralMeshComponent_ProceduralMeshComponent_CreateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.UV2 = UV2;
	params.UV3 = UV3;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_ProceduralMeshComponent::CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProceduralMeshComponent_ProcMeshTangent> Tangents, bool bCreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");

	UProceduralMeshComponent_ProceduralMeshComponent_CreateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralMeshComponent_ProceduralMeshComponent::ClearMeshSection(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");

	UProceduralMeshComponent_ProceduralMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)

void UProceduralMeshComponent_ProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");

	UProceduralMeshComponent_ProceduralMeshComponent_ClearCollisionConvexMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)

void UProceduralMeshComponent_ProceduralMeshComponent::ClearAllMeshSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");

	UProceduralMeshComponent_ProceduralMeshComponent_ClearAllMeshSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         ConvexVerts                    (Parm, ZeroConstructor)

void UProceduralMeshComponent_ProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");

	UProceduralMeshComponent_ProceduralMeshComponent_AddCollisionConvexMesh_Params params;
	params.ConvexVerts = ConvexVerts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
