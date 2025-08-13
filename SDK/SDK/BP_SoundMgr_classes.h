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

// BlueprintGeneratedClass BP_SoundMgr.BP_SoundMgr_C
// 0x0000 (0x01C8 - 0x01C8)
class UBP_SoundMgr_BP_SoundMgr_C : public UProjectLH_LHSoundMgr
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoundMgr.BP_SoundMgr_C");
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoundMgr.BP_SoundMgr_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
