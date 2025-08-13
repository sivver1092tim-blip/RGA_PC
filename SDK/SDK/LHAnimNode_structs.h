#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LHAnimNode.LHAnimNode_LookAt
// 0x0060 (0x0210 - 0x01B0)
struct FLHAnimNode_LHAnimNode_LookAt : public FAnimGraphRuntime_AnimNode_LookAt
{
	struct FName                                       BoneNameToModify;                                         // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutInterpolationTime;                                     // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalEvaluateTime;                                        // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
