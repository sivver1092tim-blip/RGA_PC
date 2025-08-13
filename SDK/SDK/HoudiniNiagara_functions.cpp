
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

// Function HoudiniNiagara.HoudiniCSV.GetVelocityValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetVelocityValue(int RowIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetVelocityValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetVelocityValue");

	UHoudiniNiagara_HoudiniCSV_GetVelocityValue_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetVectorValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            colIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DoSwap                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           DoScale                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetVectorValue(int RowIndex, int colIndex, bool DoSwap, bool DoScale, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetVectorValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetVectorValue");

	UHoudiniNiagara_HoudiniCSV_GetVectorValue_Params params;
	params.RowIndex = RowIndex;
	params.colIndex = colIndex;
	params.DoSwap = DoSwap;
	params.DoScale = DoScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetTimeValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetTimeValue(int RowIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetTimeValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetTimeValue");

	UHoudiniNiagara_HoudiniCSV_GetTimeValue_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            PrevIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PrevWeight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetRowIndexesForPointAtTime(int POINTID, float desiredTime, int* PrevIndex, int* NextIndex, float* PrevWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime");

	UHoudiniNiagara_HoudiniCSV_GetRowIndexesForPointAtTime_Params params;
	params.POINTID = POINTID;
	params.desiredTime = desiredTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrevIndex != nullptr)
		*PrevIndex = params.PrevIndex;
	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
	if (PrevWeight != nullptr)
		*PrevWeight = params.PrevWeight;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPositionValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPositionValue(int RowIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPositionValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPositionValue");

	UHoudiniNiagara_HoudiniCSV_GetPositionValue_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ColumnIndex                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Vector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DoSwap                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           DoScale                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointVectorValueAtTime(int POINTID, int ColumnIndex, float desiredTime, bool DoSwap, bool DoScale, struct FVector* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime");

	UHoudiniNiagara_HoudiniCSV_GetPointVectorValueAtTime_Params params;
	params.POINTID = POINTID;
	params.ColumnIndex = ColumnIndex;
	params.desiredTime = desiredTime;
	params.DoSwap = DoSwap;
	params.DoScale = DoScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ColumnIndex                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointValueAtTime(int POINTID, int ColumnIndex, float desiredTime, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime");

	UHoudiniNiagara_HoudiniCSV_GetPointValueAtTime_Params params;
	params.POINTID = POINTID;
	params.ColumnIndex = ColumnIndex;
	params.desiredTime = desiredTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointType
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointType(int POINTID, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointType");

	UHoudiniNiagara_HoudiniCSV_GetPointType_Params params;
	params.POINTID = POINTID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Vector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointPositionAtTime(int POINTID, float desiredTime, struct FVector* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime");

	UHoudiniNiagara_HoudiniCSV_GetPointPositionAtTime_Params params;
	params.POINTID = POINTID;
	params.desiredTime = desiredTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointLifeAtTime(int POINTID, float desiredTime, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime");

	UHoudiniNiagara_HoudiniCSV_GetPointLifeAtTime_Params params;
	params.POINTID = POINTID;
	params.desiredTime = desiredTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointLife
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            POINTID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointLife(int POINTID, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointLife");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointLife");

	UHoudiniNiagara_HoudiniCSV_GetPointLife_Params params;
	params.POINTID = POINTID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            MinID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LastSpawnedPointID             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LastSpawnTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetPointIDsToSpawnAtTime(float desiredTime, int* MinID, int* MaxID, int* count, int* LastSpawnedPointID, float* LastSpawnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime");

	UHoudiniNiagara_HoudiniCSV_GetPointIDsToSpawnAtTime_Params params;
	params.desiredTime = desiredTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinID != nullptr)
		*MinID = params.MinID;
	if (MaxID != nullptr)
		*MaxID = params.MaxID;
	if (count != nullptr)
		*count = params.count;
	if (LastSpawnedPointID != nullptr)
		*LastSpawnedPointID = params.LastSpawnedPointID;
	if (LastSpawnTime != nullptr)
		*LastSpawnTime = params.LastSpawnTime;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniNiagara_HoudiniCSV::GetNumberOfRows()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows");

	UHoudiniNiagara_HoudiniCSV_GetNumberOfRows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniNiagara_HoudiniCSV::GetNumberOfPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints");

	UHoudiniNiagara_HoudiniCSV_GetNumberOfPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniNiagara_HoudiniCSV::GetNumberOfColumns()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns");

	UHoudiniNiagara_HoudiniCSV_GetNumberOfColumns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetNormalValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetNormalValue(int RowIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNormalValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetNormalValue");

	UHoudiniNiagara_HoudiniCSV_GetNormalValue_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          desiredTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            lastRowIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetLastRowIndexAtTime(float desiredTime, int* lastRowIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime");

	UHoudiniNiagara_HoudiniCSV_GetLastRowIndexAtTime_Params params;
	params.desiredTime = desiredTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lastRowIndex != nullptr)
		*lastRowIndex = params.lastRowIndex;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            lastIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetLastPointIDToSpawnAtTime(float Time, int* lastIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime");

	UHoudiniNiagara_HoudiniCSV_GetLastPointIDToSpawnAtTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lastIndex != nullptr)
		*lastIndex = params.lastIndex;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetImpulseValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetImpulseValue(int RowIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetImpulseValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetImpulseValue");

	UHoudiniNiagara_HoudiniCSV_GetImpulseValue_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ColumnTitle                    (Parm, ZeroConstructor)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetFloatValueForString(int RowIndex, const struct FString& ColumnTitle, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString");

	UHoudiniNiagara_HoudiniCSV_GetFloatValueForString_Params params;
	params.RowIndex = RowIndex;
	params.ColumnTitle = ColumnTitle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetFloatValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            colIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetFloatValue(int RowIndex, int colIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetFloatValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetFloatValue");

	UHoudiniNiagara_HoudiniCSV_GetFloatValue_Params params;
	params.RowIndex = RowIndex;
	params.colIndex = colIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ColumnTitle                    (Parm, ZeroConstructor)
// int                            ColumnIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetColumnIndexFromString(const struct FString& ColumnTitle, int* ColumnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString");

	UHoudiniNiagara_HoudiniCSV_GetColumnIndexFromString_Params params;
	params.ColumnTitle = ColumnTitle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColumnIndex != nullptr)
		*ColumnIndex = params.ColumnIndex;

	return params.ReturnValue;
}


// Function HoudiniNiagara.HoudiniCSV.GetColorValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            RowIndex                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniNiagara_HoudiniCSV::GetColorValue(int RowIndex, struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetColorValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function HoudiniNiagara.HoudiniCSV.GetColorValue");

	UHoudiniNiagara_HoudiniCSV_GetColorValue_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
