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

// Function NavigationSystem.NavModifierVolume.SetAreaClass
struct ANavigationSystem_NavModifierVolume_SetAreaClass_Params
{
	class UClass*                                      NewAreaClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
struct ANavigationSystem_RecastNavMesh_K2_ReplaceAreaInTileBounds_Params
{
	struct FBox                                        Bounds;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OldArea;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewArea;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceLinks;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.IsValid
struct UNavigationSystem_NavigationPath_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.IsStringPulled
struct UNavigationSystem_NavigationPath_IsStringPulled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.IsPartial
struct UNavigationSystem_NavigationPath_IsPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.GetPathLength
struct UNavigationSystem_NavigationPath_GetPathLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.GetPathCost
struct UNavigationSystem_NavigationPath_GetPathCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.GetDebugString
struct UNavigationSystem_NavigationPath_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
struct UNavigationSystem_NavigationPath_EnableRecalculationOnInvalidation_Params
{
	TEnumAsByte<FEngine_Engine_ENavigationOptionFlag>  DoRecalculation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.EnableDebugDrawing
struct UNavigationSystem_NavigationPath_EnableDebugDrawing_Params
{
	bool                                               bShouldDrawDebugData;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PathColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
struct UNavigationSystem_NavigationSystemV1_UnregisterNavigationInvoker_Params
{
	class AEngine_Actor*                               Invoker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
struct UNavigationSystem_NavigationSystemV1_SimpleMoveToLocation_Params
{
	class AEngine_Controller*                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Goal;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
struct UNavigationSystem_NavigationSystemV1_SimpleMoveToActor_Params
{
	class AEngine_Controller*                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Goal;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystem_NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params
{
	int                                                MaxNumberOfJobs;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
struct UNavigationSystem_NavigationSystemV1_SetGeometryGatheringMode_Params
{
	FEngine_Engine_ENavDataGatheringModeConfig         NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystem_NavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params
{
};

// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
struct UNavigationSystem_NavigationSystemV1_RegisterNavigationInvoker_Params
{
	class AEngine_Actor*                               Invoker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileGenerationRadius;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
struct UNavigationSystem_NavigationSystemV1_ProjectPointToNavigation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     QueryExtent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
struct UNavigationSystem_NavigationSystemV1_OnNavigationBoundsUpdated_Params
{
	class ANavigationSystem_NavMeshBoundsVolume*       NavVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
struct UNavigationSystem_NavigationSystemV1_NavigationRaycast_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RayStart;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RayEnd;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Controller*                          Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
struct UNavigationSystem_NavigationSystemV1_K2_ReplaceAreaInOctreeData_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OldArea;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewArea;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
struct UNavigationSystem_NavigationSystemV1_K2_ProjectPointToNavigation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     QueryExtent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
struct UNavigationSystem_NavigationSystemV1_K2_GetRandomReachablePointInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RandomLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
struct UNavigationSystem_NavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RandomLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
struct UNavigationSystem_NavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RandomLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
struct UNavigationSystem_NavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
struct UNavigationSystem_NavigationSystemV1_IsNavigationBeingBuilt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
struct UNavigationSystem_NavigationSystemV1_GetRandomReachablePointInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
struct UNavigationSystem_NavigationSystemV1_GetRandomPointInNavigableRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetPathLength
struct UNavigationSystem_NavigationSystemV1_GetPathLength_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PathLength;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ENavigationQueryResult> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetPathCost
struct UNavigationSystem_NavigationSystemV1_GetPathCost_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PathCost;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ENavigationQueryResult> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
struct UNavigationSystem_NavigationSystemV1_GetNavigationSystem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationSystem_NavigationSystemV1*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
struct UNavigationSystem_NavigationSystemV1_FindPathToLocationSynchronously_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AEngine_Actor*                               PathfindingContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationSystem_NavigationPath*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
struct UNavigationSystem_NavigationSystemV1_FindPathToActorSynchronously_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AEngine_Actor*                               GoalActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TetherDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               PathfindingContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationSystem_NavigationPath*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
struct UNavigationSystem_NavRelevantComponent_SetNavigationRelevancy_Params
{
	bool                                               bRelevant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavModifierComponent.SetAreaClass
struct UNavigationSystem_NavModifierComponent_SetAreaClass_Params
{
	class UClass*                                      NewAreaClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
