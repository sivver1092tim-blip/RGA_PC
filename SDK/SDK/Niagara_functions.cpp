
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

// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	UNiagara_NiagaraComponent_SetVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	UNiagara_NiagaraComponent_SetVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	UNiagara_NiagaraComponent_SetVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	UNiagara_NiagaraComponent_SetVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableObject(const struct FName& InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	UNiagara_NiagaraComponent_SetVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_MaterialInterface* Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableMaterial(const struct FName& InVariableName, class UEngine_MaterialInterface* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");

	UNiagara_NiagaraComponent_SetVariableMaterial_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	UNiagara_NiagaraComponent_SetVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableInt(const struct FName& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	UNiagara_NiagaraComponent_SetVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableFloat(const struct FName& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	UNiagara_NiagaraComponent_SetVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableBool(const struct FName& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	UNiagara_NiagaraComponent_SetVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetVariableActor(const struct FName& InVariableName, class AEngine_Actor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	UNiagara_NiagaraComponent_SetVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InSeekDelta                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	UNiagara_NiagaraComponent_SetSeekDelta_Params params;
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	UNiagara_NiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePreviewLODDistance      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviewLODDistance             (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	UNiagara_NiagaraComponent_SetPreviewLODDistance_Params params;
	params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	params.PreviewLODDistance = PreviewLODDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPreviewDetailLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePreviewDetailLevel      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviewDetailLevel             (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewDetailLevel");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewDetailLevel");

	UNiagara_NiagaraComponent_SetPreviewDetailLevel_Params params;
	params.bEnablePreviewDetailLevel = bEnablePreviewDetailLevel;
	params.PreviewDetailLevel = PreviewDetailLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPaused                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetPaused(bool bInPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	UNiagara_NiagaraComponent_SetPaused_Params params;
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	UNiagara_NiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	UNiagara_NiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	UNiagara_NiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	UNiagara_NiagaraComponent_SetNiagaraVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	UNiagara_NiagaraComponent_SetNiagaraVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	UNiagara_NiagaraComponent_SetNiagaraVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableInt(const struct FString& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	UNiagara_NiagaraComponent_SetNiagaraVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	UNiagara_NiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	UNiagara_NiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetNiagaraVariableActor(const struct FString& InVariableName, class AEngine_Actor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	UNiagara_NiagaraComponent_SetNiagaraVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	UNiagara_NiagaraComponent_SetMaxSimTime_Params params;
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInForceSolo                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	UNiagara_NiagaraComponent_SetForceSolo_Params params;
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	UNiagara_NiagaraComponent_SetDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanRenderWhileSeeking       (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	UNiagara_NiagaraComponent_SetCanRenderWhileSeeking_Params params;
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	UNiagara_NiagaraComponent_SetAutoDestroy_Params params;
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagara_NiagaraSystem*  InAsset                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetAsset(class UNiagara_NiagaraSystem* InAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	UNiagara_NiagaraComponent_SetAsset_Params params;
	params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FNiagara_Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode                (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SetAgeUpdateMode(FNiagara_Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	UNiagara_NiagaraComponent_SetAgeUpdateMode_Params params;
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	UNiagara_NiagaraComponent_SeekToDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagara_NiagaraComponent::ResetSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	UNiagara_NiagaraComponent_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagara_NiagaraComponent::ReinitializeSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	UNiagara_NiagaraComponent_ReinitializeSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagara_NiagaraComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	UNiagara_NiagaraComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagara_NiagaraComponent::GetSeekDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	UNiagara_NiagaraComponent_GetSeekDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// struct FString                 InValueName                    (Parm, ZeroConstructor)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNiagara_NiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	UNiagara_NiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// struct FString                 InValueName                    (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UNiagara_NiagaraComponent::GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	UNiagara_NiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNiagara_NiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	UNiagara_NiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagara_NiagaraComponent::GetMaxSimTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	UNiagara_NiagaraComponent_GetMaxSimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagara_NiagaraComponent::GetForceSolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	UNiagara_NiagaraComponent_GetForceSolo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagara_NiagaraComponent::GetDesiredAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	UNiagara_NiagaraComponent_GetDesiredAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDataInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UNiagara_NiagaraDataInterface* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagara_NiagaraDataInterface* UNiagara_NiagaraComponent::GetDataInterface(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");

	UNiagara_NiagaraComponent_GetDataInterface_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagara_NiagaraSystem*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagara_NiagaraSystem* UNiagara_NiagaraComponent::GetAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	UNiagara_NiagaraComponent_GetAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FNiagara_Niagara_ENiagaraAgeUpdateMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FNiagara_Niagara_ENiagaraAgeUpdateMode UNiagara_NiagaraComponent::GetAgeUpdateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	UNiagara_NiagaraComponent_GetAgeUpdateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SimulateTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	UNiagara_NiagaraComponent_AdvanceSimulationByTime_Params params;
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TickCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	UNiagara_NiagaraComponent_AdvanceSimulation_Params params;
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FNiagara_BasicParticleData> Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagara_NiagaraSystem*  NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FNiagara_BasicParticleData> Data, class UNiagara_NiagaraSystem* NiagaraSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData");

	UNiagara_NiagaraParticleCallbackHandler_ReceiveParticleData_Params params;
	params.Data = Data;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagara_NiagaraComponent* Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UEngine_TextureRenderTarget2D* dest                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagara_NiagaraComponent* Component, class UEngine_TextureRenderTarget2D* dest, int AttributeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D");

	UNiagara_NiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params params;
	params.Component = Component;
	params.dest = dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagara_NiagaraSystem*  SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_SceneComponent*  AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FEngine_Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)
// FNiagara_Niagara_ENCPoolMethod PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagara_NiagaraComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagara_NiagaraComponent* UNiagara_NiagaraFunctionLibrary::STATIC_SpawnSystemAttached(class UNiagara_NiagaraSystem* SystemTemplate, class UEngine_SceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<FEngine_Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, FNiagara_Niagara_ENCPoolMethod PoolingMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	UNiagara_NiagaraFunctionLibrary_SpawnSystemAttached_Params params;
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UNiagara_NiagaraSystem*  SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)
// FNiagara_Niagara_ENCPoolMethod PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagara_NiagaraComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagara_NiagaraComponent* UNiagara_NiagaraFunctionLibrary::STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagara_NiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, FNiagara_Niagara_ENCPoolMethod PoolingMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	UNiagara_NiagaraFunctionLibrary_SpawnSystemAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagara_NiagaraComponent* NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UEngine_StaticMeshComponent* StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNiagara_NiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagara_NiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UEngine_StaticMeshComponent* StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");

	UNiagara_NiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagara_NiagaraComponent* NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UEngine_StaticMesh*      StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMesh(class UNiagara_NiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UEngine_StaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");

	UNiagara_NiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagara_NiagaraComponent* NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UEngine_SkeletalMeshComponent* SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNiagara_NiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagara_NiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UEngine_SkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");

	UNiagara_NiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagara_NiagaraParameterCollection* Collection                     (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagara_NiagaraParameterCollectionInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagara_NiagaraParameterCollectionInstance* UNiagara_NiagaraFunctionLibrary::STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagara_NiagaraParameterCollection* Collection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	UNiagara_NiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetVectorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	UNiagara_NiagaraParameterCollectionInstance_SetVector4Parameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetVector2DParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetQuatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetIntParameter(const struct FString& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetIntParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetFloatParameter(const struct FString& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetFloatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetColorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagara_NiagaraParameterCollectionInstance::SetBoolParameter(const struct FString& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	UNiagara_NiagaraParameterCollectionInstance_SetBoolParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNiagara_NiagaraParameterCollectionInstance::GetVectorParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetVectorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector4 UNiagara_NiagaraParameterCollectionInstance::GetVector4Parameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	UNiagara_NiagaraParameterCollectionInstance_GetVector4Parameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UNiagara_NiagaraParameterCollectionInstance::GetVector2DParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetVector2DParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UNiagara_NiagaraParameterCollectionInstance::GetQuatParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetQuatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagara_NiagaraParameterCollectionInstance::GetIntParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetIntParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagara_NiagaraParameterCollectionInstance::GetFloatParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetFloatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UNiagara_NiagaraParameterCollectionInstance::GetColorParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetColorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagara_NiagaraParameterCollectionInstance::GetBoolParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	UNiagara_NiagaraParameterCollectionInstance_GetBoolParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagara_NiagaraSystem*  InSystem                       (Parm, ZeroConstructor, IsPlainOldData)

void ANiagara_NiagaraPreviewBase::SetSystem(class UNiagara_NiagaraSystem* InSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");

	ANiagara_NiagaraPreviewBase_SetSystem_Params params;
	params.InSystem = InSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InXAxisText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   InYAxisText                    (ConstParm, Parm, OutParm, ReferenceParm)

void ANiagara_NiagaraPreviewBase::SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");

	ANiagara_NiagaraPreviewBase_SetLabelText_Params params;
	params.InXAxisText = InXAxisText;
	params.InYAxisText = InYAxisText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagara_NiagaraPreviewAxis::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");

	UNiagara_NiagaraPreviewAxis_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UNiagara_NiagaraComponent* PreviewComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsXAxis                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutLabelText                   (Parm, OutParm, ZeroConstructor)

void UNiagara_NiagaraPreviewAxis::ApplyToPreview(class UNiagara_NiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");

	UNiagara_NiagaraPreviewAxis_ApplyToPreview_Params params;
	params.PreviewComponent = PreviewComponent;
	params.PreviewIndex = PreviewIndex;
	params.bIsXAxis = bIsXAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLabelText != nullptr)
		*OutLabelText = params.OutLabelText;
}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)

void ANiagara_NiagaraPreviewGrid::DeactivatePreviews()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	ANiagara_NiagaraPreviewGrid_DeactivatePreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ANiagara_NiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	ANiagara_NiagaraPreviewGrid_ActivatePreviews_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraScript.OnCompilationComplete
// (Final, Native, Public)

void UNiagara_NiagaraScript::OnCompilationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.OnCompilationComplete");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.OnCompilationComplete");

	UNiagara_NiagaraScript_OnCompilationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
