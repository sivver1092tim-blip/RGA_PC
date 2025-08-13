
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

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanes_MagicLeapPlanesComponent::RequestPlanesAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync");

	UMagicLeapPlanes_MagicLeapPlanesComponent_RequestPlanesAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> OutReorderedFlags              (Parm, OutParm, ZeroConstructor)

void UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_ReorderPlaneFlags(TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params params;
	params.InPriority = InPriority;
	params.InFlagsToReorder = InFlagsToReorder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = params.OutReorderedFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> OutFlags                       (Parm, OutParm, ZeroConstructor)

void UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_RemoveFlagsNotInQuery(TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<FMagicLeapPlanes_MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params params;
	params.InQueryFlags = InQueryFlags;
	params.InResultFlags = InResultFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFlags != nullptr)
		*OutFlags = params.OutFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanes_MagicLeapPlanesQuery Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_PlanesQueryBeginAsync(const struct FMagicLeapPlanes_MagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params params;
	params.Query = Query;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           ContentActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMagicLeapPlanes_MagicLeapPlaneResult PlaneResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_GetContentScale(class AEngine_Actor* ContentActor, const struct FMagicLeapPlanes_MagicLeapPlaneResult& PlaneResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_GetContentScale_Params params;
	params.ContentActor = ContentActor;
	params.PlaneResult = PlaneResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary::STATIC_CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker");

	UMagicLeapPlanes_MagicLeapPlanesFunctionLibrary_CreateTracker_Params params;

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
