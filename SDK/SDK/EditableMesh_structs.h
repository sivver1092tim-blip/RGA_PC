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

// Enum EditableMesh.ETriangleTessellationMode
enum class FEditableMesh_EditableMesh_ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles = 0,
	ETriangleTessellationMode__FourTriangles = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2
};


// Enum EditableMesh.EInsetPolygonsMode
enum class FEditableMesh_EditableMesh_EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All        = 0,
	EInsetPolygonsMode__CenterPolygonOnly = 1,
	EInsetPolygonsMode__SidePolygonsOnly = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3
};


// Enum EditableMesh.EPolygonEdgeHardness
enum class FEditableMesh_EditableMesh_EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft = 0,
	EPolygonEdgeHardness__NewEdgesHard = 1,
	EPolygonEdgeHardness__AllEdgesSoft = 2,
	EPolygonEdgeHardness__AllEdgesHard = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4
};


// Enum EditableMesh.EMeshElementAttributeType
enum class FEditableMesh_EditableMesh_EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None = 0,
	EMeshElementAttributeType__FVector4 = 1,
	EMeshElementAttributeType__FVector = 2,
	EMeshElementAttributeType__FVector2D = 3,
	EMeshElementAttributeType__Float = 4,
	EMeshElementAttributeType__Int = 5,
	EMeshElementAttributeType__Bool = 6,
	EMeshElementAttributeType__FName = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8
};


// Enum EditableMesh.EMeshTopologyChange
enum class FEditableMesh_EditableMesh_EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange = 0,
	EMeshTopologyChange__TopologyChange = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX = 2
};


// Enum EditableMesh.EMeshModificationType
enum class FEditableMesh_EditableMesh_EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim = 0,
	EMeshModificationType__Interim = 1,
	EMeshModificationType__Final   = 2,
	EMeshModificationType__EMeshModificationType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EditableMesh.VertexPair
// 0x0008
struct FEditableMesh_VertexPair
{
	struct FMeshDescription_VertexID                   VertexID0;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshDescription_VertexID                   VertexID1;                                                // 0x0004(0x0004) (BlueprintVisible)
};

// ScriptStruct EditableMesh.PolygonToSplit
// 0x0018
struct FEditableMesh_PolygonToSplit
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FEditableMesh_VertexPair>            VertexPairsToSplitAt;                                     // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0050
struct FEditableMesh_MeshElementAttributeValue
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x0060
struct FEditableMesh_MeshElementAttributeData
{
	struct FName                                       AttributeName;                                            // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttributeIndex;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FEditableMesh_MeshElementAttributeValue     AttributeValue;                                           // 0x0010(0x0050) (BlueprintVisible)
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x0010
struct FEditableMesh_MeshElementAttributeList
{
	TArray<struct FEditableMesh_MeshElementAttributeData> Attributes;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.AttributesForVertex
// 0x0018
struct FEditableMesh_AttributesForVertex
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEditableMesh_MeshElementAttributeList      VertexAttributes;                                         // 0x0008(0x0010) (BlueprintVisible)
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x0018
struct FEditableMesh_AttributesForVertexInstance
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEditableMesh_MeshElementAttributeList      VertexInstanceAttributes;                                 // 0x0008(0x0010) (BlueprintVisible)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x0010
struct FEditableMesh_VertexAttributesForPolygonHole
{
	TArray<struct FEditableMesh_MeshElementAttributeList> VertexAttributeList;                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x0028
struct FEditableMesh_VertexAttributesForPolygon
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FEditableMesh_MeshElementAttributeList> PerimeterVertexAttributeLists;                            // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FEditableMesh_VertexAttributesForPolygonHole> VertexAttributeListsForEachHole;                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.AttributesForEdge
// 0x0018
struct FEditableMesh_AttributesForEdge
{
	struct FMeshDescription_EdgeID                     EdgeID;                                                   // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEditableMesh_MeshElementAttributeList      EdgeAttributes;                                           // 0x0008(0x0010) (BlueprintVisible)
};

// ScriptStruct EditableMesh.VertexToMove
// 0x0010
struct FEditableMesh_VertexToMove
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	struct FVector                                     NewVertexPosition;                                        // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// 0x0034
struct FEditableMesh_SubdividedQuadVertex
{
	int                                                VertexPositionIndex;                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureCoordinate0;                                       // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureCoordinate1;                                       // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VertexNormal;                                             // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VertexTangent;                                            // 0x0024(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VertexBinormalSign;                                       // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EditableMesh.SubdividedQuad
// 0x00D0
struct FEditableMesh_SubdividedQuad
{
	struct FEditableMesh_SubdividedQuadVertex          QuadVertex0;                                              // 0x0000(0x0034) (BlueprintVisible)
	struct FEditableMesh_SubdividedQuadVertex          QuadVertex1;                                              // 0x0034(0x0034) (BlueprintVisible)
	struct FEditableMesh_SubdividedQuadVertex          QuadVertex2;                                              // 0x0068(0x0034) (BlueprintVisible)
	struct FEditableMesh_SubdividedQuadVertex          QuadVertex3;                                              // 0x009C(0x0034) (BlueprintVisible)
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x0010
struct FEditableMesh_SubdivisionLimitSection
{
	TArray<struct FEditableMesh_SubdividedQuad>        SubdividedQuads;                                          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x000C
struct FEditableMesh_SubdividedWireEdge
{
	int                                                EdgeVertex0PositionIndex;                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EdgeVertex1PositionIndex;                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x0030
struct FEditableMesh_SubdivisionLimitData
{
	TArray<struct FVector>                             VertexPositions;                                          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FEditableMesh_SubdivisionLimitSection> Sections;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FEditableMesh_SubdividedWireEdge>    SubdividedWireEdges;                                      // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.VertexToCreate
// 0x0018
struct FEditableMesh_VertexToCreate
{
	struct FEditableMesh_MeshElementAttributeList      VertexAttributes;                                         // 0x0000(0x0010) (BlueprintVisible)
	struct FMeshDescription_VertexID                   OriginalVertexID;                                         // 0x0010(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x0020
struct FEditableMesh_VertexInstanceToCreate
{
	struct FMeshDescription_VertexID                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEditableMesh_MeshElementAttributeList      VertexInstanceAttributes;                                 // 0x0008(0x0010) (BlueprintVisible)
	struct FMeshDescription_VertexInstanceID           OriginalVertexInstanceID;                                 // 0x0018(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAndAttributes
// 0x0018
struct FEditableMesh_VertexAndAttributes
{
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshDescription_VertexID                   VertexID;                                                 // 0x0004(0x0004) (BlueprintVisible)
	struct FEditableMesh_MeshElementAttributeList      PolygonVertexAttributes;                                  // 0x0008(0x0010) (BlueprintVisible)
};

// ScriptStruct EditableMesh.PolygonToCreate
// 0x0020
struct FEditableMesh_PolygonToCreate
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FEditableMesh_VertexAndAttributes>   PerimeterVertices;                                        // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMeshDescription_PolygonID                  OriginalPolygonID;                                        // 0x0018(0x0004) (BlueprintVisible)
	FEditableMesh_EditableMesh_EPolygonEdgeHardness    PolygonEdgeHardness;                                      // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x0018
struct FEditableMesh_PolygonGroupToCreate
{
	struct FEditableMesh_MeshElementAttributeList      PolygonGroupAttributes;                                   // 0x0000(0x0010) (BlueprintVisible)
	struct FMeshDescription_PolygonGroupID             OriginalPolygonGroupID;                                   // 0x0010(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.EdgeToCreate
// 0x0020
struct FEditableMesh_EdgeToCreate
{
	struct FMeshDescription_VertexID                   VertexID0;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshDescription_VertexID                   VertexID1;                                                // 0x0004(0x0004) (BlueprintVisible)
	struct FEditableMesh_MeshElementAttributeList      EdgeAttributes;                                           // 0x0008(0x0010) (BlueprintVisible)
	struct FMeshDescription_EdgeID                     OriginalEdgeID;                                           // 0x0018(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x0008
struct FEditableMesh_VertexIndexAndInstanceID
{
	int                                                ContourIndex;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMeshDescription_VertexInstanceID           VertexInstanceID;                                         // 0x0004(0x0004) (BlueprintVisible)
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x0010
struct FEditableMesh_VertexInstancesForPolygonHole
{
	TArray<struct FEditableMesh_VertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x0028
struct FEditableMesh_ChangeVertexInstancesForPolygon
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FEditableMesh_VertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;                     // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FEditableMesh_VertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;                   // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x0008
struct FEditableMesh_PolygonGroupForPolygon
{
	struct FMeshDescription_PolygonID                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // 0x0004(0x0004) (BlueprintVisible)
};

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// 0x0048
struct FEditableMesh_AdaptorPolygon2Group
{
	uint32_t                                           RenderingSectionIndex;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTriangles;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x000C(0x003C) MISSED OFFSET
};

// ScriptStruct EditableMesh.AdaptorTriangleID
// 0x0000 (0x0004 - 0x0004)
struct FEditableMesh_AdaptorTriangleID : public FMeshDescription_ElementID
{

};

// ScriptStruct EditableMesh.AdaptorPolygon
// 0x0018
struct FEditableMesh_AdaptorPolygon
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FEditableMesh_AdaptorTriangleID>     TriangulatedPolygonTriangleIndices;                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x0048
struct FEditableMesh_RenderingPolygonGroup
{
	uint32_t                                           RenderingSectionIndex;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTriangles;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x000C(0x003C) MISSED OFFSET
};

// ScriptStruct EditableMesh.RenderingPolygon
// 0x0018
struct FEditableMesh_RenderingPolygon
{
	struct FMeshDescription_PolygonGroupID             PolygonGroupID;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMeshDescription_TriangleID>         TriangulatedPolygonTriangleIndices;                       // 0x0008(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
