#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPrivileges_MagicLeapPrivilegesFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary");
		return ptr;
	}


	bool STATIC_RequestPrivilegeAsync(FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_RequestPrivilege(FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
	bool STATIC_CheckPrivilege(FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
