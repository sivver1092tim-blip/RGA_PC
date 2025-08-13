
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

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChaosSolverEngine_ChaosPhysicsCollisionInfo PhysicsCollision               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEngine_HitResult       ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FEngine_HitResult UChaosSolverEngine_ChaosSolverEngineBlueprintLibrary::STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosSolverEngine_ChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult");

	UChaosSolverEngine_ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params params;
	params.PhysicsCollision = PhysicsCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AChaosSolverEngine_ChaosSolverActor::SetSolverActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	AChaosSolverEngine_ChaosSolverActor_SetSolverActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// (Final, Native, Public, BlueprintCallable)

void AChaosSolverEngine_ChaosSolverActor::SetAsCurrentWorldSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	AChaosSolverEngine_ChaosSolverActor_SetAsCurrentWorldSolver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
