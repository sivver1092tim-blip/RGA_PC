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

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureVector_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FVector                                     DataToStore;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureTransform_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FTransform                                  DataToStore;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     DataToStore;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureSaveGame_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	class UEngine_SaveGame*                            ObjectToStore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureRotator_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FRotator                                    DataToStore;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureInt64_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int64_t                                            DataToStore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureInt_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                DataToStore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureFloat_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              DataToStore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureByte_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	unsigned char                                      DataToStore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureBool_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               DataToStore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_PutSecureArray_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<int>                                        DataToStore;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureVector_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FVector                                     DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureTransform_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FTransform                                  DataToRetrieve;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureSaveGame_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	class UEngine_SaveGame*                            ObjectToRetrieve;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureRotator_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FRotator                                    DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureInt64_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int64_t                                            DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureInt_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureFloat_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureByte_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	unsigned char                                      DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureBool_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_GetSecureArray_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<int>                                        DataToRetrieve;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
struct UMagicLeapSecureStorage_MagicLeapSecureStorage_DeleteSecureData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
