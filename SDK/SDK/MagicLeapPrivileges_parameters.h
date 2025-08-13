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

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
struct UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Params
{
	FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
struct UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Params
{
	FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
struct UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Params
{
	FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
