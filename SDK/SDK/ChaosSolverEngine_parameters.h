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

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
struct UChaosSolverEngine_ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
{
	struct FChaosSolverEngine_ChaosPhysicsCollisionInfo PhysicsCollision;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEngine_HitResult                           ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
struct AChaosSolverEngine_ChaosSolverActor_SetSolverActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
struct AChaosSolverEngine_ChaosSolverActor_SetAsCurrentWorldSolver_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
