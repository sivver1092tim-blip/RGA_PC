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

// Class InputCore.InputCoreTypes
// 0x0000 (0x0028 - 0x0028)
class UInputCore_InputCoreTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InputCore.InputCoreTypes");
		if (!ptr)
			ptr = UObject::FindClass("Class InputCore.InputCoreTypes");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
