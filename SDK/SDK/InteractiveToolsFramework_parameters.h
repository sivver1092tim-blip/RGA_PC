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

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
struct UInteractiveToolsFramework_GizmoBaseComponent_UpdateWorldLocalState_Params
{
	bool                                               bWorldIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
struct UInteractiveToolsFramework_GizmoBaseComponent_UpdateHoverState_Params
{
	bool                                               bHoveringIn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
struct UInteractiveToolsFramework_GizmoTransformSource_SetTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
struct UInteractiveToolsFramework_GizmoTransformSource_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
struct UInteractiveToolsFramework_GizmoAxisSource_HasTangentVectors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
struct UInteractiveToolsFramework_GizmoAxisSource_GetTangentVectors_Params
{
	struct FVector                                     TangentXOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TangentYOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
struct UInteractiveToolsFramework_GizmoAxisSource_GetOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
struct UInteractiveToolsFramework_GizmoAxisSource_GetDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
struct UInteractiveToolsFramework_GizmoClickTarget_UpdateHoverState_Params
{
	bool                                               bHovering;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
struct UInteractiveToolsFramework_GizmoStateTarget_EndUpdate_Params
{
};

// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
struct UInteractiveToolsFramework_GizmoStateTarget_BeginUpdate_Params
{
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
struct UInteractiveToolsFramework_GizmoFloatParameterSource_SetParameter_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
struct UInteractiveToolsFramework_GizmoFloatParameterSource_GetParameter_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
struct UInteractiveToolsFramework_GizmoFloatParameterSource_EndModify_Params
{
};

// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
struct UInteractiveToolsFramework_GizmoFloatParameterSource_BeginModify_Params
{
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
struct UInteractiveToolsFramework_GizmoVec2ParameterSource_SetParameter_Params
{
	struct FVector2D                                   NewValue;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
struct UInteractiveToolsFramework_GizmoVec2ParameterSource_GetParameter_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
struct UInteractiveToolsFramework_GizmoVec2ParameterSource_EndModify_Params
{
};

// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
struct UInteractiveToolsFramework_GizmoVec2ParameterSource_BeginModify_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
