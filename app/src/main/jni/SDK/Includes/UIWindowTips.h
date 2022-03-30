#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowTips"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> static T& awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowTips*))(Il2CppBase() + 0x45C30DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowTips*))(Il2CppBase() + 0x45C3208))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowTips*))(Il2CppBase() + 0x45C3264))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowTips*))(Il2CppBase() + 0x45C32C0))(this);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIWindowTips*))(Il2CppBase() + 0x45C331C))(this);
	}
	template <typename T = void> static T ShowDialog(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45C3414))(0, parent, title, content, onConfirm);
	}
	template <typename T = void> static T ShowDialog_1(uintptr_t parent, Il2CppString* title, Il2CppString* content, int32_t fontSize, uintptr_t onConfirm) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x45C3754))(0, parent, title, content, fontSize, onConfirm);
	}

};

}
