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

// Class NetCore.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
class UNetCore_NetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetCore_NetAnalyticsDataConfig>     NetAnalyticsData;                                         // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetCore.NetAnalyticsAggregatorConfig");
		if (!ptr)
			ptr = UObject::FindClass("Class NetCore.NetAnalyticsAggregatorConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
