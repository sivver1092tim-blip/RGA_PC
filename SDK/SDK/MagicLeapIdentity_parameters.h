#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params
{
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute> AttributeValue;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
struct UMagicLeapIdentity_MagicLeapIdentity_RequestAttributeValueAsync_Params
{
	TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
struct UMagicLeapIdentity_MagicLeapIdentity_RequestAttributeValue_Params
{
	TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute> RequestedAttributeValues;                                 // (Parm, OutParm, ZeroConstructor)
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params
{
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully;                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
struct UMagicLeapIdentity_MagicLeapIdentity_GetAllAvailableAttributesAsync_Params
{
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
struct UMagicLeapIdentity_MagicLeapIdentity_GetAllAvailableAttributes_Params
{
	TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes;                                      // (Parm, OutParm, ZeroConstructor)
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
struct UMagicLeapIdentity_MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params
{
	FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
