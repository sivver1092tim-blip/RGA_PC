
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

// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Iterations                     (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_FieldSystemMetaDataIteration* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_FieldSystemMetaDataIteration* UFieldSystemEngine_FieldSystemMetaDataIteration::SetMetaDataIteration(int Iterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	UFieldSystemEngine_FieldSystemMetaDataIteration_SetMetaDataIteration_Params params;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldResolutionType> ResolutionType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_FieldSystemMetaDataProcessingResolution* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_FieldSystemMetaDataProcessingResolution* UFieldSystemEngine_FieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldResolutionType> ResolutionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	UFieldSystemEngine_FieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params params;
	params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_UniformInteger* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_UniformInteger* UFieldSystemEngine_UniformInteger::SetUniformInteger(int Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	UFieldSystemEngine_UniformInteger_SetUniformInteger_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InteriorValue                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExteriorValue                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn             (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_RadialIntMask* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_RadialIntMask* UFieldSystemEngine_RadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<FFieldSystemCore_FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	UFieldSystemEngine_RadialIntMask_SetRadialIntMask_Params params;
	params.Radius = Radius;
	params.Position = Position;
	params.InteriorValue = InteriorValue;
	params.ExteriorValue = ExteriorValue;
	params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_UniformScalar* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_UniformScalar* UFieldSystemEngine_UniformScalar::SetUniformScalar(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	UFieldSystemEngine_UniformScalar_SetUniformScalar_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_RadialFalloff* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_RadialFalloff* UFieldSystemEngine_RadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	UFieldSystemEngine_RadialFalloff_SetRadialFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Radius = Radius;
	params.Position = Position;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// (Final, Native, Public, BlueprintCallable)

void UFieldSystemEngine_FieldSystemComponent::ResetFieldSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	UFieldSystemEngine_FieldSystemComponent_ResetFieldSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	UFieldSystemEngine_FieldSystemComponent_ApplyUniformVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Iterations                     (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	UFieldSystemEngine_FieldSystemComponent_ApplyStrainField_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	UFieldSystemEngine_FieldSystemComponent_ApplyStayDynamicField_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	UFieldSystemEngine_FieldSystemComponent_ApplyRadialVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	UFieldSystemEngine_FieldSystemComponent_ApplyRadialForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_FieldSystemMetaData* MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_FieldNodeBase* Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyPhysicsField(bool Enabled, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemEngine_FieldSystemMetaData* MetaData, class UFieldSystemEngine_FieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	UFieldSystemEngine_FieldSystemComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	UFieldSystemEngine_FieldSystemComponent_ApplyLinearForce_Params params;
	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_FieldSystemMetaData* MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_FieldNodeBase* Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFieldSystemEngine_FieldSystemComponent::AddFieldCommand(bool Enabled, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemEngine_FieldSystemMetaData* MetaData, class UFieldSystemEngine_FieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	UFieldSystemEngine_FieldSystemComponent_AddFieldCommand_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_PlaneFalloff* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_PlaneFalloff* UFieldSystemEngine_PlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	UFieldSystemEngine_PlaneFalloff_SetPlaneFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Distance = Distance;
	params.Position = Position;
	params.Normal = Normal;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_BoxFalloff* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_BoxFalloff* UFieldSystemEngine_BoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	UFieldSystemEngine_BoxFalloff_SetBoxFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Transform = Transform;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.NoiseField.SetNoiseField
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// class UFieldSystemEngine_NoiseField* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_NoiseField* UFieldSystemEngine_NoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	UFieldSystemEngine_NoiseField_SetNoiseField_Params params;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformVector.SetUniformVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_UniformVector* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_UniformVector* UFieldSystemEngine_UniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	UFieldSystemEngine_UniformVector_SetUniformVector_Params params;
	params.Magnitude = Magnitude;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialVector.SetRadialVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_RadialVector* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_RadialVector* UFieldSystemEngine_RadialVector::SetRadialVector(float Magnitude, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	UFieldSystemEngine_RadialVector_SetRadialVector_Params params;
	params.Magnitude = Magnitude;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.OperatorField.SetOperatorField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_FieldNodeBase* RightField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_FieldNodeBase* LeftField                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldOperationType> Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_OperatorField* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_OperatorField* UFieldSystemEngine_OperatorField::SetOperatorField(float Magnitude, class UFieldSystemEngine_FieldNodeBase* RightField, class UFieldSystemEngine_FieldNodeBase* LeftField, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldOperationType> Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	UFieldSystemEngine_OperatorField_SetOperatorField_Params params;
	params.Magnitude = Magnitude;
	params.RightField = RightField;
	params.LeftField = LeftField;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldSystemEngine_FieldNodeFloat* FloatField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_ToIntegerField* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_ToIntegerField* UFieldSystemEngine_ToIntegerField::SetToIntegerField(class UFieldSystemEngine_FieldNodeFloat* FloatField)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	UFieldSystemEngine_ToIntegerField_SetToIntegerField_Params params;
	params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.ToFloatField.SetToFloatField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldSystemEngine_FieldNodeInt* IntegerField                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_ToFloatField* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_ToFloatField* UFieldSystemEngine_ToFloatField::SetToFloatField(class UFieldSystemEngine_FieldNodeInt* IntegerField)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	UFieldSystemEngine_ToFloatField_SetToFloatField_Params params;
	params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RandomVector.SetRandomVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_RandomVector* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_RandomVector* UFieldSystemEngine_RandomVector::SetRandomVector(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	UFieldSystemEngine_RandomVector_SetRandomVector_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldSystemEngine_ReturnResultsTerminal* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_ReturnResultsTerminal* UFieldSystemEngine_ReturnResultsTerminal::SetReturnResultsTerminal()
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");

	UFieldSystemEngine_ReturnResultsTerminal_SetReturnResultsTerminal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.CullingField.SetCullingField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldSystemEngine_FieldNodeBase* Culling                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldSystemEngine_FieldNodeBase* Field                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldCullingOperationType> Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemEngine_CullingField* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemEngine_CullingField* UFieldSystemEngine_CullingField::SetCullingField(class UFieldSystemEngine_FieldNodeBase* Culling, class UFieldSystemEngine_FieldNodeBase* Field, TEnumAsByte<FFieldSystemCore_FieldSystemCore_EFieldCullingOperationType> Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	UFieldSystemEngine_CullingField_SetCullingField_Params params;
	params.Culling = Culling;
	params.Field = Field;
	params.Operation = Operation;

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
