#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class UnityCommonUiAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "UnityCommonUiAgent"));
	}

	template <typename T = uintptr_t> T& FocusActionList() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UnityCommonUiAgent*))(Il2CppBase() + 0x43EE2C0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UnityCommonUiAgent*))(Il2CppBase() + 0x43EE570))(this);
	}
	template <typename T = void> T FoucusAction(uintptr_t action) {
		return ((T (*)(UnityCommonUiAgent*, uintptr_t))(Il2CppBase() + 0x43EE820))(this, action);
	}
	template <typename T = void> T OnApplicationFocus(bool hasFocus) {
		return ((T (*)(UnityCommonUiAgent*, bool))(Il2CppBase() + 0x43EE92C))(this, hasFocus);
	}
	template <typename T = void> T EventShowLoading(uintptr_t obj, float destroyTime, Il2CppString* extra) {
		return ((T (*)(UnityCommonUiAgent*, uintptr_t, float, Il2CppString*))(Il2CppBase() + 0x43EE9B4))(this, obj, destroyTime, extra);
	}
	template <typename T = void> T EventHideLoading(uintptr_t obj) {
		return ((T (*)(UnityCommonUiAgent*, uintptr_t))(Il2CppBase() + 0x43EEAC8))(this, obj);
	}
	template <typename T = void> T EventShowDialog(uintptr_t obj, Il2CppString* title, Il2CppString* content, uintptr_t agreeAction, uintptr_t disagreeAction, uintptr_t dialogOptions) {
		return ((T (*)(UnityCommonUiAgent*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43EEB9C))(this, obj, title, content, agreeAction, disagreeAction, dialogOptions);
	}
	template <typename T = void> T EventShowNewDialog(uintptr_t obj, Il2CppString* title, Il2CppString* content, void* str2AgreeAction, void* str2DisagreeAction, uintptr_t hideConfirmOrCancel) {
		return ((T (*)(UnityCommonUiAgent*, uintptr_t, Il2CppString*, Il2CppString*, void*, void*, uintptr_t))(Il2CppBase() + 0x43EECD4))(this, obj, title, content, str2AgreeAction, str2DisagreeAction, hideConfirmOrCancel);
	}
	template <typename T = void> T EventShowMsg(uintptr_t obj, Il2CppString* msg, float seconds) {
		return ((T (*)(UnityCommonUiAgent*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x43EEE2C))(this, obj, msg, seconds);
	}
	template <typename T = void> T EventOpenUrl(Il2CppString* url) {
		return ((T (*)(UnityCommonUiAgent*, Il2CppString*))(Il2CppBase() + 0x43EEF44))(this, url);
	}
	template <typename T = void> T EventOpenScene(Il2CppString* sceneName) {
		return ((T (*)(UnityCommonUiAgent*, Il2CppString*))(Il2CppBase() + 0x43EEFBC))(this, sceneName);
	}
	template <typename T = void> T EventApplicationQuit() {
		return ((T (*)(UnityCommonUiAgent*))(Il2CppBase() + 0x43EF034))(this);
	}

};

}
