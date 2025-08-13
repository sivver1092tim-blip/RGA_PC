
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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGeometryCollectionEngine_ChaosTrailingEventData> TrailingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FGeometryCollectionEngine_GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::SortTrailingEvents(FGeometryCollectionEngine_GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod, TArray<struct FGeometryCollectionEngine_ChaosTrailingEventData>* TrailingEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	UGeometryCollectionEngine_ChaosDestructionListener_SortTrailingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrailingEvents != nullptr)
		*TrailingEvents = params.TrailingEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGeometryCollectionEngine_ChaosCollisionEventData> CollisionEvents                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FGeometryCollectionEngine_GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::SortCollisionEvents(FGeometryCollectionEngine_GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod, TArray<struct FGeometryCollectionEngine_ChaosCollisionEventData>* CollisionEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	UGeometryCollectionEngine_ChaosDestructionListener_SortCollisionEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionEvents != nullptr)
		*CollisionEvents = params.CollisionEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGeometryCollectionEngine_ChaosBreakingEventData> BreakingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FGeometryCollectionEngine_GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::SortBreakingEvents(FGeometryCollectionEngine_GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod, TArray<struct FGeometryCollectionEngine_ChaosBreakingEventData>* BreakingEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	UGeometryCollectionEngine_ChaosDestructionListener_SortBreakingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakingEvents != nullptr)
		*BreakingEvents = params.BreakingEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometryCollectionEngine_ChaosTrailingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionEngine_ChaosDestructionListener::SetTrailingEventRequestSettings(const struct FGeometryCollectionEngine_ChaosTrailingEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	UGeometryCollectionEngine_ChaosDestructionListener_SetTrailingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	UGeometryCollectionEngine_ChaosDestructionListener_SetTrailingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometryCollectionEngine_ChaosCollisionEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionEngine_ChaosDestructionListener::SetCollisionEventRequestSettings(const struct FGeometryCollectionEngine_ChaosCollisionEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	UGeometryCollectionEngine_ChaosDestructionListener_SetCollisionEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	UGeometryCollectionEngine_ChaosDestructionListener_SetCollisionEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometryCollectionEngine_ChaosBreakingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionEngine_ChaosDestructionListener::SetBreakingEventRequestSettings(const struct FGeometryCollectionEngine_ChaosBreakingEventRequestSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	UGeometryCollectionEngine_ChaosDestructionListener_SetBreakingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	UGeometryCollectionEngine_ChaosDestructionListener_SetBreakingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionEngine_GeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionEngine_GeometryCollectionActor* GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	UGeometryCollectionEngine_ChaosDestructionListener_RemoveGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverEngine_ChaosSolverActor* ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverEngine_ChaosSolverActor* ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	UGeometryCollectionEngine_ChaosDestructionListener_RemoveChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeometryCollectionEngine_ChaosDestructionListener::IsEventListening()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	UGeometryCollectionEngine_ChaosDestructionListener_IsEventListening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionEngine_GeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionEngine_GeometryCollectionActor* GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	UGeometryCollectionEngine_ChaosDestructionListener_AddGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverEngine_ChaosSolverActor* ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_ChaosDestructionListener::AddChaosSolverActor(class AChaosSolverEngine_ChaosSolverActor* ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	UGeometryCollectionEngine_ChaosDestructionListener_AddChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_HitResult       OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGeometryCollectionEngine_GeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FEngine_HitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	AGeometryCollectionEngine_GeometryCollectionActor_RaycastSingle_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewNotifyBreaks               (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_GeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	UGeometryCollectionEngine_GeometryCollectionComponent_SetNotifyBreaks_Params params;
	params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosSolverEngine_ChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionEngine_GeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosSolverEngine_ChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	UGeometryCollectionEngine_GeometryCollectionComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionEngine_GeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionEngine_GeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionEngine_GeometryCollectionComponent* FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	UGeometryCollectionEngine_GeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionEngine_GeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionEngine_GeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionEngine_GeometryCollectionComponent* FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	UGeometryCollectionEngine_GeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// FGeometryCollectionSimulationCore_GeometryCollectionSimulationCore_EGeometryCollectionPhysicsTypeEnum Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_FieldSystemMetaData* MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_FieldNodeBase* Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionEngine_GeometryCollectionComponent::ApplyPhysicsField(bool Enabled, FGeometryCollectionSimulationCore_GeometryCollectionSimulationCore_EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemEngine_FieldSystemMetaData* MetaData, class UFieldSystemEngine_FieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	UGeometryCollectionEngine_GeometryCollectionComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionEngine_GeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	UGeometryCollectionEngine_GeometryCollectionComponent_ApplyKinematicField_Params params;
	params.Radius = Radius;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosSolverEngine_ChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionEngine_SkeletalMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosSolverEngine_ChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	UGeometryCollectionEngine_SkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosSolverEngine_ChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionEngine_StaticMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosSolverEngine_ChaosPhysicsCollisionInfo& CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	UGeometryCollectionEngine_StaticMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
// (Final, Native, Public, BlueprintCallable)

void UGeometryCollectionEngine_StaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	UGeometryCollectionEngine_StaticMeshSimulationComponent_ForceRecreatePhysicsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
