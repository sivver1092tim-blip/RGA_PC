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

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
struct UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
struct UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.EnableGravityOverride
struct UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_EnableGravityOverride_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.DisableGravityOverride
struct UClothingSystemRuntimeNv_ClothingSimulationInteractorNv_DisableGravityOverride_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
