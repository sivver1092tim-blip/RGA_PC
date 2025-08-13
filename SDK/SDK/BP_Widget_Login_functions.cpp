
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

// Function BP_Widget_Login.BP_Widget_Login_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Widget_Login_BP_Widget_Login_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.Destruct");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.Destruct");

	UBP_Widget_Login_BP_Widget_Login_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Login.BP_Widget_Login_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Widget_Login_BP_Widget_Login_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.Construct");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.Construct");

	UBP_Widget_Login_BP_Widget_Login_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Login.BP_Widget_Login_C.OnMoive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Login_BP_Widget_Login_C::OnMoive(bool isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.OnMoive");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.OnMoive");

	UBP_Widget_Login_BP_Widget_Login_C_OnMoive_Params params;
	params.isPlay = isPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Login.BP_Widget_Login_C.SetMediaMute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMute                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Login_BP_Widget_Login_C::SetMediaMute(bool isMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.SetMediaMute");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.SetMediaMute");

	UBP_Widget_Login_BP_Widget_Login_C_SetMediaMute_Params params;
	params.isMute = isMute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Login.BP_Widget_Login_C.ExecuteUbergraph_BP_Widget_Login
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Login_BP_Widget_Login_C::ExecuteUbergraph_BP_Widget_Login(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.ExecuteUbergraph_BP_Widget_Login");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Widget_Login.BP_Widget_Login_C.ExecuteUbergraph_BP_Widget_Login");

	UBP_Widget_Login_BP_Widget_Login_C_ExecuteUbergraph_BP_Widget_Login_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
