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

// Class LEGOServiceValidator.LEGOServiceValidator
// 0x0000 (0x0028 - 0x0028)
class ULEGOServiceValidator_LEGOServiceValidator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LEGOServiceValidator.LEGOServiceValidator");
		if (!ptr)
			ptr = UObject::FindClass("Class LEGOServiceValidator.LEGOServiceValidator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
