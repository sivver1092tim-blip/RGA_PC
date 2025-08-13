
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

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FSoftObjectPath UAssetRegistry_AssetRegistryHelpers::STATIC_ToSoftObjectPath(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath");

	UAssetRegistry_AssetRegistryHelpers_ToSoftObjectPath_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_ARFilter InFilter                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAssetRegistry_TagAndValue> InTagsAndValues                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FAssetRegistry_ARFilter ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetRegistry_ARFilter UAssetRegistry_AssetRegistryHelpers::STATIC_SetFilterTagsAndValues(const struct FAssetRegistry_ARFilter& InFilter, TArray<struct FAssetRegistry_TagAndValue> InTagsAndValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues");

	UAssetRegistry_AssetRegistryHelpers_SetFilterTagsAndValues_Params params;
	params.InFilter = InFilter;
	params.InTagsAndValues = InTagsAndValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistryHelpers::STATIC_IsValid(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsValid");

	UAssetRegistry_AssetRegistryHelpers_IsValid_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistryHelpers::STATIC_IsUAsset(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsUAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsUAsset");

	UAssetRegistry_AssetRegistryHelpers_IsUAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistryHelpers::STATIC_IsRedirector(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsRedirector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsRedirector");

	UAssetRegistry_AssetRegistryHelpers_IsRedirector_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistryHelpers::STATIC_IsAssetLoaded(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded");

	UAssetRegistry_AssetRegistryHelpers_IsAssetLoaded_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   InTagName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 OutTagValue                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistryHelpers::STATIC_GetTagValue(const struct FAssetRegistry_AssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetTagValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetTagValue");

	UAssetRegistry_AssetRegistryHelpers_GetTagValue_Params params;
	params.InAssetData = InAssetData;
	params.InTagName = InTagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTagValue != nullptr)
		*OutTagValue = params.OutTagValue;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAssetRegistry_AssetRegistryHelpers::STATIC_GetFullName(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetFullName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetFullName");

	UAssetRegistry_AssetRegistryHelpers_GetFullName_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAssetRegistry_AssetRegistryHelpers::STATIC_GetExportTextName(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName");

	UAssetRegistry_AssetRegistryHelpers_GetExportTextName_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAssetRegistry_AssetRegistryHelpers::STATIC_GetClass(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetClass");

	UAssetRegistry_AssetRegistryHelpers_GetClass_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UAssetRegistry_AssetRegistry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UAssetRegistry_AssetRegistry> UAssetRegistry_AssetRegistryHelpers::STATIC_GetAssetRegistry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry");

	UAssetRegistry_AssetRegistryHelpers_GetAssetRegistry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetRegistry_AssetData InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetRegistry_AssetRegistryHelpers::STATIC_GetAsset(const struct FAssetRegistry_AssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAsset");

	UAssetRegistry_AssetRegistryHelpers_GetAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InAsset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBlueprintClass           (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetRegistry_AssetData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetRegistry_AssetData UAssetRegistry_AssetRegistryHelpers::STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData");

	UAssetRegistry_AssetRegistryHelpers_CreateAssetData_Params params;
	params.InAsset = InAsset;
	params.bAllowBlueprintClass = bAllowBlueprintClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetRegistry_AssetData> AssetDataList                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FAssetRegistry_ARFilter Filter                         (ConstParm, Parm, OutParm, ReferenceParm)

void UAssetRegistry_AssetRegistry::UseFilterToExcludeAssets(const struct FAssetRegistry_ARFilter& Filter, TArray<struct FAssetRegistry_AssetData>* AssetDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets");

	UAssetRegistry_AssetRegistry_UseFilterToExcludeAssets_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSynchronousSearch             (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry_AssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.SearchAllAssets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.SearchAllAssets");

	UAssetRegistry_AssetRegistry_SearchAllAssets_Params params;
	params.bSynchronousSearch = bSynchronousSearch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InPaths                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForceRescan                   (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry_AssetRegistry::ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous");

	UAssetRegistry_AssetRegistry_ScanPathsSynchronous_Params params;
	params.InPaths = InPaths;
	params.bForceRescan = bForceRescan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAssetRegistry_AssetRegistry::ScanModifiedAssetFiles(TArray<struct FString> InFilePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles");

	UAssetRegistry_AssetRegistry_ScanModifiedAssetFiles_Params params;
	params.InFilePaths = InFilePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForceRescan                   (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry_AssetRegistry::ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous");

	UAssetRegistry_AssetRegistry_ScanFilesSynchronous_Params params;
	params.InFilePaths = InFilePaths;
	params.bForceRescan = bForceRescan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetRegistry_AssetData> AssetDataList                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FAssetRegistry_ARFilter Filter                         (ConstParm, Parm, OutParm, ReferenceParm)

void UAssetRegistry_AssetRegistry::RunAssetsThroughFilter(const struct FAssetRegistry_ARFilter& Filter, TArray<struct FAssetRegistry_AssetData>* AssetDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter");

	UAssetRegistry_AssetRegistry_RunAssetsThroughFilter_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PathToPrioritize               (Parm, ZeroConstructor)

void UAssetRegistry_AssetRegistry::PrioritizeSearchPath(const struct FString& PathToPrioritize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath");

	UAssetRegistry_AssetRegistry_PrioritizeSearchPath_Params params;
	params.PathToPrioritize = PathToPrioritize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetRegistry_AssetRegistryDependencyOptions ReferenceOptions               (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FName>           OutReferencers                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistry_AssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetReferencers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetReferencers");

	UAssetRegistry_AssetRegistry_K2_GetReferencers_Params params;
	params.PackageName = PackageName;
	params.ReferenceOptions = ReferenceOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReferencers != nullptr)
		*OutReferencers = params.OutReferencers;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetRegistry_AssetRegistryDependencyOptions DependencyOptions              (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FName>           OutDependencies                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistry_AssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetDependencies");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetDependencies");

	UAssetRegistry_AssetRegistry_K2_GetDependencies_Params params;
	params.PackageName = PackageName;
	params.DependencyOptions = DependencyOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDependencies != nullptr)
		*OutDependencies = params.OutDependencies;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::IsLoadingAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsLoadingAssets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsLoadingAssets");

	UAssetRegistry_AssetRegistry_IsLoadingAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackagePath                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRecursive                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.HasAssets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.HasAssets");

	UAssetRegistry_AssetRegistry_HasAssets_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FString                 InBasePath                     (Parm, ZeroConstructor)
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor)
// bool                           bInRecurse                     (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry_AssetRegistry::GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetSubPaths");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetSubPaths");

	UAssetRegistry_AssetRegistry_GetSubPaths_Params params;
	params.InBasePath = InBasePath;
	params.bInRecurse = bInRecurse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackagePath                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetRegistry_AssetData> OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetRegistry_AssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPath");

	UAssetRegistry_AssetRegistry_GetAssetsByPath_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetRegistry_AssetData> OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetRegistry_AssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName");

	UAssetRegistry_AssetRegistry_GetAssetsByPackageName_Params params;
	params.PackageName = PackageName;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   ClassName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetRegistry_AssetData> OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bSearchSubClasses              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetRegistry_AssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByClass");

	UAssetRegistry_AssetRegistry_GetAssetsByClass_Params params;
	params.ClassName = ClassName;
	params.bSearchSubClasses = bSearchSubClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FAssetRegistry_ARFilter Filter                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAssetRegistry_AssetData> OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::GetAssets(const struct FAssetRegistry_ARFilter& Filter, TArray<struct FAssetRegistry_AssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssets");

	UAssetRegistry_AssetRegistry_GetAssets_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   ObjectPath                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetRegistry_AssetData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetRegistry_AssetData UAssetRegistry_AssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath");

	UAssetRegistry_AssetRegistry_GetAssetByObjectPath_Params params;
	params.ObjectPath = ObjectPath;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor)

void UAssetRegistry_AssetRegistry::GetAllCachedPaths(TArray<struct FString>* OutPathList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllCachedPaths");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllCachedPaths");

	UAssetRegistry_AssetRegistry_GetAllCachedPaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetRegistry_AssetData> OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry_AssetRegistry::GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetRegistry_AssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllAssets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllAssets");

	UAssetRegistry_AssetRegistry_GetAllAssets_Params params;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
