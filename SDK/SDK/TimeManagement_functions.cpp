
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

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime              SourceTime                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFrameRate              SourceRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFrameRate              DestinationRate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UTimeManagement_TimeManagementBlueprintLibrary::STATIC_TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime");

	UTimeManagement_TimeManagementBlueprintLibrary_TransformTime_Params params;
	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.DestinationRate = DestinationRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger");

	UTimeManagement_TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// struct FFrameNumber            B                              (Parm)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber");

	UTimeManagement_TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime              SourceTime                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFrameRate              SourceRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFrameRate              SnapToRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UTimeManagement_TimeManagementBlueprintLibrary::STATIC_SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate");

	UTimeManagement_TimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params params;
	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.SnapToRate = SnapToRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              FrameRate                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	UTimeManagement_TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params;
	params.TimeInSeconds = TimeInSeconds;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger");

	UTimeManagement_TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFrameRate              OtherFramerate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeManagement_TimeManagementBlueprintLibrary::STATIC_IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf");

	UTimeManagement_TimeManagementBlueprintLibrary_IsValid_MultipleOf_Params params;
	params.InFrameRate = InFrameRate;
	params.OtherFramerate = OtherFramerate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeManagement_TimeManagementBlueprintLibrary::STATIC_IsValid_Framerate(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate");

	UTimeManagement_TimeManagementBlueprintLibrary_IsValid_Framerate_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFrameRate UTimeManagement_TimeManagementBlueprintLibrary::STATIC_GetTimecodeFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate");

	UTimeManagement_TimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FTimecode UTimeManagement_TimeManagementBlueprintLibrary::STATIC_GetTimecode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");

	UTimeManagement_TimeManagementBlueprintLibrary_GetTimecode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger");

	UTimeManagement_TimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode               InTimecode                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bForceSignDisplay              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");

	UTimeManagement_TimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params;
	params.InTimecode = InTimecode;
	params.bForceSignDisplay = bForceSignDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime     InFrameTime                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	UTimeManagement_TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params;
	params.InFrameTime = InFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	UTimeManagement_TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            InFrameNumber                  (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger");

	UTimeManagement_TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params params;
	params.InFrameNumber = InFrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger");

	UTimeManagement_TimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// struct FFrameNumber            B                              (Parm)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameNumber UTimeManagement_TimeManagementBlueprintLibrary::STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber");

	UTimeManagement_TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

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
