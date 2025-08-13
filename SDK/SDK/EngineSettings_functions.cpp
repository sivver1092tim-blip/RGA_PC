
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

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSkipFirstPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void UEngineSettings_GameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");

	UEngineSettings_GameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params;
	params.bSkipFirstPlayer = bSkipFirstPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEngineSettings_GameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");

	UEngineSettings_GameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UEngineSettings_GameMapsSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngineSettings_GameMapsSettings* UEngineSettings_GameMapsSettings::STATIC_GetGameMapsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");

	UEngineSettings_GameMapsSettings_GetGameMapsSettings_Params params;

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
