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

// Class LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset
// 0x00E0 (0x0108 - 0x0028)
class ULiveLinkMvnPlugin_LiveLinkMvnRetargetAsset : public ULiveLink_LiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET
	class UEngine_AnimSequence*                        TPoseAnimation;                                           // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset");
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset");
		return ptr;
	}


	struct FName GetRemappedBoneName(const struct FName& BoneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
