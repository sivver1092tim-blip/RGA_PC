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

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
struct UTimeManagement_TimeManagementBlueprintLibrary_TransformTime_Params
{
	struct FFrameTime                                  SourceTime;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameRate                                  SourceRate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFrameRate                                  DestinationRate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
struct UTimeManagement_TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
struct UTimeManagement_TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	struct FFrameNumber                                B;                                                        // (Parm)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
struct UTimeManagement_TimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params
{
	struct FFrameTime                                  SourceTime;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameRate                                  SourceRate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFrameRate                                  SnapToRate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct UTimeManagement_TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  FrameRate;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
struct UTimeManagement_TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
struct UTimeManagement_TimeManagementBlueprintLibrary_IsValid_MultipleOf_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFrameRate                                  OtherFramerate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
struct UTimeManagement_TimeManagementBlueprintLibrary_IsValid_Framerate_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
struct UTimeManagement_TimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params
{
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
struct UTimeManagement_TimeManagementBlueprintLibrary_GetTimecode_Params
{
	struct FTimecode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
struct UTimeManagement_TimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
struct UTimeManagement_TimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
{
	struct FTimecode                                   InTimecode;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceSignDisplay;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct UTimeManagement_TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
{
	struct FQualifiedFrameTime                         InFrameTime;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct UTimeManagement_TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
struct UTimeManagement_TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params
{
	struct FFrameNumber                                InFrameNumber;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
struct UTimeManagement_TimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
struct UTimeManagement_TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	struct FFrameNumber                                B;                                                        // (Parm)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
