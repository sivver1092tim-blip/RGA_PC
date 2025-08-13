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

// BlueprintGeneratedClass BP_GameMode_Login.BP_GameMode_Login_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_GameMode_Login_BP_GameMode_Login_C : public AProjectLH_LHGameMode_Login
{
public:
	class UMediaAssets_MediaSoundComponent*            MediaSound;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameMode_Login.BP_GameMode_Login_C");
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameMode_Login.BP_GameMode_Login_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
