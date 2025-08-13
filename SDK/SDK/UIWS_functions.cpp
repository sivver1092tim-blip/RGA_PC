
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

// Function UIWS.UIWSWaterBody.SplashedAtLocation
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 SplashLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SplashVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::SplashedAtLocation(const struct FVector& SplashLoc, const struct FVector& SplashVelocity, float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.SplashedAtLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.SplashedAtLocation");

	AUIWS_UIWSWaterBody_SplashedAtLocation_Params params;
	params.SplashLoc = SplashLoc;
	params.SplashVelocity = SplashVelocity;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.SplashAtlocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SplashLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SplachVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          SplashStrengthPercent          (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::SplashAtlocation(const struct FVector& SplashLoc, const struct FVector& SplachVelocity, float SplashStrengthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.SplashAtlocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.SplashAtlocation");

	AUIWS_UIWSWaterBody_SplashAtlocation_Params params;
	params.SplashLoc = SplashLoc;
	params.SplachVelocity = SplachVelocity;
	params.SplashStrengthPercent = SplashStrengthPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.RequestPriorityManual
// (Final, Native, Public, BlueprintCallable)

void AUIWS_UIWSWaterBody::RequestPriorityManual()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.RequestPriorityManual");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.RequestPriorityManual");

	AUIWS_UIWSWaterBody_RequestPriorityManual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.RadialDamageSplashAtlocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SplashLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::RadialDamageSplashAtlocation(const struct FVector& SplashLoc, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.RadialDamageSplashAtlocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.RadialDamageSplashAtlocation");

	AUIWS_UIWSWaterBody_RadialDamageSplashAtlocation_Params params;
	params.SplashLoc = SplashLoc;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.PointDamageSplashAtlocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SplashLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::PointDamageSplashAtlocation(const struct FVector& SplashLoc, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.PointDamageSplashAtlocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.PointDamageSplashAtlocation");

	AUIWS_UIWSWaterBody_PointDamageSplashAtlocation_Params params;
	params.SplashLoc = SplashLoc;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.OnWaterOverlap
// (Native, Protected, HasOutParms)
// Parameters:
// class UEngine_PrimitiveComponent* OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AEngine_Actor*           OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_PrimitiveComponent* OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_HitResult       SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUIWS_UIWSWaterBody::OnWaterOverlap(class UEngine_PrimitiveComponent* OverlappedComponent, class AEngine_Actor* OtherActor, class UEngine_PrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FEngine_HitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.OnWaterOverlap");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.OnWaterOverlap");

	AUIWS_UIWSWaterBody_OnWaterOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.OnRadialDamageEffect
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 RippleLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          RippleStrengthScaled           (Parm, ZeroConstructor, IsPlainOldData)
// float                          RippleSizeScaled               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::OnRadialDamageEffect(const struct FVector& RippleLocation, float RippleStrengthScaled, float RippleSizeScaled, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.OnRadialDamageEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.OnRadialDamageEffect");

	AUIWS_UIWSWaterBody_OnRadialDamageEffect_Params params;
	params.RippleLocation = RippleLocation;
	params.RippleStrengthScaled = RippleStrengthScaled;
	params.RippleSizeScaled = RippleSizeScaled;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.OnPointDamageEffect
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 RippleLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          RippleStrengthScaled           (Parm, ZeroConstructor, IsPlainOldData)
// float                          RippleSizeScaled               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::OnPointDamageEffect(const struct FVector& RippleLocation, float RippleStrengthScaled, float RippleSizeScaled, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.OnPointDamageEffect");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.OnPointDamageEffect");

	AUIWS_UIWSWaterBody_OnPointDamageEffect_Params params;
	params.RippleLocation = RippleLocation;
	params.RippleStrengthScaled = RippleStrengthScaled;
	params.RippleSizeScaled = RippleSizeScaled;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.ForceAppliedAtLocation
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 RippleLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::ForceAppliedAtLocation(const struct FVector& RippleLoc, float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.ForceAppliedAtLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.ForceAppliedAtLocation");

	AUIWS_UIWSWaterBody_ForceAppliedAtLocation_Params params;
	params.RippleLoc = RippleLoc;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSWaterBody.ApplyForceAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          fStrength                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fSizePercent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithEffect                    (Parm, ZeroConstructor, IsPlainOldData)

void AUIWS_UIWSWaterBody::ApplyForceAtLocation(float fStrength, float fSizePercent, const struct FVector& HitLocation, bool bWithEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.ApplyForceAtLocation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSWaterBody.ApplyForceAtLocation");

	AUIWS_UIWSWaterBody_ApplyForceAtLocation_Params params;
	params.fStrength = fStrength;
	params.fSizePercent = fSizePercent;
	params.HitLocation = HitLocation;
	params.bWithEffect = bWithEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIWS.UIWSInteractorComponent.UpdateComponentList
// (Final, Native, Public, BlueprintCallable)

void UUIWS_UIWSInteractorComponent::UpdateComponentList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIWS.UIWSInteractorComponent.UpdateComponentList");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIWS.UIWSInteractorComponent.UpdateComponentList");

	UUIWS_UIWSInteractorComponent_UpdateComponentList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
