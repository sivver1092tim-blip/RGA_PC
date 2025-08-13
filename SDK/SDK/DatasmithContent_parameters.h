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

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct UDatasmithContent_DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct UDatasmithContent_DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringToMatch;                                            // (Parm, ZeroConstructor)
	TArray<struct FName>                               OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             OutValues;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct UDatasmithContent_DatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDatasmithContent_DatasmithAssetUserData*    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
struct ADatasmithContent_DatasmithImportedSequencesActor_PlayLevelSequence_Params
{
	class ULevelSequence_LevelSequence*                SequenceToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
