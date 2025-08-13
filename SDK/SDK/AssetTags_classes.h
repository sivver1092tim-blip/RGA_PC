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

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTags_AssetTagsSubsystem : public UEngine_EngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		if (!ptr)
			ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		return ptr;
	}


	TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);
	TArray<struct FName> GetCollectionsContainingAssetData(const struct FAssetRegistry_AssetData& AssetData);
	TArray<struct FName> GetCollectionsContainingAsset(const struct FName& AssetPathName);
	TArray<struct FName> GetCollections();
	TArray<struct FAssetRegistry_AssetData> GetAssetsInCollection(const struct FName& Name);
	bool CollectionExists(const struct FName& Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
