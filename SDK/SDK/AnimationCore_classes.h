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

// Class AnimationCore.AnimationDataSourceRegistry
// 0x0050 (0x0078 - 0x0028)
class UAnimationCore_AnimationDataSourceRegistry : public UObject
{
public:
	TMap<struct FName, class UObject*>                 DataSources;                                              // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
