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

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowserWidget_WebBrowser_OnUrlChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
struct UWebBrowserWidget_WebBrowser_OnBeforePopup__DelegateSignature_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Frame;                                                    // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowserWidget_WebBrowser_LoadURL_Params
{
	struct FString                                     NewURL;                                                   // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowserWidget_WebBrowser_LoadString_Params
{
	struct FString                                     Contents;                                                 // (Parm, ZeroConstructor)
	struct FString                                     DummyURL;                                                 // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.GetUrl
struct UWebBrowserWidget_WebBrowser_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowserWidget_WebBrowser_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowserWidget_WebBrowser_ExecuteJavascript_Params
{
	struct FString                                     ScriptText;                                               // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
