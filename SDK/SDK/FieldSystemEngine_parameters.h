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

// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
struct UFieldSystemEngine_FieldSystemMetaDataIteration_SetMetaDataIteration_Params
{
	int                                                Iterations;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_FieldSystemMetaDataIteration* ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
struct UFieldSystemEngine_FieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params
{
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldResolutionType> ResolutionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_FieldSystemMetaDataProcessingResolution* ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.UniformInteger.SetUniformInteger
struct UFieldSystemEngine_UniformInteger_SetUniformInteger_Params
{
	int                                                Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_UniformInteger*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
struct UFieldSystemEngine_RadialIntMask_SetRadialIntMask_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InteriorValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExteriorValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_RadialIntMask*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.UniformScalar.SetUniformScalar
struct UFieldSystemEngine_UniformScalar_SetUniformScalar_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_UniformScalar*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
struct UFieldSystemEngine_RadialFalloff_SetRadialFalloff_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_RadialFalloff*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
struct UFieldSystemEngine_FieldSystemComponent_ResetFieldSystem_Params
{
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
struct UFieldSystemEngine_FieldSystemComponent_ApplyUniformVectorFalloffForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
struct UFieldSystemEngine_FieldSystemComponent_ApplyStrainField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Iterations;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct UFieldSystemEngine_FieldSystemComponent_ApplyStayDynamicField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct UFieldSystemEngine_FieldSystemComponent_ApplyRadialVectorFalloffForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct UFieldSystemEngine_FieldSystemComponent_ApplyRadialForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
struct UFieldSystemEngine_FieldSystemComponent_ApplyPhysicsField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_FieldSystemMetaData*      MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct UFieldSystemEngine_FieldSystemComponent_ApplyLinearForce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
struct UFieldSystemEngine_FieldSystemComponent_AddFieldCommand_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_FieldSystemMetaData*      MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
struct UFieldSystemEngine_PlaneFalloff_SetPlaneFalloff_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_PlaneFalloff*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
struct UFieldSystemEngine_BoxFalloff_SetBoxFalloff_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_BoxFalloff*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.NoiseField.SetNoiseField
struct UFieldSystemEngine_NoiseField_SetNoiseField_Params
{
	float                                              MinRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	class UFieldSystemEngine_NoiseField*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.UniformVector.SetUniformVector
struct UFieldSystemEngine_UniformVector_SetUniformVector_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_UniformVector*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RadialVector.SetRadialVector
struct UFieldSystemEngine_RadialVector_SetRadialVector_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_RadialVector*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.OperatorField.SetOperatorField
struct UFieldSystemEngine_OperatorField_SetOperatorField_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            RightField;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            LeftField;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldOperationType> Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_OperatorField*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
struct UFieldSystemEngine_ToIntegerField_SetToIntegerField_Params
{
	class UFieldSystemEngine_FieldNodeFloat*           FloatField;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_ToIntegerField*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.ToFloatField.SetToFloatField
struct UFieldSystemEngine_ToFloatField_SetToFloatField_Params
{
	class UFieldSystemEngine_FieldNodeInt*             IntegerField;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_ToFloatField*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.RandomVector.SetRandomVector
struct UFieldSystemEngine_RandomVector_SetRandomVector_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_RandomVector*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
struct UFieldSystemEngine_ReturnResultsTerminal_SetReturnResultsTerminal_Params
{
	class UFieldSystemEngine_ReturnResultsTerminal*    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FieldSystemEngine.CullingField.SetCullingField
struct UFieldSystemEngine_CullingField_SetCullingField_Params
{
	class UFieldSystemEngine_FieldNodeBase*            Culling;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldSystemEngine_FieldNodeBase*            Field;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldCullingOperationType> Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemEngine_CullingField*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
