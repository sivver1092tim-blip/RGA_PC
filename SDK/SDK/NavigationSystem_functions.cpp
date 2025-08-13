
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

// Function NavigationSystem.NavModifierVolume.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationSystem_NavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	ANavigationSystem_NavModifierVolume_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                    Bounds                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OldArea                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewArea                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplaceLinks                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationSystem_RecastNavMesh::K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	ANavigationSystem_RecastNavMesh_K2_ReplaceAreaInTileBounds_Params params;
	params.Bounds = Bounds;
	params.OldArea = OldArea;
	params.NewArea = NewArea;
	params.ReplaceLinks = ReplaceLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationPath::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	UNavigationSystem_NavigationPath_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationPath::IsStringPulled()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	UNavigationSystem_NavigationPath_IsStringPulled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationPath::IsPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	UNavigationSystem_NavigationPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavigationSystem_NavigationPath::GetPathLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	UNavigationSystem_NavigationPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavigationSystem_NavigationPath::GetPathCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	UNavigationSystem_NavigationPath_GetPathCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNavigationSystem_NavigationPath::GetDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	UNavigationSystem_NavigationPath_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FEngine_Engine_ENavigationOptionFlag> DoRecalculation                (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<FEngine_Engine_ENavigationOptionFlag> DoRecalculation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	UNavigationSystem_NavigationPath_EnableRecalculationOnInvalidation_Params params;
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bShouldDrawDebugData           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PathColor                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	UNavigationSystem_NavigationPath_EnableDebugDrawing_Params params;
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Invoker                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::UnregisterNavigationInvoker(class AEngine_Actor* Invoker)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	UNavigationSystem_NavigationSystemV1_UnregisterNavigationInvoker_Params params;
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AEngine_Controller*      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::STATIC_SimpleMoveToLocation(class AEngine_Controller* Controller, const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	UNavigationSystem_NavigationSystemV1_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Controller*      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::STATIC_SimpleMoveToActor(class AEngine_Controller* Controller, class AEngine_Actor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	UNavigationSystem_NavigationSystemV1_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxNumberOfJobs                (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystem_NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params;
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FEngine_Engine_ENavDataGatheringModeConfig NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::SetGeometryGatheringMode(FEngine_Engine_ENavDataGatheringModeConfig NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	UNavigationSystem_NavigationSystemV1_SetGeometryGatheringMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)

void UNavigationSystem_NavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystem_NavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           Invoker                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileGenerationRadius           (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileRemovalRadius              (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::RegisterNavigationInvoker(class AEngine_Actor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	UNavigationSystem_NavigationSystemV1_RegisterNavigationInvoker_Params params;
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavigationSystem_NavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	UNavigationSystem_NavigationSystemV1_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ANavigationSystem_NavMeshBoundsVolume* NavVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavigationSystemV1::OnNavigationBoundsUpdated(class ANavigationSystem_NavMeshBoundsVolume* NavVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	UNavigationSystem_NavigationSystemV1_OnNavigationBoundsUpdated_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RayStart                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RayEnd                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Controller*      Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AEngine_Controller* Querier, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	UNavigationSystem_NavigationSystemV1_NavigationRaycast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OldArea                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewArea                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	UNavigationSystem_NavigationSystemV1_K2_ReplaceAreaInOctreeData_Params params;
	params.Object = Object;
	params.OldArea = OldArea;
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ProjectedLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	UNavigationSystem_NavigationSystemV1_K2_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	UNavigationSystem_NavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	UNavigationSystem_NavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	UNavigationSystem_NavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	UNavigationSystem_NavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystem_NavigationSystemV1::STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	UNavigationSystem_NavigationSystemV1_IsNavigationBeingBuilt_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavigationSystem_NavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	UNavigationSystem_NavigationSystemV1_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavigationSystem_NavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	UNavigationSystem_NavigationSystemV1_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PathLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FEngine_Engine_ENavigationQueryResult> UNavigationSystem_NavigationSystemV1::STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, float* PathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	UNavigationSystem_NavigationSystemV1_GetPathLength_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PathCost                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationSystem_NavigationData* NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<FEngine_Engine_ENavigationQueryResult> UNavigationSystem_NavigationSystemV1::STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, float* PathCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	UNavigationSystem_NavigationSystemV1_GetPathCost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationSystem_NavigationSystemV1* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationSystem_NavigationSystemV1* UNavigationSystem_NavigationSystemV1::STATIC_GetNavigationSystem(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	UNavigationSystem_NavigationSystemV1_GetNavigationSystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AEngine_Actor*           PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationSystem_NavigationPath* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationSystem_NavigationPath* UNavigationSystem_NavigationSystemV1::STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AEngine_Actor* PathfindingContext, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	UNavigationSystem_NavigationSystemV1_FindPathToLocationSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AEngine_Actor*           GoalActor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TetherDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationSystem_NavigationPath* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationSystem_NavigationPath* UNavigationSystem_NavigationSystemV1::STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AEngine_Actor* GoalActor, float TetherDistance, class AEngine_Actor* PathfindingContext, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	UNavigationSystem_NavigationSystemV1_FindPathToActorSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRelevant                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	UNavigationSystem_NavRelevantComponent_SetNavigationRelevancy_Params params;
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystem_NavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	UNavigationSystem_NavModifierComponent_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
