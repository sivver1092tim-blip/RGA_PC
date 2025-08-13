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

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UOnlineSubsystemUtils_AchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UOnlineSubsystemUtils_AchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       LockedDescription;                                        // (Parm, OutParm)
	struct FText                                       UnlockedDescription;                                      // (Parm, OutParm)
	bool                                               bHidden;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UOnlineSubsystemUtils_AchievementQueryCallbackProxy_CacheAchievements_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_AchievementQueryCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UOnlineSubsystemUtils_AchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_AchievementQueryCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UOnlineSubsystemUtils_AchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_AchievementWriteCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UOnlineSubsystemUtils_ConnectionCallbackProxy_ConnectToService_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_ConnectionCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UOnlineSubsystemUtils_CreateSessionCallbackProxy_CreateSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_CreateSessionCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UOnlineSubsystemUtils_DestroySessionCallbackProxy_DestroySession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_DestroySessionCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UOnlineSubsystemUtils_EndMatchCallbackProxy_EndMatch_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface> MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_EndMatchCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UOnlineSubsystemUtils_EndTurnCallbackProxy_EndTurn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // (Parm, ZeroConstructor)
	TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface> TurnBasedMatchInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_EndTurnCallbackProxy*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetServerName_Params
{
	struct FOnlineSubsystemUtils_BlueprintSessionResult Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetPingInMs_Params
{
	struct FOnlineSubsystemUtils_BlueprintSessionResult Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetMaxPlayers_Params
{
	struct FOnlineSubsystemUtils_BlueprintSessionResult Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UOnlineSubsystemUtils_FindSessionsCallbackProxy_GetCurrentPlayers_Params
{
	struct FOnlineSubsystemUtils_BlueprintSessionResult Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UOnlineSubsystemUtils_FindSessionsCallbackProxy_FindSessions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_FindSessionsCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UOnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UOnlineSubsystem_TurnBasedMatchInterface> MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowExistingMatches;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
struct UOnlineSubsystemUtils_InAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineSubsystem_InAppPurchaseProductRequest ProductRequest;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UOnlineSubsystemUtils_InAppPurchaseCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
struct UOnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ProductIdentifiers;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UOnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
struct UOnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
{
	TArray<struct FOnlineSubsystem_InAppPurchaseProductRequest> ConsumableProductFlags;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UOnlineSubsystemUtils_JoinSessionCallbackProxy_JoinSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineSubsystemUtils_BlueprintSessionResult SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UOnlineSubsystemUtils_JoinSessionCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct UOnlineSubsystemUtils_LeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct UOnlineSubsystemUtils_LeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_LeaderboardFlushCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct UOnlineSubsystemUtils_LeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_LeaderboardQueryCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct UOnlineSubsystemUtils_LogoutCallbackProxy_Logout_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_LogoutCallbackProxy*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct AOnlineSubsystemUtils_OnlineBeaconClient_ClientOnConnected_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct AOnlineSubsystemUtils_PartyBeaconClient_ServerUpdateReservationRequest_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FOnlineSubsystemUtils_PartyReservation      ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct AOnlineSubsystemUtils_PartyBeaconClient_ServerReservationRequest_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FOnlineSubsystemUtils_PartyReservation      Reservation;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct AOnlineSubsystemUtils_PartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FOnlineSubsystemUtils_PartyReservation      ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct AOnlineSubsystemUtils_PartyBeaconClient_ServerCancelReservationRequest_Params
{
	struct FEngine_UniqueNetIdRepl                     PartyLeader;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct AOnlineSubsystemUtils_PartyBeaconClient_ClientSendReservationUpdates_Params
{
	int                                                NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
struct AOnlineSubsystemUtils_PartyBeaconClient_ClientSendReservationFull_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct AOnlineSubsystemUtils_PartyBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct AOnlineSubsystemUtils_PartyBeaconClient_ClientCancelReservationResponse_Params
{
	TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UOnlineSubsystemUtils_QuitMatchCallbackProxy_QuitMatch_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<FOnlineSubsystem_OnlineSubsystem_EMPMatchOutcome> Outcome;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TurnTimeoutInSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_QuitMatchCallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct AOnlineSubsystemUtils_SpectatorBeaconClient_ServerReservationRequest_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FOnlineSubsystemUtils_SpectatorReservation  Reservation;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct AOnlineSubsystemUtils_SpectatorBeaconClient_ServerCancelReservationRequest_Params
{
	struct FEngine_UniqueNetIdRepl                     Spectator;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct AOnlineSubsystemUtils_SpectatorBeaconClient_ClientSendReservationUpdates_Params
{
	int                                                NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
struct AOnlineSubsystemUtils_SpectatorBeaconClient_ClientSendReservationFull_Params
{
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct AOnlineSubsystemUtils_SpectatorBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct AOnlineSubsystemUtils_SpectatorBeaconClient_ClientCancelReservationResponse_Params
{
	TEnumAsByte<FOnlineSubsystemUtils_OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UOnlineSubsystemUtils_ShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UOnlineSubsystemUtils_ShowLoginUICallbackProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
struct AOnlineSubsystemUtils_TestBeaconClient_ServerPong_Params
{
};

// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
struct AOnlineSubsystemUtils_TestBeaconClient_ClientPing_Params
{
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerDisplayName;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UOnlineSubsystemUtils_TurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // (Parm, ZeroConstructor)
	bool                                               bIsMyTurn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
struct UOnlineSubsystemUtils_VoipListenerSynthComponent_IsIdling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
