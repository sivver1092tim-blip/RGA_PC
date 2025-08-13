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

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct UAssetRegistry_AssetRegistryHelpers_ToSoftObjectPath_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct UAssetRegistry_AssetRegistryHelpers_SetFilterTagsAndValues_Params
{
	struct FAssetRegistry_ARFilter                     InFilter;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FAssetRegistry_TagAndValue>          InTagsAndValues;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAssetRegistry_ARFilter                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.IsValid
struct UAssetRegistry_AssetRegistryHelpers_IsValid_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct UAssetRegistry_AssetRegistryHelpers_IsUAsset_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct UAssetRegistry_AssetRegistryHelpers_IsRedirector_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct UAssetRegistry_AssetRegistryHelpers_IsAssetLoaded_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct UAssetRegistry_AssetRegistryHelpers_GetTagValue_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InTagName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     OutTagValue;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct UAssetRegistry_AssetRegistryHelpers_GetFullName_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct UAssetRegistry_AssetRegistryHelpers_GetExportTextName_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetRegistry.AssetRegistryHelpers.GetClass
struct UAssetRegistry_AssetRegistryHelpers_GetClass_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct UAssetRegistry_AssetRegistryHelpers_GetAssetRegistry_Params
{
	TScriptInterface<class UAssetRegistry_AssetRegistry> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct UAssetRegistry_AssetRegistryHelpers_GetAsset_Params
{
	struct FAssetRegistry_AssetData                    InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct UAssetRegistry_AssetRegistryHelpers_CreateAssetData_Params
{
	class UObject*                                     InAsset;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBlueprintClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetRegistry_AssetData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct UAssetRegistry_AssetRegistry_UseFilterToExcludeAssets_Params
{
	TArray<struct FAssetRegistry_AssetData>            AssetDataList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAssetRegistry_ARFilter                     Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AssetRegistry.AssetRegistry.SearchAllAssets
struct UAssetRegistry_AssetRegistry_SearchAllAssets_Params
{
	bool                                               bSynchronousSearch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct UAssetRegistry_AssetRegistry_ScanPathsSynchronous_Params
{
	TArray<struct FString>                             InPaths;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForceRescan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct UAssetRegistry_AssetRegistry_ScanModifiedAssetFiles_Params
{
	TArray<struct FString>                             InFilePaths;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct UAssetRegistry_AssetRegistry_ScanFilesSynchronous_Params
{
	TArray<struct FString>                             InFilePaths;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForceRescan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct UAssetRegistry_AssetRegistry_RunAssetsThroughFilter_Params
{
	TArray<struct FAssetRegistry_AssetData>            AssetDataList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAssetRegistry_ARFilter                     Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct UAssetRegistry_AssetRegistry_PrioritizeSearchPath_Params
{
	struct FString                                     PathToPrioritize;                                         // (Parm, ZeroConstructor)
};

// Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct UAssetRegistry_AssetRegistry_K2_GetReferencers_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetRegistry_AssetRegistryDependencyOptions ReferenceOptions;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               OutReferencers;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct UAssetRegistry_AssetRegistry_K2_GetDependencies_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetRegistry_AssetRegistryDependencyOptions DependencyOptions;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               OutDependencies;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct UAssetRegistry_AssetRegistry_IsLoadingAssets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.HasAssets
struct UAssetRegistry_AssetRegistry_HasAssets_Params
{
	struct FName                                       PackagePath;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetSubPaths
struct UAssetRegistry_AssetRegistry_GetSubPaths_Params
{
	struct FString                                     InBasePath;                                               // (Parm, ZeroConstructor)
	TArray<struct FString>                             OutPathList;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bInRecurse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct UAssetRegistry_AssetRegistry_GetAssetsByPath_Params
{
	struct FName                                       PackagePath;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetRegistry_AssetData>            OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct UAssetRegistry_AssetRegistry_GetAssetsByPackageName_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetRegistry_AssetData>            OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct UAssetRegistry_AssetRegistry_GetAssetsByClass_Params
{
	struct FName                                       ClassName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetRegistry_AssetData>            OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bSearchSubClasses;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssets
struct UAssetRegistry_AssetRegistry_GetAssets_Params
{
	struct FAssetRegistry_ARFilter                     Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FAssetRegistry_AssetData>            OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct UAssetRegistry_AssetRegistry_GetAssetByObjectPath_Params
{
	struct FName                                       ObjectPath;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAssetRegistry_AssetData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct UAssetRegistry_AssetRegistry_GetAllCachedPaths_Params
{
	TArray<struct FString>                             OutPathList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AssetRegistry.AssetRegistry.GetAllAssets
struct UAssetRegistry_AssetRegistry_GetAllAssets_Params
{
	TArray<struct FAssetRegistry_AssetData>            OutAssetData;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
