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

// Class LHPlatformExtend.LHPlatformMisc
// 0x0000 (0x0028 - 0x0028)
class ULHPlatformExtend_LHPlatformMisc : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LHPlatformExtend.LHPlatformMisc");
		if (!ptr)
			ptr = UObject::FindClass("Class LHPlatformExtend.LHPlatformMisc");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
