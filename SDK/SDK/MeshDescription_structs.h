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

// Enum MeshDescription.EComputeNTBsOptions
enum class FMeshDescription_MeshDescription_EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0004
struct FMeshDescription_ElementID
{
	int                                                IDValue;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
struct FMeshDescription_VertexID : public FMeshDescription_ElementID
{

};

// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
struct FMeshDescription_PolygonID : public FMeshDescription_ElementID
{

};

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
struct FMeshDescription_VertexInstanceID : public FMeshDescription_ElementID
{

};

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
struct FMeshDescription_PolygonGroupID : public FMeshDescription_ElementID
{

};

// ScriptStruct MeshDescription.TriangleID
// 0x0000 (0x0004 - 0x0004)
struct FMeshDescription_TriangleID : public FMeshDescription_ElementID
{

};

// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
struct FMeshDescription_EdgeID : public FMeshDescription_ElementID
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
