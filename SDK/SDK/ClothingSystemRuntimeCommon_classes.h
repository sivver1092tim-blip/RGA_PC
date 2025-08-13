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

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingSystemRuntimeCommon_ClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x0060 (0x00A8 - 0x0048)
class UClothingSystemRuntimeCommon_ClothingAssetCommon : public UClothingSystemRuntimeInterface_ClothingAssetBase
{
public:
	class UEngine_PhysicsAsset*                        PhysicsAsset;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClothingSystemRuntimeInterface_ClothConfigBase* ClothSimConfig;                                           // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
	TArray<class UClothingSystemRuntimeCommon_ClothLODDataBase*> ClothLODData;                                             // 0x0058(0x0010) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x0078(0x0010) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x0088(0x0010) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClothingSystemRuntimeCommon_ClothingAssetCustomData* CustomData;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothLODDataBase
// 0x0068 (0x0090 - 0x0028)
class UClothingSystemRuntimeCommon_ClothLODDataBase : public UObject
{
public:
	class UClothingSystemRuntimeInterface_ClothPhysicalMeshDataBase* PhysicalMeshData;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClothingSystemRuntimeInterface_ClothCollisionData CollisionData;                                            // 0x0030(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataBase");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
