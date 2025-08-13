
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

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_StaticMesh*      StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CenterPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFoliage_FoliageStatistics::STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UEngine_StaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	UFoliage_FoliageStatistics_FoliageOverlappingSphereCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.CenterPosition = CenterPosition;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_StaticMesh*      StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    Box                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFoliage_FoliageStatistics::STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UEngine_StaticMesh* StaticMesh, const struct FBox& Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	UFoliage_FoliageStatistics_FoliageOverlappingBoxCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.Box = Box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UEngine_PrimitiveComponent* OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AEngine_Actor*           Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UEngine_PrimitiveComponent* OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_HitResult       OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFoliage_InteractiveFoliageActor::CapsuleTouched(class UEngine_PrimitiveComponent* OverlappedComp, class AEngine_Actor* Other, class UEngine_PrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FEngine_HitResult& OverlapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	AFoliage_InteractiveFoliageActor_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSteps                       (Parm, ZeroConstructor, IsPlainOldData)

void UFoliage_ProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	UFoliage_ProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
