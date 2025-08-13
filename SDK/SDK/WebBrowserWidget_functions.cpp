
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

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UWebBrowserWidget_WebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");

	UWebBrowserWidget_WebBrowser_OnUrlChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 Frame                          (Parm, ZeroConstructor)

void UWebBrowserWidget_WebBrowser::OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");

	UWebBrowserWidget_WebBrowser_OnBeforePopup__DelegateSignature_Params params;
	params.URL = URL;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewURL                         (Parm, ZeroConstructor)

void UWebBrowserWidget_WebBrowser::LoadURL(const struct FString& NewURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");

	UWebBrowserWidget_WebBrowser_LoadURL_Params params;
	params.NewURL = NewURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Contents                       (Parm, ZeroConstructor)
// struct FString                 DummyURL                       (Parm, ZeroConstructor)

void UWebBrowserWidget_WebBrowser::LoadString(const struct FString& Contents, const struct FString& DummyURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");

	UWebBrowserWidget_WebBrowser_LoadString_Params params;
	params.Contents = Contents;
	params.DummyURL = DummyURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWebBrowserWidget_WebBrowser::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");

	UWebBrowserWidget_WebBrowser_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWebBrowserWidget_WebBrowser::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");

	UWebBrowserWidget_WebBrowser_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ScriptText                     (Parm, ZeroConstructor)

void UWebBrowserWidget_WebBrowser::ExecuteJavascript(const struct FString& ScriptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");

	UWebBrowserWidget_WebBrowser_ExecuteJavascript_Params params;
	params.ScriptText = ScriptText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
