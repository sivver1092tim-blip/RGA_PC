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

// Function UIWS.UIWSWaterBody.SplashedAtLocation
struct AUIWS_UIWSWaterBody_SplashedAtLocation_Params
{
	struct FVector                                     SplashLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SplashVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.SplashAtlocation
struct AUIWS_UIWSWaterBody_SplashAtlocation_Params
{
	struct FVector                                     SplashLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SplachVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SplashStrengthPercent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.RequestPriorityManual
struct AUIWS_UIWSWaterBody_RequestPriorityManual_Params
{
};

// Function UIWS.UIWSWaterBody.RadialDamageSplashAtlocation
struct AUIWS_UIWSWaterBody_RadialDamageSplashAtlocation_Params
{
	struct FVector                                     SplashLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.PointDamageSplashAtlocation
struct AUIWS_UIWSWaterBody_PointDamageSplashAtlocation_Params
{
	struct FVector                                     SplashLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.OnWaterOverlap
struct AUIWS_UIWSWaterBody_OnWaterOverlap_Params
{
	class UEngine_PrimitiveComponent*                  OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AEngine_Actor*                               OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngine_PrimitiveComponent*                  OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_HitResult                           SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.OnRadialDamageEffect
struct AUIWS_UIWSWaterBody_OnRadialDamageEffect_Params
{
	struct FVector                                     RippleLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RippleStrengthScaled;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RippleSizeScaled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.OnPointDamageEffect
struct AUIWS_UIWSWaterBody_OnPointDamageEffect_Params
{
	struct FVector                                     RippleLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RippleStrengthScaled;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RippleSizeScaled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.ForceAppliedAtLocation
struct AUIWS_UIWSWaterBody_ForceAppliedAtLocation_Params
{
	struct FVector                                     RippleLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSWaterBody.ApplyForceAtLocation
struct AUIWS_UIWSWaterBody_ApplyForceAtLocation_Params
{
	float                                              fStrength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fSizePercent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithEffect;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIWS.UIWSInteractorComponent.UpdateComponentList
struct UUIWS_UIWSInteractorComponent_UpdateComponentList_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
