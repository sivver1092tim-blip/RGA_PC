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

// Function UIParticle.UIParticle.StopEmit
struct UUIParticle_UIParticle_StopEmit_Params
{
};

// Function UIParticle.UIParticle.Stop
struct UUIParticle_UIParticle_Stop_Params
{
};

// Function UIParticle.UIParticle.SetPlayParticle
struct UUIParticle_UIParticle_SetPlayParticle_Params
{
	bool                                               InPlayParticle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticle.UIParticle.Play
struct UUIParticle_UIParticle_Play_Params
{
};

// Function UIParticle.UIParticleEmitter.StopEmit
struct UUIParticle_UIParticleEmitter_StopEmit_Params
{
};

// Function UIParticle.UIParticleEmitter.Stop
struct UUIParticle_UIParticleEmitter_Stop_Params
{
};

// Function UIParticle.UIParticleEmitter.SetPlayParticle
struct UUIParticle_UIParticleEmitter_SetPlayParticle_Params
{
	bool                                               InPlayParticle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticle.UIParticleEmitter.Play
struct UUIParticle_UIParticleEmitter_Play_Params
{
};

// Function UIParticle.UIParticleUtility.SetMultiThread
struct UUIParticle_UIParticleUtility_SetMultiThread_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticle.UIParticleUtility.SetLOD
struct UUIParticle_UIParticleUtility_SetLOD_Params
{
	int                                                newlod;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticle.UIParticleUtility.GetMultiThread
struct UUIParticle_UIParticleUtility_GetMultiThread_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIParticle.UIParticleUtility.GetLOD
struct UUIParticle_UIParticleUtility_GetLOD_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
