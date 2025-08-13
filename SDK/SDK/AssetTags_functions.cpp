
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

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 AssetPtr                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTags_AssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr");

	UAssetTags_AssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params params;
	params.AssetPtr = AssetPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAssetRegistry_AssetData AssetData                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTags_AssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetRegistry_AssetData& AssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData");

	UAssetTags_AssetTagsSubsystem_GetCollectionsContainingAssetData_Params params;
	params.AssetData = AssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AssetPathName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTags_AssetTagsSubsystem::GetCollectionsContainingAsset(const struct FName& AssetPathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset");

	UAssetTags_AssetTagsSubsystem_GetCollectionsContainingAsset_Params params;
	params.AssetPathName = AssetPathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTags_AssetTagsSubsystem::GetCollections()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollections");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollections");

	UAssetTags_AssetTagsSubsystem_GetCollections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetRegistry_AssetData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAssetRegistry_AssetData> UAssetTags_AssetTagsSubsystem::GetAssetsInCollection(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection");

	UAssetTags_AssetTagsSubsystem_GetAssetsInCollection_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetTags_AssetTagsSubsystem::CollectionExists(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.CollectionExists");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.CollectionExists");

	UAssetTags_AssetTagsSubsystem_CollectionExists_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
