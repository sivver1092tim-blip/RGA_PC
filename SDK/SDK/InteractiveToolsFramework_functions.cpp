
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

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                           bWorldIn                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractiveToolsFramework_GizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");

	UInteractiveToolsFramework_GizmoBaseComponent_UpdateWorldLocalState_Params params;
	params.bWorldIn = bWorldIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                           bHoveringIn                    (Parm, ZeroConstructor, IsPlainOldData)

void UInteractiveToolsFramework_GizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");

	UInteractiveToolsFramework_GizmoBaseComponent_UpdateHoverState_Params params;
	params.bHoveringIn = bHoveringIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UInteractiveToolsFramework_GizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");

	UInteractiveToolsFramework_GizmoTransformSource_SetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UInteractiveToolsFramework_GizmoTransformSource::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");

	UInteractiveToolsFramework_GizmoTransformSource_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractiveToolsFramework_GizmoAxisSource::HasTangentVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");

	UInteractiveToolsFramework_GizmoAxisSource_HasTangentVectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 TangentXOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TangentYOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInteractiveToolsFramework_GizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");

	UInteractiveToolsFramework_GizmoAxisSource_GetTangentVectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TangentXOut != nullptr)
		*TangentXOut = params.TangentXOut;
	if (TangentYOut != nullptr)
		*TangentYOut = params.TangentYOut;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractiveToolsFramework_GizmoAxisSource::GetOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");

	UInteractiveToolsFramework_GizmoAxisSource_GetOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractiveToolsFramework_GizmoAxisSource::GetDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");

	UInteractiveToolsFramework_GizmoAxisSource_GetDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public, Const)
// Parameters:
// bool                           bHovering                      (Parm, ZeroConstructor, IsPlainOldData)

void UInteractiveToolsFramework_GizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");

	UInteractiveToolsFramework_GizmoClickTarget_UpdateHoverState_Params params;
	params.bHovering = bHovering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)

void UInteractiveToolsFramework_GizmoStateTarget::EndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");

	UInteractiveToolsFramework_GizmoStateTarget_EndUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)

void UInteractiveToolsFramework_GizmoStateTarget::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");

	UInteractiveToolsFramework_GizmoStateTarget_BeginUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractiveToolsFramework_GizmoFloatParameterSource::SetParameter(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");

	UInteractiveToolsFramework_GizmoFloatParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInteractiveToolsFramework_GizmoFloatParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");

	UInteractiveToolsFramework_GizmoFloatParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)

void UInteractiveToolsFramework_GizmoFloatParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");

	UInteractiveToolsFramework_GizmoFloatParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)

void UInteractiveToolsFramework_GizmoFloatParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");

	UInteractiveToolsFramework_GizmoFloatParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector2D               NewValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractiveToolsFramework_GizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");

	UInteractiveToolsFramework_GizmoVec2ParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UInteractiveToolsFramework_GizmoVec2ParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");

	UInteractiveToolsFramework_GizmoVec2ParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)

void UInteractiveToolsFramework_GizmoVec2ParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");

	UInteractiveToolsFramework_GizmoVec2ParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)

void UInteractiveToolsFramework_GizmoVec2ParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");

	UInteractiveToolsFramework_GizmoVec2ParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
