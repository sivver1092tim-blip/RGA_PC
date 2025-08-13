
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

// Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Param                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UOceanology_Plugin_Oceanology_PluginBPLibrary::STATIC_Oceanology_PluginSampleFunction(float Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction");

	UOceanology_Plugin_Oceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Params params;
	params.Param = Param;

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
