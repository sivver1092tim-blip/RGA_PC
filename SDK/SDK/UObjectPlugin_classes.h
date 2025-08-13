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

// Class UObjectPlugin.MyPluginObject
// 0x0010 (0x0038 - 0x0028)
class UUObjectPlugin_MyPluginObject : public UObject
{
public:
	struct FUObjectPlugin_MyPluginStruct               MyStruct;                                                 // 0x0028(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		if (!ptr)
			ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
