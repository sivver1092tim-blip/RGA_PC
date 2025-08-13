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

// Function Niagara.NiagaraComponent.SetVariableVec4
struct UNiagara_NiagaraComponent_SetVariableVec4_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableVec3
struct UNiagara_NiagaraComponent_SetVariableVec3_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableVec2
struct UNiagara_NiagaraComponent_SetVariableVec2_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableQuat
struct UNiagara_NiagaraComponent_SetVariableQuat_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableObject
struct UNiagara_NiagaraComponent_SetVariableObject_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableMaterial
struct UNiagara_NiagaraComponent_SetVariableMaterial_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableLinearColor
struct UNiagara_NiagaraComponent_SetVariableLinearColor_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableInt
struct UNiagara_NiagaraComponent_SetVariableInt_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableFloat
struct UNiagara_NiagaraComponent_SetVariableFloat_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableBool
struct UNiagara_NiagaraComponent_SetVariableBool_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableActor
struct UNiagara_NiagaraComponent_SetVariableActor_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetSeekDelta
struct UNiagara_NiagaraComponent_SetSeekDelta_Params
{
	float                                              InSeekDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagara_NiagaraComponent_SetRenderingEnabled_Params
{
	bool                                               bInRenderingEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct UNiagara_NiagaraComponent_SetPreviewLODDistance_Params
{
	bool                                               bEnablePreviewLODDistance;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviewLODDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetPreviewDetailLevel
struct UNiagara_NiagaraComponent_SetPreviewDetailLevel_Params
{
	bool                                               bEnablePreviewDetailLevel;                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviewDetailLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetPaused
struct UNiagara_NiagaraComponent_SetPaused_Params
{
	bool                                               bInPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagara_NiagaraComponent_SetNiagaraVariableVec4_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagara_NiagaraComponent_SetNiagaraVariableVec3_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagara_NiagaraComponent_SetNiagaraVariableVec2_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct UNiagara_NiagaraComponent_SetNiagaraVariableQuat_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct UNiagara_NiagaraComponent_SetNiagaraVariableObject_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct UNiagara_NiagaraComponent_SetNiagaraVariableLinearColor_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct UNiagara_NiagaraComponent_SetNiagaraVariableInt_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagara_NiagaraComponent_SetNiagaraVariableFloat_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagara_NiagaraComponent_SetNiagaraVariableBool_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct UNiagara_NiagaraComponent_SetNiagaraVariableActor_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	class AEngine_Actor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetMaxSimTime
struct UNiagara_NiagaraComponent_SetMaxSimTime_Params
{
	float                                              InMaxTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetForceSolo
struct UNiagara_NiagaraComponent_SetForceSolo_Params
{
	bool                                               bInForceSolo;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetDesiredAge
struct UNiagara_NiagaraComponent_SetDesiredAge_Params
{
	float                                              InDesiredAge;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct UNiagara_NiagaraComponent_SetCanRenderWhileSeeking_Params
{
	bool                                               bInCanRenderWhileSeeking;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAutoDestroy
struct UNiagara_NiagaraComponent_SetAutoDestroy_Params
{
	bool                                               bInAutoDestroy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAsset
struct UNiagara_NiagaraComponent_SetAsset_Params
{
	class UNiagara_NiagaraSystem*                      InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct UNiagara_NiagaraComponent_SetAgeUpdateMode_Params
{
	FNiagara_Niagara_ENiagaraAgeUpdateMode             InAgeUpdateMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SeekToDesiredAge
struct UNiagara_NiagaraComponent_SeekToDesiredAge_Params
{
	float                                              InDesiredAge;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.ResetSystem
struct UNiagara_NiagaraComponent_ResetSystem_Params
{
};

// Function Niagara.NiagaraComponent.ReinitializeSystem
struct UNiagara_NiagaraComponent_ReinitializeSystem_Params
{
};

// Function Niagara.NiagaraComponent.IsPaused
struct UNiagara_NiagaraComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetSeekDelta
struct UNiagara_NiagaraComponent_GetSeekDelta_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct UNiagara_NiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InValueName;                                              // (Parm, ZeroConstructor)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct UNiagara_NiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InValueName;                                              // (Parm, ZeroConstructor)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct UNiagara_NiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraComponent.GetMaxSimTime
struct UNiagara_NiagaraComponent_GetMaxSimTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetForceSolo
struct UNiagara_NiagaraComponent_GetForceSolo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetDesiredAge
struct UNiagara_NiagaraComponent_GetDesiredAge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetDataInterface
struct UNiagara_NiagaraComponent_GetDataInterface_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UNiagara_NiagaraDataInterface*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetAsset
struct UNiagara_NiagaraComponent_GetAsset_Params
{
	class UNiagara_NiagaraSystem*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct UNiagara_NiagaraComponent_GetAgeUpdateMode_Params
{
	FNiagara_Niagara_ENiagaraAgeUpdateMode             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct UNiagara_NiagaraComponent_AdvanceSimulationByTime_Params
{
	float                                              SimulateTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TickDeltaSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.AdvanceSimulation
struct UNiagara_NiagaraComponent_AdvanceSimulation_Params
{
	int                                                TickCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TickDeltaSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct UNiagara_NiagaraParticleCallbackHandler_ReceiveParticleData_Params
{
	TArray<struct FNiagara_BasicParticleData>          Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UNiagara_NiagaraSystem*                      NiagaraSystem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct UNiagara_NiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
{
	class UNiagara_NiagaraComponent*                   Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_TextureRenderTarget2D*               dest;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttributeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct UNiagara_NiagaraFunctionLibrary_SpawnSystemAttached_Params
{
	class UNiagara_NiagaraSystem*                      SystemTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_SceneComponent*                      AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAttachLocation>        LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENCPoolMethod                     PoolingMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagara_NiagaraComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct UNiagara_NiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UNiagara_NiagaraSystem*                      SystemTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FNiagara_Niagara_ENCPoolMethod                     PoolingMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagara_NiagaraComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct UNiagara_NiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
	class UNiagara_NiagaraComponent*                   NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UEngine_StaticMeshComponent*                 StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct UNiagara_NiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
	class UNiagara_NiagaraComponent*                   NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UEngine_StaticMesh*                          StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct UNiagara_NiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
	class UNiagara_NiagaraComponent*                   NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UEngine_SkeletalMeshComponent*               SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct UNiagara_NiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagara_NiagaraParameterCollection*         Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagara_NiagaraParameterCollectionInstance* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetVectorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct UNiagara_NiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetQuatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetIntParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetFloatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetColorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct UNiagara_NiagaraParameterCollectionInstance_SetBoolParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetVectorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct UNiagara_NiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetQuatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetIntParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetFloatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetColorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct UNiagara_NiagaraParameterCollectionInstance_GetBoolParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewBase.SetSystem
struct ANiagara_NiagaraPreviewBase_SetSystem_Params
{
	class UNiagara_NiagaraSystem*                      InSystem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewBase.SetLabelText
struct ANiagara_NiagaraPreviewBase_SetLabelText_Params
{
	struct FText                                       InXAxisText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       InYAxisText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Niagara.NiagaraPreviewAxis.Num
struct UNiagara_NiagaraPreviewAxis_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct UNiagara_NiagaraPreviewAxis_ApplyToPreview_Params
{
	class UNiagara_NiagaraComponent*                   PreviewComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PreviewIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsXAxis;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutLabelText;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
struct ANiagara_NiagaraPreviewGrid_DeactivatePreviews_Params
{
};

// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct ANiagara_NiagaraPreviewGrid_ActivatePreviews_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraScript.OnCompilationComplete
struct UNiagara_NiagaraScript_OnCompilationComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
