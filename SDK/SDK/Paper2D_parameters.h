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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
struct UPaper2D_PaperFlipbook_IsValidKeyFrameIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetTotalDuration
struct UPaper2D_PaperFlipbook_GetTotalDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtTime
struct UPaper2D_PaperFlipbook_GetSpriteAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaper2D_PaperSprite*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
struct UPaper2D_PaperFlipbook_GetSpriteAtFrame_Params
{
	int                                                FrameIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaper2D_PaperSprite*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetNumKeyFrames
struct UPaper2D_PaperFlipbook_GetNumKeyFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetNumFrames
struct UPaper2D_PaperFlipbook_GetNumFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
struct UPaper2D_PaperFlipbook_GetKeyFrameIndexAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.Stop
struct UPaper2D_PaperFlipbookComponent_Stop_Params
{
};

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
struct UPaper2D_PaperFlipbookComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
struct UPaper2D_PaperFlipbookComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
struct UPaper2D_PaperFlipbookComponent_SetPlaybackPositionInFrames_Params
{
	int                                                NewFramePosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
struct UPaper2D_PaperFlipbookComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetNewTime
struct UPaper2D_PaperFlipbookComponent_SetNewTime_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetLooping
struct UPaper2D_PaperFlipbookComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
struct UPaper2D_PaperFlipbookComponent_SetFlipbook_Params
{
	class UPaper2D_PaperFlipbook*                      NewFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
struct UPaper2D_PaperFlipbookComponent_ReverseFromEnd_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Reverse
struct UPaper2D_PaperFlipbookComponent_Reverse_Params
{
};

// Function Paper2D.PaperFlipbookComponent.PlayFromStart
struct UPaper2D_PaperFlipbookComponent_PlayFromStart_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Play
struct UPaper2D_PaperFlipbookComponent_Play_Params
{
};

// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
struct UPaper2D_PaperFlipbookComponent_OnRep_SourceFlipbook_Params
{
	class UPaper2D_PaperFlipbook*                      OldFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.IsReversing
struct UPaper2D_PaperFlipbookComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.IsPlaying
struct UPaper2D_PaperFlipbookComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.IsLooping
struct UPaper2D_PaperFlipbookComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetPlayRate
struct UPaper2D_PaperFlipbookComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
struct UPaper2D_PaperFlipbookComponent_GetPlaybackPositionInFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
struct UPaper2D_PaperFlipbookComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
struct UPaper2D_PaperFlipbookComponent_GetFlipbookLengthInFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
struct UPaper2D_PaperFlipbookComponent_GetFlipbookLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
struct UPaper2D_PaperFlipbookComponent_GetFlipbookFramerate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbook
struct UPaper2D_PaperFlipbookComponent_GetFlipbook_Params
{
	class UPaper2D_PaperFlipbook*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
struct UPaper2D_PaperGroupedSpriteComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewInstanceTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
struct UPaper2D_PaperGroupedSpriteComponent_UpdateInstanceColor_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewInstanceColor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
struct UPaper2D_PaperGroupedSpriteComponent_SortInstancesAlongAxis_Params
{
	struct FVector                                     WorldSpaceSortAxis;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
struct UPaper2D_PaperGroupedSpriteComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
struct UPaper2D_PaperGroupedSpriteComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutInstanceTransform;                                     // (Parm, OutParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
struct UPaper2D_PaperGroupedSpriteComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
struct UPaper2D_PaperGroupedSpriteComponent_ClearInstances_Params
{
};

// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
struct UPaper2D_PaperGroupedSpriteComponent_AddInstance_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPaper2D_PaperSprite*                        Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
struct UPaper2D_PaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params
{
	class UPaper2D_PaperSprite*                        Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateCore_SlateBrush                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
struct UPaper2D_PaperSpriteComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperSpriteComponent.SetSprite
struct UPaper2D_PaperSpriteComponent_SetSprite_Params
{
	class UPaper2D_PaperSprite*                        NewSprite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperSpriteComponent.GetSprite
struct UPaper2D_PaperSpriteComponent_GetSprite_Params
{
	class UPaper2D_PaperSprite*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTerrainComponent.SetTerrainColor
struct UPaper2D_PaperTerrainComponent_SetTerrainColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
struct UPaper2D_PaperTileMapComponent_SetTileMapColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTileMap
struct UPaper2D_PaperTileMapComponent_SetTileMap_Params
{
	class UPaper2D_PaperTileMap*                       NewTileMap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTile
struct UPaper2D_PaperTileMapComponent_SetTile_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaper2D_PaperTileInfo                      NewValue;                                                 // (Parm)
};

// Function Paper2D.PaperTileMapComponent.SetLayerColor
struct UPaper2D_PaperTileMapComponent_SetLayerColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
struct UPaper2D_PaperTileMapComponent_SetLayerCollision_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasCollision;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomThickness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
struct UPaper2D_PaperTileMapComponent_SetDefaultCollisionThickness_Params
{
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.ResizeMap
struct UPaper2D_PaperTileMapComponent_ResizeMap_Params
{
	int                                                NewWidthInTiles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewHeightInTiles;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.RebuildCollision
struct UPaper2D_PaperTileMapComponent_RebuildCollision_Params
{
};

// Function Paper2D.PaperTileMapComponent.OwnsTileMap
struct UPaper2D_PaperTileMapComponent_OwnsTileMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
struct UPaper2D_PaperTileMapComponent_MakeTileMapEditable_Params
{
};

// Function Paper2D.PaperTileMapComponent.GetTilePolygon
struct UPaper2D_PaperTileMapComponent_GetTilePolygon_Params
{
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
struct UPaper2D_PaperTileMapComponent_GetTileMapColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
struct UPaper2D_PaperTileMapComponent_GetTileCornerPosition_Params
{
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
struct UPaper2D_PaperTileMapComponent_GetTileCenterPosition_Params
{
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTile
struct UPaper2D_PaperTileMapComponent_GetTile_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaper2D_PaperTileInfo                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Paper2D.PaperTileMapComponent.GetMapSize
struct UPaper2D_PaperTileMapComponent_GetMapSize_Params
{
	int                                                MapWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumLayers;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetLayerColor
struct UPaper2D_PaperTileMapComponent_GetLayerColor_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
struct UPaper2D_PaperTileMapComponent_CreateNewTileMap_Params
{
	int                                                MapWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateLayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.AddNewLayer
struct UPaper2D_PaperTileMapComponent_AddNewLayer_Params
{
	class UPaper2D_PaperTileLayer*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.TileMapBlueprintLibrary.MakeTile
struct UPaper2D_TileMapBlueprintLibrary_MakeTile_Params
{
	int                                                TileIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaper2D_PaperTileSet*                       TileSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipH;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaper2D_PaperTileInfo                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
struct UPaper2D_TileMapBlueprintLibrary_GetTileUserData_Params
{
	struct FPaper2D_PaperTileInfo                      Tile;                                                     // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
struct UPaper2D_TileMapBlueprintLibrary_GetTileTransform_Params
{
	struct FPaper2D_PaperTileInfo                      Tile;                                                     // (Parm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.TileMapBlueprintLibrary.BreakTile
struct UPaper2D_TileMapBlueprintLibrary_BreakTile_Params
{
	struct FPaper2D_PaperTileInfo                      Tile;                                                     // (Parm)
	int                                                TileIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPaper2D_PaperTileSet*                       TileSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipH;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipD;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
