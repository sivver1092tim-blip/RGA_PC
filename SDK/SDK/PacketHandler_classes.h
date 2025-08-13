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

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UPacketHandler_HandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

};


// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (0x0038 - 0x0028)
class UPacketHandler_PacketHandlerProfileConfig : public UObject
{
public:
	TArray<struct FString>                             Components;                                               // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
