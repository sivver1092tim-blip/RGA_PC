
#include "../SDK.h"
#include <Windows.h>

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{

		TNameEntryArray* FName::GNames = nullptr;
		FUObjectArray* UObject::GObjects = nullptr;

		//---------------------------------------------------------------------------
		//void InitSdk(const std::string& moduleName, const size_t gObjectsOffset, const size_t gNamesOffset)
		void InitSdk(const size_t gObjectsOffset, const size_t gNamesOffset)
		{
			UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(gObjectsOffset);
			FName::GNames = reinterpret_cast<SDK::TNameEntryArray*>(gNamesOffset);
		}
		//---------------------------------------------------------------------------
		bool FWeakObjectPtr::IsValid() const
		{
			if (ObjectSerialNumber == 0)
			{
				return false;
			}
			if (ObjectIndex < 0)
			{
				return false;
			}
			auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
			if (!ObjectItem)
			{
				return false;
			}
			if (!SerialNumbersMatch(ObjectItem))
			{
				return false;
			}
			return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
		}
		//---------------------------------------------------------------------------
		UObject* FWeakObjectPtr::Get() const
		{
			if (IsValid())
			{
				auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
				if (ObjectItem)
				{
					return ObjectItem->Object;
				}
			}
			return nullptr;
		}
		//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
