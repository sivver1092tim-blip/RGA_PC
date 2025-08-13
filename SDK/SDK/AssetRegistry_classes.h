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

// Class AssetRegistry.AssetRegistryImpl
// 0x0750 (0x0778 - 0x0028)
class UAssetRegistry_AssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x750];                                     // 0x0028(0x0750) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		if (!ptr)
			ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry_AssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		if (!ptr)
			ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}


	struct FSoftObjectPath STATIC_ToSoftObjectPath(const struct FAssetRegistry_AssetData& InAssetData);
	struct FAssetRegistry_ARFilter STATIC_SetFilterTagsAndValues(const struct FAssetRegistry_ARFilter& InFilter, TArray<struct FAssetRegistry_TagAndValue> InTagsAndValues);
	bool STATIC_IsValid(const struct FAssetRegistry_AssetData& InAssetData);
	bool STATIC_IsUAsset(const struct FAssetRegistry_AssetData& InAssetData);
	bool STATIC_IsRedirector(const struct FAssetRegistry_AssetData& InAssetData);
	bool STATIC_IsAssetLoaded(const struct FAssetRegistry_AssetData& InAssetData);
	bool STATIC_GetTagValue(const struct FAssetRegistry_AssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);
	struct FString STATIC_GetFullName(const struct FAssetRegistry_AssetData& InAssetData);
	struct FString STATIC_GetExportTextName(const struct FAssetRegistry_AssetData& InAssetData);
	class UClass* STATIC_GetClass(const struct FAssetRegistry_AssetData& InAssetData);
	TScriptInterface<class UAssetRegistry_AssetRegistry> STATIC_GetAssetRegistry();
	class UObject* STATIC_GetAsset(const struct FAssetRegistry_AssetData& InAssetData);
	struct FAssetRegistry_AssetData STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry_AssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		if (!ptr)
			ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}


	void UseFilterToExcludeAssets(const struct FAssetRegistry_ARFilter& Filter, TArray<struct FAssetRegistry_AssetData>* AssetDataList);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan);
	void ScanModifiedAssetFiles(TArray<struct FString> InFilePaths);
	void ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(const struct FAssetRegistry_ARFilter& Filter, TArray<struct FAssetRegistry_AssetData>* AssetDataList);
	void PrioritizeSearchPath(const struct FString& PathToPrioritize);
	bool K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistry_AssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers);
	bool K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistry_AssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies);
	bool IsLoadingAssets();
	bool HasAssets(const struct FName& PackagePath, bool bRecursive);
	void GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);
	bool GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetRegistry_AssetData>* OutAssetData);
	bool GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetRegistry_AssetData>* OutAssetData);
	bool GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetRegistry_AssetData>* OutAssetData);
	bool GetAssets(const struct FAssetRegistry_ARFilter& Filter, TArray<struct FAssetRegistry_AssetData>* OutAssetData);
	struct FAssetRegistry_AssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<struct FString>* OutPathList);
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetRegistry_AssetData>* OutAssetData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
