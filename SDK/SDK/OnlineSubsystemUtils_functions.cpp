
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

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOnlineSubsystemUtils_AchievementBlueprintLibrary::STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress");

	UOnlineSubsystemUtils_AchievementBlueprintLibrary_GetCachedAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm, OutParm)
// struct FText                   LockedDescription              (Parm, OutParm)
// struct FText                   UnlockedDescription            (Parm, OutParm)
// bool                           bHidden                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOnlineSubsystemUtils_AchievementBlueprintLibrary::STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription");

	UOnlineSubsystemUtils_AchievementBlueprintLibrary_GetCachedAchievementDescription_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_AchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_AchievementQueryCallbackProxy* UOnlineSubsystemUtils_AchievementQueryCallbackProxy::STATIC_CacheAchievements(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	UOnlineSubsystemUtils_AchievementQueryCallbackProxy_CacheAchievements_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_AchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_AchievementQueryCallbackProxy* UOnlineSubsystemUtils_AchievementQueryCallbackProxy::STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	UOnlineSubsystemUtils_AchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AchievementName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            UserTag                        (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_AchievementWriteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_AchievementWriteCallbackProxy* UOnlineSubsystemUtils_AchievementWriteCallbackProxy::STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	UOnlineSubsystemUtils_AchievementWriteCallbackProxy_WriteAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.Progress = Progress;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_ConnectionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_ConnectionCallbackProxy* UOnlineSubsystemUtils_ConnectionCallbackProxy::STATIC_ConnectToService(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	UOnlineSubsystemUtils_ConnectionCallbackProxy_ConnectToService_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_CreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_CreateSessionCallbackProxy* UOnlineSubsystemUtils_CreateSessionCallbackProxy::STATIC_CreateSession(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, int PublicConnections, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	UOnlineSubsystemUtils_CreateSessionCallbackProxy_CreateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_DestroySessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_DestroySessionCallbackProxy* UOnlineSubsystemUtils_DestroySessionCallbackProxy::STATIC_DestroySession(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	UOnlineSubsystemUtils_DestroySessionCallbackProxy_DestroySession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchID                        (Parm, ZeroConstructor)
// TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome            (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_EndMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_EndMatchCallbackProxy* UOnlineSubsystemUtils_EndMatchCallbackProxy::STATIC_EndMatch(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	UOnlineSubsystemUtils_EndMatchCallbackProxy_EndMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MatchID = MatchID;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchID                        (Parm, ZeroConstructor)
// TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface> TurnBasedMatchInterface        (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_EndTurnCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_EndTurnCallbackProxy* UOnlineSubsystemUtils_EndTurnCallbackProxy::STATIC_EndTurn(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface>& TurnBasedMatchInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	UOnlineSubsystemUtils_EndTurnCallbackProxy_EndTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineSubsystemUtils_BlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOnlineSubsystemUtils_FindSessionsCallbackProxy::STATIC_GetServerName(const struct FOnlineSubsystemUtils_BlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetServerName_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineSubsystemUtils_BlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOnlineSubsystemUtils_FindSessionsCallbackProxy::STATIC_GetPingInMs(const struct FOnlineSubsystemUtils_BlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetPingInMs_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineSubsystemUtils_BlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOnlineSubsystemUtils_FindSessionsCallbackProxy::STATIC_GetMaxPlayers(const struct FOnlineSubsystemUtils_BlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetMaxPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOnlineSubsystemUtils_BlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOnlineSubsystemUtils_FindSessionsCallbackProxy::STATIC_GetCurrentPlayers(const struct FOnlineSubsystemUtils_BlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetCurrentPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_FindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_FindSessionsCallbackProxy* UOnlineSubsystemUtils_FindSessionsCallbackProxy::STATIC_FindSessions(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, int MaxResults, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	UOnlineSubsystemUtils_FindSessionsCallbackProxy_FindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowExistingMatches            (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy* UOnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy::STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	UOnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineSubsystem_InAppPurchaseProductRequest ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UOnlineSubsystemUtils_InAppPurchaseCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_InAppPurchaseCallbackProxy* UOnlineSubsystemUtils_InAppPurchaseCallbackProxy::STATIC_CreateProxyObjectForInAppPurchase(class AEngine_PlayerController* PlayerController, const struct FOnlineSubsystem_InAppPurchaseProductRequest& ProductRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");

	UOnlineSubsystemUtils_InAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params params;
	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UOnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy* UOnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseQuery(class AEngine_PlayerController* PlayerController, TArray<struct FString> ProductIdentifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");

	UOnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FOnlineSubsystem_InAppPurchaseProductRequest> ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy* UOnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FOnlineSubsystem_InAppPurchaseProductRequest> ConsumableProductFlags, class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");

	UOnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineSubsystemUtils_BlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UOnlineSubsystemUtils_JoinSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_JoinSessionCallbackProxy* UOnlineSubsystemUtils_JoinSessionCallbackProxy::STATIC_JoinSession(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FOnlineSubsystemUtils_BlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	UOnlineSubsystemUtils_JoinSessionCallbackProxy_JoinSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            StatValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineSubsystemUtils_LeaderboardBlueprintLibrary::STATIC_WriteLeaderboardInteger(class AEngine_PlayerController* PlayerController, const struct FName& StatName, int StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger");

	UOnlineSubsystemUtils_LeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_LeaderboardFlushCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_LeaderboardFlushCallbackProxy* UOnlineSubsystemUtils_LeaderboardFlushCallbackProxy::STATIC_CreateProxyObjectForFlush(class AEngine_PlayerController* PlayerController, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	UOnlineSubsystemUtils_LeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params params;
	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_LeaderboardQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_LeaderboardQueryCallbackProxy* UOnlineSubsystemUtils_LeaderboardQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(class AEngine_PlayerController* PlayerController, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	UOnlineSubsystemUtils_LeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_LogoutCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_LogoutCallbackProxy* UOnlineSubsystemUtils_LogoutCallbackProxy::STATIC_Logout(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	UOnlineSubsystemUtils_LogoutCallbackProxy_Logout_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AOnlineSubsystemUtils_OnlineBeaconClient::ClientOnConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");

	AOnlineSubsystemUtils_OnlineBeaconClient_ClientOnConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FOnlineSubsystemUtils_PartyReservation ReservationUpdate              (ConstParm, Parm, ReferenceParm)

void AOnlineSubsystemUtils_PartyBeaconClient::ServerUpdateReservationRequest(const struct FString& SessionId, const struct FOnlineSubsystemUtils_PartyReservation& ReservationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	AOnlineSubsystemUtils_PartyBeaconClient_ServerUpdateReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FOnlineSubsystemUtils_PartyReservation Reservation                    (ConstParm, Parm, ReferenceParm)

void AOnlineSubsystemUtils_PartyBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FOnlineSubsystemUtils_PartyReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	AOnlineSubsystemUtils_PartyBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FOnlineSubsystemUtils_PartyReservation ReservationUpdate              (ConstParm, Parm, ReferenceParm)

void AOnlineSubsystemUtils_PartyBeaconClient::ServerRemoveMemberFromReservationRequest(const struct FString& SessionId, const struct FOnlineSubsystemUtils_PartyReservation& ReservationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest");

	AOnlineSubsystemUtils_PartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FEngine_UniqueNetIdRepl PartyLeader                    (ConstParm, Parm, ReferenceParm)

void AOnlineSubsystemUtils_PartyBeaconClient::ServerCancelReservationRequest(const struct FEngine_UniqueNetIdRepl& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	AOnlineSubsystemUtils_PartyBeaconClient_ServerCancelReservationRequest_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData)

void AOnlineSubsystemUtils_PartyBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");

	AOnlineSubsystemUtils_PartyBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)

void AOnlineSubsystemUtils_PartyBeaconClient::ClientSendReservationFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");

	AOnlineSubsystemUtils_PartyBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)

void AOnlineSubsystemUtils_PartyBeaconClient::ClientReservationResponse(TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");

	AOnlineSubsystemUtils_PartyBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)

void AOnlineSubsystemUtils_PartyBeaconClient::ClientCancelReservationResponse(TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");

	AOnlineSubsystemUtils_PartyBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchID                        (Parm, ZeroConstructor)
// TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> Outcome                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            TurnTimeoutInSeconds           (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_QuitMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_QuitMatchCallbackProxy* UOnlineSubsystemUtils_QuitMatchCallbackProxy::STATIC_QuitMatch(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	UOnlineSubsystemUtils_QuitMatchCallbackProxy_QuitMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FOnlineSubsystemUtils_SpectatorReservation Reservation                    (ConstParm, Parm, ReferenceParm)

void AOnlineSubsystemUtils_SpectatorBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FOnlineSubsystemUtils_SpectatorReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");

	AOnlineSubsystemUtils_SpectatorBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FEngine_UniqueNetIdRepl Spectator                      (ConstParm, Parm, ReferenceParm)

void AOnlineSubsystemUtils_SpectatorBeaconClient::ServerCancelReservationRequest(const struct FEngine_UniqueNetIdRepl& Spectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");

	AOnlineSubsystemUtils_SpectatorBeaconClient_ServerCancelReservationRequest_Params params;
	params.Spectator = Spectator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData)

void AOnlineSubsystemUtils_SpectatorBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates");

	AOnlineSubsystemUtils_SpectatorBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)

void AOnlineSubsystemUtils_SpectatorBeaconClient::ClientSendReservationFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull");

	AOnlineSubsystemUtils_SpectatorBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)

void AOnlineSubsystemUtils_SpectatorBeaconClient::ClientReservationResponse(TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse");

	AOnlineSubsystemUtils_SpectatorBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)

void AOnlineSubsystemUtils_SpectatorBeaconClient::ClientCancelReservationResponse(TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse");

	AOnlineSubsystemUtils_SpectatorBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)
// class UOnlineSubsystemUtils_ShowLoginUICallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineSubsystemUtils_ShowLoginUICallbackProxy* UOnlineSubsystemUtils_ShowLoginUICallbackProxy::STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class AEngine_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	UOnlineSubsystemUtils_ShowLoginUICallbackProxy_ShowExternalLoginUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AOnlineSubsystemUtils_TestBeaconClient::ServerPong()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong");

	AOnlineSubsystemUtils_TestBeaconClient_ServerPong_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)

void AOnlineSubsystemUtils_TestBeaconClient::ClientPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing");

	AOnlineSubsystemUtils_TestBeaconClient_ClientPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UOnlineSubsystemUtils_TurnBasedBlueprintLibrary::STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject");

	UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchID                        (Parm, ZeroConstructor)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerDisplayName              (Parm, OutParm, ZeroConstructor)

void UOnlineSubsystemUtils_TurnBasedBlueprintLibrary::STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName");

	UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_GetPlayerDisplayName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchID                        (Parm, ZeroConstructor)
// int                            PlayerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOnlineSubsystemUtils_TurnBasedBlueprintLibrary::STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex");

	UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_GetMyPlayerIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_PlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchID                        (Parm, ZeroConstructor)
// bool                           bIsMyTurn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOnlineSubsystemUtils_TurnBasedBlueprintLibrary::STATIC_GetIsMyTurn(class UObject* WorldContextObject, class AEngine_PlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn");

	UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_GetIsMyTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;
}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlineSubsystemUtils_VoipListenerSynthComponent::IsIdling()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");

	UOnlineSubsystemUtils_VoipListenerSynthComponent_IsIdling_Params params;

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
