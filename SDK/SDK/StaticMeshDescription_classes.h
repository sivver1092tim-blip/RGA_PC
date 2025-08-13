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

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000 (0x0390 - 0x0390)
class UStaticMeshDescription_StaticMeshDescription : public UMeshDescription_MeshDescriptionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StaticMeshDescription.StaticMeshDescription");
		if (!ptr)
			ptr = UObject::FindClass("Class StaticMeshDescription.StaticMeshDescription");
		return ptr;
	}


	void SetVertexInstanceUV(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex);
	void SetPolygonGroupMaterialSlotName(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, const struct FName& SlotName);
	struct FVector2D GetVertexInstanceUV(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, int UVIndex);
	void CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FMeshDescription_PolygonGroupID& PolygonGroup, struct FMeshDescription_PolygonID* PolygonID_PlusX, struct FMeshDescription_PolygonID* PolygonID_MinusX, struct FMeshDescription_PolygonID* PolygonID_PlusY, struct FMeshDescription_PolygonID* PolygonID_MinusY, struct FMeshDescription_PolygonID* PolygonID_PlusZ, struct FMeshDescription_PolygonID* PolygonID_MinusZ);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
