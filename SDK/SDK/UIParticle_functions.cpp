
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

// Function UIParticle.UIParticle.StopEmit
// (Final, Native, Public, BlueprintCallable)

void UUIParticle_UIParticle::StopEmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.StopEmit");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.StopEmit");

	UUIParticle_UIParticle_StopEmit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticle.Stop
// (Final, Native, Public, BlueprintCallable)

void UUIParticle_UIParticle::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Stop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Stop");

	UUIParticle_UIParticle_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticle.SetPlayParticle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPlayParticle                 (Parm, ZeroConstructor, IsPlainOldData)

void UUIParticle_UIParticle::SetPlayParticle(bool InPlayParticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.SetPlayParticle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.SetPlayParticle");

	UUIParticle_UIParticle_SetPlayParticle_Params params;
	params.InPlayParticle = InPlayParticle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticle.Play
// (Final, Native, Public, BlueprintCallable)

void UUIParticle_UIParticle::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Play");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Play");

	UUIParticle_UIParticle_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.StopEmit
// (Final, Native, Public, BlueprintCallable)

void UUIParticle_UIParticleEmitter::StopEmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.StopEmit");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.StopEmit");

	UUIParticle_UIParticleEmitter_StopEmit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.Stop
// (Final, Native, Public, BlueprintCallable)

void UUIParticle_UIParticleEmitter::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Stop");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Stop");

	UUIParticle_UIParticleEmitter_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.SetPlayParticle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPlayParticle                 (Parm, ZeroConstructor, IsPlainOldData)

void UUIParticle_UIParticleEmitter::SetPlayParticle(bool InPlayParticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.SetPlayParticle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.SetPlayParticle");

	UUIParticle_UIParticleEmitter_SetPlayParticle_Params params;
	params.InPlayParticle = InPlayParticle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.Play
// (Final, Native, Public, BlueprintCallable)

void UUIParticle_UIParticleEmitter::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Play");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Play");

	UUIParticle_UIParticleEmitter_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleUtility.SetMultiThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUIParticle_UIParticleUtility::STATIC_SetMultiThread(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.SetMultiThread");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.SetMultiThread");

	UUIParticle_UIParticleUtility_SetMultiThread_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleUtility.SetLOD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            newlod                         (Parm, ZeroConstructor, IsPlainOldData)

void UUIParticle_UIParticleUtility::STATIC_SetLOD(int newlod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.SetLOD");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.SetLOD");

	UUIParticle_UIParticleUtility_SetLOD_Params params;
	params.newlod = newlod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIParticle.UIParticleUtility.GetMultiThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIParticle_UIParticleUtility::STATIC_GetMultiThread()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.GetMultiThread");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.GetMultiThread");

	UUIParticle_UIParticleUtility_GetMultiThread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIParticle.UIParticleUtility.GetLOD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUIParticle_UIParticleUtility::STATIC_GetLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.GetLOD");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.GetLOD");

	UUIParticle_UIParticleUtility_GetLOD_Params params;

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
