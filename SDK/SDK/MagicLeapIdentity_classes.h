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

// Class MagicLeapIdentity.MagicLeapIdentity
// 0x0010 (0x0038 - 0x0028)
class UMagicLeapIdentity_MagicLeapIdentity : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapIdentity.MagicLeapIdentity");
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapIdentity.MagicLeapIdentity");
		return ptr;
	}


	void RequestIdentityAttributeValueDelegate__DelegateSignature(FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute> AttributeValue);
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError RequestAttributeValueAsync(TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate);
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError RequestAttributeValue(TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute>* RequestedAttributeValues);
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully);
	void GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate);
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError GetAllAvailableAttributes(TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey>* AvailableAttributes);
	void AvailableIdentityAttributesDelegate__DelegateSignature(FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
