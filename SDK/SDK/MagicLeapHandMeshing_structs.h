#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
// 0x0028
struct FMagicLeapHandMeshing_MagicLeapHandMeshBlock
{
	int                                                IndexCount;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VertexCount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertex;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Index;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
// 0x0018
struct FMagicLeapHandMeshing_MagicLeapHandMesh
{
	int                                                Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DataCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMagicLeapHandMeshing_MagicLeapHandMeshBlock> Data;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
