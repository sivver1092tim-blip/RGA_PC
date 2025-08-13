#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class FProceduralMeshComponent_ProceduralMeshComponent_EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProceduralMeshComponent_ProcMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x004C
struct FProceduralMeshComponent_ProcMeshVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProceduralMeshComponent_ProcMeshTangent    Tangent;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible)
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProceduralMeshComponent_ProcMeshSection
{
	TArray<struct FProceduralMeshComponent_ProcMeshVertex> ProcVertexBuffer;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   ProcIndexBuffer;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                          // 0x0020(0x001C) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSectionVisible;                                          // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
