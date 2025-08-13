
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

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary::STATIC_RequestPrivilegeAsync(FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync");

	UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Params params;
	params.Privilege = Privilege;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary::STATIC_RequestPrivilege(FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege");

	UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Params params;
	params.Privilege = Privilege;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary::STATIC_CheckPrivilege(FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege");

	UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Params params;
	params.Privilege = Privilege;

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
