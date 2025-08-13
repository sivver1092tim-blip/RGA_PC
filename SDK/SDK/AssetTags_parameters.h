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

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
struct UAssetTags_AssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params
{
	class UObject*                                     AssetPtr;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
struct UAssetTags_AssetTagsSubsystem_GetCollectionsContainingAssetData_Params
{
	struct FAssetRegistry_AssetData                    AssetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
struct UAssetTags_AssetTagsSubsystem_GetCollectionsContainingAsset_Params
{
	struct FName                                       AssetPathName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetCollections
struct UAssetTags_AssetTagsSubsystem_GetCollections_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
struct UAssetTags_AssetTagsSubsystem_GetAssetsInCollection_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetRegistry_AssetData>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.CollectionExists
struct UAssetTags_AssetTagsSubsystem_CollectionExists_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
