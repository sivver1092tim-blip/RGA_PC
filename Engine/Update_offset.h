#pragma once
//#pragma	GCC visibility push(hidden)

// dump.cs															0
#define Offset_BasePetCostumeData_Index								0x0000000010


#define Offset_MessageInfo_CancelButton								0x0000000030


#define Offset_MessageInfo_OKButton									0x0000000038
#define Offset_MessageInfo_OneOKButton								0x0000000040
#define Offset_CBoxUIMessageBox_MessageInfo							0x0000000048
#define Offset_CGameManager_Dic_CActorPlayer						0x0000000028


#define Offset_CGameManager_Dic_CActorMonster						0x0000000030
#define Offset_CGameManager_Dic_CActorNPC							0x0000000038
#define Offset_SCostume_PlayerClass									0x0000000004


#define Offset_SCostume_Order										0x0000000008
#define Offset_SCostume_Grade										0x0000000040
#define Offset_SCostume_Name										0x0000000048
#define Offset_PetInfo_Grade										0x0000000004


#define Offset_PetInfo_Order										0x0000000008
#define Offset_PetInfo_Name											0x0000000010
#define Offset_SkillInfo_Index										0x0000000010


#define Offset_SkillInfo_Type										0x0000000014
#define Offset_SkillInfo_Series										0x0000000020
#define Offset_SkillInfo_Class										0x0000000024
#define Offset_SkillInfo_SubClass									0x00000000C8
#define Offset_SkillInfo_Name										0x0000000038
#define Offset_SkillInfo_AutoType									0x0000000080
#define Offset_SkillInfo_Grade										0x00000000A0
#define Offset_CInventory_GetMaxCount								0x0000000014


#define Offset_CInventory_GetListItem								0x0000000020
#define Offset_CMessageBox_CBoxUIMessageBox							0x0000000048


#define Offset_MessageInfo_TitleText								0x0000000030


#define Offset_MessageInfo_InfoText									0x0000000038
#define Offset_QuestInfo_Kind										0x0000000010


#define Offset_QuestInfo_State										0x0000000014
#define Offset_QuestInfo_ID											0x0000000018
#define Offset_QuestInfo_CurCount									0x000000001C
#define Offset_Quest_TargetInfo_Get_QuestInfo						0x0000000018


#define Offset_CSynthesisManager_CUISynthesisDrawHand				0x0000000140


#define Offset_CUICostume_EquipButton								0x0000000138

#define Offset_CUICostume_ShapeChangeButton							0x0000000148//0x0000000148//


#define Offset_CUICostumeSynthesisView_ToggleGradeTab				0x0000000038


#define Offset_CUICostumeSynthesisView_SynthesisButton				0x0000000070
#define Offset_CUICostumeSynthesisView_AutoRegisterButton			0x0000000078
#define Offset_CUICostumeWindow_ToggleTabList						0x0000000060


#define Offset_CUICostumeWindow_ListCostume							0x0000000070
#define Offset_CUIResources_SkipButton								0x0000000048


#define Offset_CUIIntro_CUIIntroMessagePopup						0x0000000050	// public class CUIIntro :    public CUIIntroMessagePopup m_messagePopup;


#define Offset_CUILobby_CUILobbyCreate								0x0000000020


#define Offset_CUILobby_CUILobbySelect								0x0000000028
#define Offset_CUILobbyCreate_ClassSelector_ToggleGroup				0x0000000030


#define Offset_CUILobbySelect_SelectCharSlotList					0x0000000098


#define Offset_CUILobbySelectCharSlot_UIToggle						0x0000000058


#define Offset_CUILogin_CUIWorldSelectPopup							0x0000000068


#define Offset_CUILogin_CUIWatingPopup								0x0000000080            // public class CUILogin :	private CUIWatingPopup m_watingPopup;
#define Offset_CUILogin_EStateInfo									0x00000000D8
#define Offset_CUIPet_CPetDataList									0x0000000128


#define Offset_CUIPet_EquipButton									0x0000000130
#define Offset_CUIPet_ShapeChangeButton								0x0000000018	// public class CUIPetSynthesisView :           / private UIToggle[] m_aryToggleGradeTab; --- find in the dump.cs
#define Offset_CUIPetSynthesisView_ToggleGradeTab					0x0000000038


#define Offset_CUIPetSynthesisView_SynthesisButton					0x0000000070
#define Offset_CUIPetSynthesisView_AutoRegisterButton				0x0000000078
#define Offset_CUIPetWindow_ToggleTabList							0x0000000060


#define Offset_CUIPetWindow_ListPet									0x0000000078
#define Offset_CUISelectBoxSlot_RewardItem							0x0000000058


#define Offset_CUISelectBoxSlot_ItemInfo_ID							0x000000001C


#define Offset_CUISelectBox_Popup_ItemSlotList						0x0000000098


#define Offset_CUISelectBox_Popup_SelectIndex						0x00000000A8
#define Offset_CUISelectBox_Popup_CurCount							0x00000000AC
#define Offset_CUISelectBox_Popup_MaxCount							0x00000000B0
#define Offset_QuickSlotInfo_RegType								0x0000000019


#define Offset_QuickSlotInfo_RegID									0x000000001C
#define Offset_QuickSlotInfo_RegItemUID								0x0000000020
#define Offset_ToggleGroup_ToggleList								0x0000000028


#define Offset_Item_Group_Index										0x0000000004


#define Offset_ItemBelong											0x0000000008
#define Offset_ItemTrade											0x000000001A
#define Offset_ItemWarehouse										0x000000001B
#define Offset_ItemDescDetail										0x0000000030
#define Offset_ItemGroupData_Type									0x0000000014


#define Offset_ItemGroupData_Kind									0x0000000018
#define Offset_ItemGrade											0x000000001C
#define Offset_ItemClass											0x0000000020
#define Offset_ItemNameString										0x0000000028
#define Offset_ItemGroupData_ShopSellType							0x0000000054
#define Offset_ItemGroupData_DissolveCheck							0x0000000064
#define Offset_ItemGroupData_Destroy								0x000000006C
#define Offset_ItemEquipSlot										0x0000000078


#define Offset_ItemEnchantData										0x000000007C
#define Offset_CGameTable_SEnchant_Check							0x0000000000


#define Offset_CGameTable_SEnchant_Safe								0x0000000004
#define Offset_ItemDescDetail_MaxEnchant							0x0000000008
#define Offset_CUIGroupWindow_ToggleArray							0x0000000040


#define Offset_CUIStatInfoPopup_CUICharInfoViewStat					0x0000000080


#define Offset_CUIItemSlot_SelectedLine								0x00000000C0


#define Offset_CUIDissolveWindow_CUIGradeCheckPopup					0x00000000A0


#define Offset_CUIEnchant_MaterialInfo_InvenScroll					0x0000000028


#define Offset_CUIEnchant_MaterialInfo_MaterialSlotList				0x0000000040
#define Offset_CUIEnchant_MaterialInfo_TargetEnchantStep			0x0000000088
#define Offset_CUIEnchant_MaterialInfo_TargetEnchantStepMax			0x0000000094
#define Offset_CUIEnchant_MaterialInfo_TargetEnchantStepSafe		0x0000000098
#define Offset_CUIEnchant_MaterialSlots_CUIItemSlot					0x0000000020


#define Offset_CUIEnchant_MaterialSlots_CSlotInfo_Item				0x0000000038
#define Offset_CUIEnchant_ResultOnePopup_IsEnchantResultShow		0x00000000F0


#define Offset_CGameTable_SMapData_MapLocalName						0x0000000008


#define Offset_CGameTable_SMapData_SMap_Enter						0x0000000064
#define Offset_CGameTable_SMapData_TerritoryIndex					0x00000000B4
#define Offset_CUIWorldMapWindow_Current_AreaMapPoint				0x0000000430


#define Offset_CUIAreaMapPoint_EWorldPointType						0x0000000020


#define Offset_CUIAreaMapPoint_txtName								0x0000000030
#define Offset_CUIAreaMapPoint_IsHideSlot							0x000000009C
#define Offset_CUIDungeonWindow_UIToggleArray						0x0000000040


#define Offset_CUIDungeonWindow_DungeonSlotList						0x0000000048
#define Offset_CUIDungeonWindow_CUIDungeonFloorInfoPopup			0x0000000058
#define Offset_CUIDungeonWindow_CUIDungeonChargeTimePopup			0x0000000060
#define Offset_CUIDungeonWindow_DungeonSlotDataList					0x0000000098
#define Offset_CUIDungeonSlot_SDungeonUI							0x00000001D8


#define Offset_CGameTable_SDungeonUI_MapIndex						0x0000000004


#define Offset_CGameTable_SDungeonUI_MapOrder						0x0000000018
#define Offset_CGameTable_SDungeonUI_MapName						0x0000000028
#define Offset_CGameTable_SDungeonUI_Map_Floor_Group				0x0000000058
#define Offset_DungeonSlotData_Order								0x0000000018


#define Offset_CUIDungeonFloorSlot_NameText							0x0000000020


#define Offset_CGameTable_SMap_Enter_Limit_Group					0x0000000024


#define Offset_MapLimitData_LimitType								0x0000000018


#define Offset_MapLimitData_PlayTime								0x000000001C
#define Offset_MapLimitData_ChargeTime								0x0000000020
#define Offset_MapLimitData_RemainEntryCount						0x000000002C
#define Offset_COption_CSystem										0x0000000010


#define Offset_COption_CBattle										0x0000000090
#define Offset_COption_CEnvironment									0x0000000158
#define Offset_COption_CAlarm										0x00000001A8
#define Offset_CUINpcShopBuyOrSellPopup_Slider						0x0000000070


#define Offset_CUINpcShopBuyOrSellPopup_CSlotInfo_Item				0x00000000F0
#define Offset_CUINpcShopBuyOrSellPopup_ENpcShopStateType			0x00000000F8
#define Offset_CUINpcShopBuyOrSellPopup_CurrentItemCount			0x00000000FC
#define Offset_CUINpcShopBuyOrSellPopup_ItemCountMin				0x0000000100
#define Offset_CUINpcShopBuyOrSellPopup_ItemCountMax				0x0000000104
#define Offset_CUINpcShopBuyOrSellPopup_BuyUnitCount				0x000000010C
#define Offset_CUINpcShopSellInfo_InvenScroll						0x0000000038


#define Offset_CUINpcShopSellInfo_IsCheckkAll						0x0000000088
#define Offset_CUINpcShopBuyInfo_listViewBuyGoods					0x0000000058


#define Offset_CUINpcShopBuyInfo_listNpcShopGoodsSlots				0x0000000070
#define Offset_CUINpcShopGoodsSlot_NpcShopItemIndex					0x00000000BC


#define Offset_CUINpcShopGoodsSlot_npcShopIndex						0x00000000C0
#define Offset_CUINpcShopGoodsSlot_CSlotInfo_Item					0x00000000C8
#define Offset_CUINpcShopGoodsSlot_bIsSoldOut						0x00000000D8
#define Offset_CUINpcShopGoodsSlot_bIsHpPotionItem					0x00000000DA
#define Offset_CGameTable_SNPC_Shop_Item_SBuy_Item					0x000000000C


#define Offset_CGameTable_SNPC_Shop_Item_SProperty					0x0000000014
#define Offset_CGameTable_SNPC_Shop_Item_SBuy_Limit					0x0000000020
#define Offset_CGameTable_SBuy_Item_Buy_Unit_Count					0x0000000004


#define Offset_CGameTable_SProperty_Cash_Type						0x0000000004


#define Offset_CGameTable_SProperty_Cash_Price						0x0000000008
#define Offset_CGameTable_SBuy_Limit_Player_Level					0x0000000004


#define Offset_CGameTable_SBuy_Limit_Use_Class						0x0000000008
#define Offset_CGameTable_SBuy_Limit_Guild_Level					0x0000000020
#define Offset_CUIStorageWindow_LeftInven							0x0000000058


#define Offset_CUIStorageWindow_RightInven							0x0000000098
#define Offset_CUIStorageWindow_RetrieveItemList					0x00000000E8
#define Offset_CUIStorageWindow_CostValue							0x0000000128
#define Offset_CUIDeathPopup_btnBaseCamp							0x00000000E8


#define Offset_CUIDeathPopup_fButtonActiveDelayTime					0x0000000164
#define Offset_CUISkillCyclePopup_SkillIndex						0x00000000B8


#define Offset_CUISkillCyclePopup_IsTimeOn							0x00000000BC
#define Offset_CUISkillCyclePopup_MinSecond							0x00000000C0
#define Offset_CUISkillCyclePopup_MaxSecond							0x00000000C4
#define Offset_CUISkillCyclePopup_CurSecond							0x00000000C8
#define Offset_SkillViewsHolder_CUISkillSlot						0x0000000030


#define Offset_CSkillCycleUseInfo_SkillIndex						0x0000000010


#define Offset_CSkillCycleUseInfo_bUse								0x0000000014
#define Offset_CSkillCycleUseInfo_Time								0x0000000018
#define Offset_COption_CEnvironment_GraphicResolution				0x0000000024


#define Offset_COption_CEnvironment_AllGraphicQuality				0x000000002C
#define Offset_COption_CEnvironment_FrameControl					0x000000003C
#define Offset_COption_CBattle_MannerMode							0x0000000000


#define Offset_COption_CBattle_AutoHuntingSearchScope				0x0000000004
#define Offset_COption_CBattle_AutoUsePercent_S						0x0000000010
#define Offset_COption_CBattle_AutoUsePercent_M						0x0000000014
#define Offset_COption_CBattle_PickupEquipGrade						0x0000000028
#define Offset_COption_CBattle_PickupUseItem						0x000000002C
#define Offset_COption_CBattle_PickupMaterialItem					0x000000002D
#define Offset_COption_CBattle_SleepMode							0x0000000030
#define Offset_COption_CBattle_CamerVibrate							0x0000000051
#define Offset_COption_CAlarm_ItemGlobalMessageCharacterHide		0x000000003C


#define Offset_CUIAttendanceWindow_AttendanceList					0x0000000078


#define Offset_CUIAttendanceWindow_TapTopListView					0x0000000080
#define Offset_CUIAttendanceView_attendanceSlot						0x0000000040


#define Offset_CUIPostWindow_btnAllReceive							0x0000000070


#define Offset_CUIPostWindow_CurPostCount							0x0000000090
#define Offset_CUIQuestViewAchieve_Menu								0x0000000038


#define Offset_CUIQuestViewAchieve_ScrollList						0x0000000048
#define Offset_CUIQuestAchieveMenu_SelectCategory					0x0000000030


#define Offset_CUIQuestAchieveMenu_dicMenuButton					0x0000000038
#define Offset_AchieveViewHolder_CUIQuestAchieveSlot				0x0000000030


#define Offset_CUIQuestAchieveSlot_btnReward						0x0000000040


#define Offset_CUIGuildWindow_CUIGuildPopupAttendance				0x0000000070


#define Offset_CUIGuildWindow_CUIGuildPopupGift						0x0000000080
#define Offset_CUIGuildPopupGift_SlotArray							0x0000000048


#define Offset_CUIGuildPopupGiftSlot_GiftType						0x0000000020


#define Offset_CUIGuildPopupGiftSlot_btnDonate						0x0000000048
#define Offset_CUIEventMissionPopup_TabDataList						0x00000000A8


#define Offset_CUIEventMissionPopup_SelectEnventDataIndex			0x00000000B0
#define Offset_CUIEventMissionPopup_LevelStepSlotList				0x00000000B8
#define Offset_CUIEventMissionPopup_SubMissionSlotList				0x00000000C8
#define Offset_CUIEventMission_ToggleTab_MainToggle					0x0000000020


#define Offset_CUIEventMission_ToggleTab_RedDotAlram				0x0000000030
#define Offset_CUIEventMission_ToggleTab_EventDataIndex				0x000000003C
#define Offset_CUIEventMission_SubMission_Slot_Status				0x0000000070


#define Offset_CUIEventMission_LevelStep_Slot_Status				0x000000006C


#define Offset_CUIRevivalAskPopup_btnRestore						0x0000000060


#define Offset_CUIRepairPopup_uIToggles								0x00000000A0


#define Offset_CUIRepairPopup_tglProperty							0x00000000A8
#define Offset_CUIRepairPopup_RepairSlotList						0x0000000108
#define Offset_CUIRepairPopup_EPropertySubType						0x0000000134
#define Offset_CUIRepairPopup_ERestoreType							0x0000000138
#define Offset_CUIRepairBaseSlot_BtnSelect							0x0000000020


#define Offset_CUIMainMenu_btnRestore								0x0000000070


#define Offset_CUIMainMenu_btnDungeon								0x0000000078
#define Offset_SMapFloorGroup_WrapIndex								0x0000000000


#define Offset_SMapFloorGroup_FloorName								0x0000000008
#define Offset_CGameTable_SWarpData_SSpawn							0x0000000010


#define Offset_CUICalculatorWindow_nCurrentItemCount				0x0000000090


#define Offset_CUICalculatorWindow_nItemCountMin					0x0000000094
#define Offset_CUICalculatorWindow_nItemCountMax					0x0000000098
#define Offset_CUIStoreWindow_StoreUI_Package						0x00000000D8


#define Offset_CUIStoreWindow_StoreUI_Normal						0x00000000E0
#define Offset_CUIStoreWindow_BuyCheck_Popup						0x00000000F0
#define Offset_CUIStoreWindow_BatchBuy_Popup						0x00000000F8
#define Offset_CUIStoreWindow_LockerBox_Popup						0x0000000100
#define Offset_CUIStoreWindow_MainTabIndex							0x0000000190
#define Offset_CUIStoreWindow_SubTabIndex							0x0000000194
#define Offset_CUIStoreWindow_SubCategorySlotList					0x0000000180
#define Offset_CUIStoreWindow_StoreUI_Base_StoreSlotList			0x0000000030


#define Offset_CUIStoreWindow_Scroll_BaseSlot_StoreItemData			0x0000000160


#define Offset_StoreItemData_StoreIndex								0x0000000014


#define Offset_StoreItemData_PurchasedCount							0x000000001C
#define Offset_CGameTable_SStore_On_Sale							0x0000000018


#define Offset_CGameTable_SStore_SStoreItem							0x0000000030
#define Offset_CGameTable_SStore_SProperty							0x0000000064
#define Offset_CGameTable_SStore_SStoreLimit						0x0000000074
#define Offset_CGameTable_SStoreItem_Type							0x0000000000


#define Offset_CGameTable_SStoreItem_Name							0x0000000008
#define Offset_CGameTable_SStoreLimit_Max_Count						0x0000000000


#define Offset_CGameTable_SStoreLimit_Max_Stack						0x0000000004
#define Offset_CGameTable_SStoreLimit_UseClass						0x000000000C
#define Offset_CGameTable_SStoreLimit_MinLevel						0x0000000010
#define Offset_CGameTable_SStoreLimit_MaxLevel						0x0000000014
#define Offset_CUIStoreWindow_BuyCheck_Popup_StoreTableIndex		0x0000000138


#define Offset_CUIStoreWindow_BuyCheck_Popup_CashType				0x0000000140
#define Offset_CUIStoreWindow_BuyCheck_Popup_CurCount				0x0000000148
#define Offset_CUIStoreWindow_BuyCheck_Popup_MaxCount				0x000000014C
#define Offset_CUIStoreWindow_BuyCheck_Popup_CostCheck				0x000000015A
#define Offset_CUIQuestRequestSlot_QuestData						0x0000000068


#define Offset_CUIQuestViewRequest_MissionListView					0x0000000048


#define Offset_CUIQuestViewRequest_SUILeftInfo						0x0000000050
#define Offset_CUIQuestViewRequest_GoodsType						0x0000000118
#define Offset_CUIQuestViewRequest_UsedCntRefreshGold				0x000000011C
#define Offset_CUIQuestViewRequest_NeedPropertyRefreshGold			0x0000000124
#define Offset_CUIQuestViewRequest_CurProgressCnt					0x000000012C
#define Offset_CUIQuestViewRequest_CurCompleteCnt					0x0000000130
#define Offset_CUIQuestViewRequest_MaxCntRefreshGold				0x0000000134
#define Offset_CUIQuestViewRequest_SUILeftInfo_ToggleList			0x0000000018


#define Offset_CUIQuestViewRequest_SUILeftInfo_RefreshBtn			0x0000000020
#define Offset_UIListView_Content									0x0000000028


#define Offset_CGameTable_SCommissionData_Grade						0x0000000008


#define Offset_CGameTable_SCommissionData_SCommission_Lv			0x000000000C
#define Offset_CGameTable_SCommissionData_Commission_Name			0x0000000018
#define Offset_CGameTable_SCommissionData_SSCommision_Reward_Goods	0x0000000058
#define Offset_CGameTable_SCommissionData_SRandomReward_Items		0x0000000068
#define Offset_CGameTable_SSCommision_Reward_Goods_Exp				0x0000000000


#define Offset_CGameTable_SSCommision_Reward_Goods_Gold				0x0000000004
#define Offset_CGameTable_SSCommision_Reward_Goods_Honor_Coin		0x0000000008
#define Offset_CGameTable_SRandomReward_Item_Index					0x0000000000


#define Offset_CGameTable_SRandomReward_Item_Value					0x0000000004
#define Offset_CItemCollection_ListCompletedCollection				0x0000000018


#define Offset_CItemCollection_ListProceedingCollection				0x0000000020
#define Offset_CGameTable_SItemCollection_Category					0x0000000004


#define Offset_CGameTable_SItemCollection_ItemGroup					0x0000000018
#define Offset_CGameTable_SItemGroup_ItemEnchant					0x0000000000


#define Offset_CGameTable_SItemGroup_Item_Group_ID					0x0000000004
#define Offset_ItemCollectionInfo_collectionIndex					0x0000000014


#define Offset_ItemCollectionInfo_completedSlotIndexList			0x0000000018
#define Offset_ItemCollectionSlots_index							0x0000000014


#define Offset_ItemCollectionSlots_slots							0x0000000018
#define Offset_CUIAuctionWindow_SearchSetting_Popup					0x00000000D0


#define Offset_CUIAuctionWindow_ItemBuy_Popup						0x00000000D8
#define Offset_CUIAuctionWindow_ItemSale_Popup						0x00000000E0
#define Offset_CUIAuctionWindow_Sale_Public_Popup					0x00000000E8
#define Offset_CUIAuctionWindow_BuyResult_Popup						0x00000000F0
#define Offset_CUIAuctionSaleView_SaleScrollView					0x0000000048


#define Offset_CUIAuctionSaleView_InvenScroll						0x0000000050
#define Offset_CUIAuctionSaleView_SaleItemList						0x0000000070
#define Offset_CUIAuctionSaleView_AuctionLevel						0x000000007C
#define Offset_CUIAuctionSaleViewScrollView_SlotModel_ItemIndex		0x0000000010


#define Offset_CUIAuctionSaleViewScrollView_SlotModel_AuctionInfo	0x0000000018
#define Offset_CUIAuctionSaleViewScrollView_SlotModel_ItemInfo		0x0000000020
#define Offset_MyAuctionElement_TradeStatus							0x0000000015


#define Offset_MyAuctionElement_AuctionElement						0x0000000018
#define Offset_AuctionElement_auctionDBID							0x0000000018


#define Offset_AuctionElement_itemCount								0x0000000024
#define Offset_AuctionElement_itemEnchant							0x0000000028
#define Offset_AuctionElement_saleAmount							0x0000000038
#define Offset_AuctionElement_remainSec								0x0000000040
#define Offset_AuctionElement_IsMyItem								0x0000000044
#define Offset_CUIAuctionListView_ListViewScrollView				0x00000000A0


#define Offset_CUIAuctionListView_stackAuctionList					0x0000000100
#define Offset_CUIAuctionListView_CAuctionList_AuctionList			0x0000000010


#define Offset_CUIAuctionListView_CAuctionList_ListType				0x0000000024
#define Offset_CUIAuctionListView_CAuctionList_ItemIndex			0x0000000028
#define Offset_CUIAuctionListView_CAuctionList_ItemEnchant			0x000000002C
#define Offset_CUIAuctionListView_SlotModel_ItemDataIndex			0x0000000010


#define Offset_CUIAuctionListView_SlotModel_AuctionElement			0x0000000018
#define Offset_CUIAuctionListView_SlotModel_ItemInfo				0x0000000020
#define Offset_CUIAuctionListView_SlotModel_IsExistAuction			0x0000000034
#define Offset_CUIAuctionListViewScrollView_SlotViewsHolder_Slot	0x0000000030


#define Offset_CGameTable_SAuctionLevel_TotalSellPrice				0x0000000010


#define Offset_CUIGuildViewList_CUIGuildViewListOSA					0x0000000038


#define Offset_CGuildInfoSlotHolder_CUIGuildSlotListOSAParam		0x0000000030


#define Offset_CUIGuildSlotListOSAParam_GuildSimpleInfo				0x00000000B0


#define Offset_CUIItemMakeWindow_SelectTabType						0x000000006C


#define Offset_CUIItemMakeWindow_SelectMainNumber					0x0000000070
#define Offset_CUIItemMakeWindow_SelectSubNumber					0x0000000074
#define Offset_CUIItemMakeWindow_SelectSlotID						0x0000000078
#define Offset_CUIItemMakeWindow_MakeCount							0x000000007C
#define Offset_CUIItemMakeWindow_MaxCount							0x0000000080
#define Offset_CUIItemMakeView_BtnMake								0x00000000A8


#define Offset_CUIDungeonSlot_m_goLock								0x00000000C0


#define Offset_CGameTable_SEnchantGrowthAbility_Type				0x0000000000


#define Offset_CGameTable_SEnchantGrowthAbility_Value				0x0000000004
#define Offset_CGameTable_SItemUseGroup_UseLevel					0x0000000084


#define Offset_CGameTable_SUseLevel_Min								0x0000000000


#define Offset_CGameTable_SUseLevel_Max								0x0000000004
#define Offset_CUISkillOSA_ToggleUseWeapons							0x0000000000


#define Offset_CUISkillOSA_TabToggle								0x0000000198
#define Offset_CGameTable_SMapDungeonData_OpenTime					0x0000000018


#define Offset_CGameTable_SEntryOpen_Time_Start						0x0000000000


#define Offset_CGameTable_SEntryOpen_Time_End						0x0000000008
#define Offset_CUIDungeonResultPopup_List							0x0000000040


#define Offset_CUIDungeonPopupBase_Type								0x0000000020


#define Offset_CUIDungeonRewardPopup_btnOk							0x0000000050


#define Offset_CUIDungeonFloorInfoPopup_MapNameText					0x0000000028


#define Offset_CUIDungeonFloorInfoPopup_FloorList					0x0000000038


//----------------------
#define Offset_CServerObject_ServerID								0x0000000034


#define Offset_CServerObject_ServerName								0x0000000028
#define Offset_CServerObject_IsInspection							0x0000000014
#define Offset_CServerObject_CanCreate								0x0000000024
#define Offset_CServerObject_ServerStatus							0x0000000038
#define Offset_CWorldObject_GroupId									0x0000000000



#define Offset_CWorldObject_GroupName								0x0000000000
#define Offset_CWorldObject_GroupServerList							0x0000000000

// #define Offset_CUICharInfoStatSlot_MaxAP							0x0000000070
// #define Offset_CUICharInfoStatSlot_CurAP							0x0000000074
// #define Offset_CUICharInfoStatSlot_PlusAP						0x0000000078
//----------------------

#define Offset_GridAdapter_ScrollTo_Offset							0x0000000318

//#pragma GCC visibility pop