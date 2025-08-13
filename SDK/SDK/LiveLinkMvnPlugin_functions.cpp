
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

// Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULiveLinkMvnPlugin_LiveLinkMvnRetargetAsset::GetRemappedBoneName(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetRemappedBoneName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetRemappedBoneName");

	ULiveLinkMvnPlugin_LiveLinkMvnRetargetAsset_GetRemappedBoneName_Params params;
	params.BoneName = BoneName;

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
