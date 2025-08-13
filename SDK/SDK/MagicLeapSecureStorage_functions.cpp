
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

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FVector                 DataToStore                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureVector(const struct FString& Key, const struct FVector& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureVector_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTransform              DataToStore                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureTransform_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 DataToStore                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureString(const struct FString& Key, const struct FString& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureString_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// class UEngine_SaveGame*        ObjectToStore                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureSaveGame(const struct FString& Key, class UEngine_SaveGame* ObjectToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureSaveGame_Params params;
	params.Key = Key;
	params.ObjectToStore = ObjectToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FRotator                DataToStore                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureRotator_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int64_t                        DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureInt64(const struct FString& Key, int64_t DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureInt64_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureInt(const struct FString& Key, int DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureInt_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureFloat(const struct FString& Key, float DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureFloat_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// unsigned char                  DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureByte(const struct FString& Key, unsigned char DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureByte_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureBool(const struct FString& Key, bool DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureBool_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<int>                    DataToStore                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_PutSecureArray(const struct FString& Key, TArray<int> DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureArray_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FVector                 DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureVector_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTransform              DataToRetrieve                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureTransform_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 DataToRetrieve                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureString(const struct FString& Key, struct FString* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// class UEngine_SaveGame*        ObjectToRetrieve               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureSaveGame(const struct FString& Key, class UEngine_SaveGame** ObjectToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureSaveGame_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectToRetrieve != nullptr)
		*ObjectToRetrieve = params.ObjectToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FRotator                DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureRotator_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int64_t                        DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureInt64_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureInt(const struct FString& Key, int* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureFloat(const struct FString& Key, float* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureFloat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// unsigned char                  DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureByte_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureBool(const struct FString& Key, bool* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureBool_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<int>                    DataToRetrieve                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureArray_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage_MagicLeapSecureStorage::STATIC_DeleteSecureData(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData");

	UMagicLeapSecureStorage_MagicLeapSecureStorage_DeleteSecureData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
