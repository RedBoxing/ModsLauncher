#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WindowManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WindowManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& windows() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& windowPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& fader() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& idCounter() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_isWindowOpen() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21E9F5C))(this);
	}
	template <typename T = uintptr_t> T get_topWindow() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EA094))(this);
	}
	template <typename T = uintptr_t> T OpenWindow(Il2CppString* name, int32_t width, int32_t height) {
		return ((T (*)(WindowManager*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x21EA41C))(this, name, width, height);
	}
	template <typename T = uintptr_t> T OpenWindow_1(uintptr_t windowPrefab, Il2CppString* name) {
		return ((T (*)(WindowManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x21EA8C0))(this, windowPrefab, name);
	}
	template <typename T = void> T CloseTop() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EAC2C))(this);
	}
	template <typename T = void> T CloseWindow(int32_t windowId) {
		return ((T (*)(WindowManager*, int32_t))(Il2CppBase() + 0x21EAEF0))(this, windowId);
	}
	template <typename T = void> T CloseWindow_1(uintptr_t window) {
		return ((T (*)(WindowManager*, uintptr_t))(Il2CppBase() + 0x21EB118))(this, window);
	}
	template <typename T = void> T CloseAll() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EB464))(this);
	}
	template <typename T = void> T CancelAll() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EB610))(this);
	}
	template <typename T = uintptr_t> T GetWindow(int32_t windowId) {
		return ((T (*)(WindowManager*, int32_t))(Il2CppBase() + 0x21EAF74))(this, windowId);
	}
	template <typename T = bool> T IsFocused(int32_t windowId) {
		return ((T (*)(WindowManager*, int32_t))(Il2CppBase() + 0x21EB7A0))(this, windowId);
	}
	template <typename T = void> T Focus(int32_t windowId) {
		return ((T (*)(WindowManager*, int32_t))(Il2CppBase() + 0x21EB8AC))(this, windowId);
	}
	template <typename T = void> T Focus_1(uintptr_t window) {
		return ((T (*)(WindowManager*, uintptr_t))(Il2CppBase() + 0x21EB930))(this, window);
	}
	template <typename T = void> T DefocusOtherWindows(int32_t focusedWindowId) {
		return ((T (*)(WindowManager*, int32_t))(Il2CppBase() + 0x21EBA3C))(this, focusedWindowId);
	}
	template <typename T = void> T UpdateFader() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EA6F0))(this);
	}
	template <typename T = void> T FocusTopWindow() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EB374))(this);
	}
	template <typename T = void> T SetFaderActive(bool state) {
		return ((T (*)(WindowManager*, bool))(Il2CppBase() + 0x21EA390))(this, state);
	}
	template <typename T = uintptr_t> T InstantiateWindow(Il2CppString* name, int32_t width, int32_t height) {
		return ((T (*)(WindowManager*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x21EA4CC))(this, name, width, height);
	}
	template <typename T = uintptr_t> T InstantiateWindow_1(Il2CppString* name, uintptr_t windowPrefab) {
		return ((T (*)(WindowManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21EA9EC))(this, name, windowPrefab);
	}
	template <typename T = void> T DestroyWindow(uintptr_t window) {
		return ((T (*)(WindowManager*, uintptr_t))(Il2CppBase() + 0x21EADD8))(this, window);
	}
	template <typename T = int32_t> T GetNewId() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EBBF4))(this);
	}
	template <typename T = void> T ClearCompletely() {
		return ((T (*)(WindowManager*))(Il2CppBase() + 0x21EBC5C))(this);
	}

};

}
