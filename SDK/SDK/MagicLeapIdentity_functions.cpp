
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

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute> AttributeValue                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity_MagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute> AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature");

	UMagicLeapIdentity_MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity_MagicLeapIdentity::RequestAttributeValueAsync(TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync");

	UMagicLeapIdentity_MagicLeapIdentity_RequestAttributeValueAsync_Params params;
	params.RequestedAttributeList = RequestedAttributeList;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute> RequestedAttributeValues       (Parm, OutParm, ZeroConstructor)
// FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity_MagicLeapIdentity::RequestAttributeValue(TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentity_MagicLeapIdentityAttribute>* RequestedAttributeValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue");

	UMagicLeapIdentity_MagicLeapIdentity_RequestAttributeValue_Params params;
	params.RequestedAttributeList = RequestedAttributeList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestedAttributeValues != nullptr)
		*RequestedAttributeValues = params.RequestedAttributeValues;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity_MagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature");

	UMagicLeapIdentity_MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity_MagicLeapIdentity::GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync");

	UMagicLeapIdentity_MagicLeapIdentity_GetAllAvailableAttributesAsync_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes            (Parm, OutParm, ZeroConstructor)
// FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity_MagicLeapIdentity::GetAllAvailableAttributes(TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey>* AvailableAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes");

	UMagicLeapIdentity_MagicLeapIdentity_GetAllAvailableAttributes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableAttributes != nullptr)
		*AvailableAttributes = params.AvailableAttributes;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity_MagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentity_MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature");

	UMagicLeapIdentity_MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AvailableAttributes = AvailableAttributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
