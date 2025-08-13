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

// Class Oceanology_Plugin.Infinite_Generator
// 0x0030 (0x0220 - 0x01F0)
class UOceanology_Plugin_Infinite_Generator : public UEngine_SceneComponent
{
public:
	bool                                               RealTime;                                                 // 0x01F0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableScale;                                              // 0x01F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	float                                              TimeJump;                                                 // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VisionLimit;                                              // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleFactor;                                              // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeginningScale;                                           // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMin;                                                 // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMax;                                                 // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FOceanology_Plugin_Oceanology_Plugin_EInfinityCategory> InfinityCategory;                                         // 0x020C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x020D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Oceanology_Plugin.Infinite_Generator");
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.Infinite_Generator");
		return ptr;
	}

};


// Class Oceanology_Plugin.Oceanology
// 0x0000 (0x0218 - 0x0218)
class AOceanology_Plugin_Oceanology : public AEngine_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Oceanology_Plugin.Oceanology");
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.Oceanology");
		return ptr;
	}

};


// Class Oceanology_Plugin.Oceanology_PluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UOceanology_Plugin_Oceanology_PluginBPLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Oceanology_Plugin.Oceanology_PluginBPLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.Oceanology_PluginBPLibrary");
		return ptr;
	}


	float STATIC_Oceanology_PluginSampleFunction(float Param);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
