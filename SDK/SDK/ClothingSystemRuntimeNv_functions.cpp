
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

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSystemRuntimeNv_ClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness");

	UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSystemRuntimeNv_ClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");

	UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.EnableGravityOverride
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UClothingSystemRuntimeNv_ClothingSimulationInteractorNv::EnableGravityOverride(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.EnableGravityOverride");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.EnableGravityOverride");

	UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.DisableGravityOverride
// (Final, Native, Public, BlueprintCallable)

void UClothingSystemRuntimeNv_ClothingSimulationInteractorNv::DisableGravityOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.DisableGravityOverride");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.DisableGravityOverride");

	UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
