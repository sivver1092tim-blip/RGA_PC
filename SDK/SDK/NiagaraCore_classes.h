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

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (0x0028 - 0x0028)
class UNiagaraCore_NiagaraMergeable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		return ptr;
	}

};


// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraCore_NiagaraDataInterfaceBase : public UNiagaraCore_NiagaraMergeable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
