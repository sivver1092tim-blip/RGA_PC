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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UGeometryCollectionEngine_ChaosDestructionListener_SortTrailingEvents_Params
{
	TArray<struct FGeometryCollectionEngine_ChaosTrailingEventData> TrailingEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FGeometryCollectionEngine_GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UGeometryCollectionEngine_ChaosDestructionListener_SortCollisionEvents_Params
{
	TArray<struct FGeometryCollectionEngine_ChaosCollisionEventData> CollisionEvents;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FGeometryCollectionEngine_GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UGeometryCollectionEngine_ChaosDestructionListener_SortBreakingEvents_Params
{
	TArray<struct FGeometryCollectionEngine_ChaosBreakingEventData> BreakingEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FGeometryCollectionEngine_GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UGeometryCollectionEngine_ChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
	struct FGeometryCollectionEngine_ChaosTrailingEventRequestSettings InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UGeometryCollectionEngine_ChaosDestructionListener_SetTrailingEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UGeometryCollectionEngine_ChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
	struct FGeometryCollectionEngine_ChaosCollisionEventRequestSettings InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UGeometryCollectionEngine_ChaosDestructionListener_SetCollisionEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UGeometryCollectionEngine_ChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
	struct FGeometryCollectionEngine_ChaosBreakingEventRequestSettings InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UGeometryCollectionEngine_ChaosDestructionListener_SetBreakingEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UGeometryCollectionEngine_ChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
	class AGeometryCollectionEngine_GeometryCollectionActor* GeometryCollectionActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UGeometryCollectionEngine_ChaosDestructionListener_RemoveChaosSolverActor_Params
{
	class AChaosSolverEngine_ChaosSolverActor*         ChaosSolverActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UGeometryCollectionEngine_ChaosDestructionListener_IsEventListening_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UGeometryCollectionEngine_ChaosDestructionListener_AddGeometryCollectionActor_Params
{
	class AGeometryCollectionEngine_GeometryCollectionActor* GeometryCollectionActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UGeometryCollectionEngine_ChaosDestructionListener_AddChaosSolverActor_Params
{
	class AChaosSolverEngine_ChaosSolverActor*         ChaosSolverActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionEngine_GeometryCollectionActor_RaycastSingle_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_HitResult                           OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionEngine_GeometryCollectionComponent_SetNotifyBreaks_Params
{
	bool                                               bNewNotifyBreaks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionEngine_GeometryCollectionComponent_ReceivePhysicsCollision_Params
{
	struct FChaosSolverEngine_ChaosPhysicsCollisionInfo CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionEngine_GeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
	class UGeometryCollectionEngine_GeometryCollectionComponent* FracturedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionEngine_GeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
	class UGeometryCollectionEngine_GeometryCollectionComponent* FracturedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionEngine_GeometryCollectionComponent_ApplyPhysicsField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FGeometryCollectionSimulationCore_GeometryCollectionSimulationCore_EGeometryCollectionPhysicsTypeEnum Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_FieldSystemMetaData*      MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionEngine_GeometryCollectionComponent_ApplyKinematicField_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
struct UGeometryCollectionEngine_SkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params
{
	struct FChaosSolverEngine_ChaosPhysicsCollisionInfo CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
struct UGeometryCollectionEngine_StaticMeshSimulationComponent_ReceivePhysicsCollision_Params
{
	struct FChaosSolverEngine_ChaosPhysicsCollisionInfo CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
struct UGeometryCollectionEngine_StaticMeshSimulationComponent_ForceRecreatePhysicsState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
