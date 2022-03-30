#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PasswordTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PasswordTrigger"));
	}

	template <typename T = uintptr_t> T& unlocker() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& click_need_time() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& click_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& last_click_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& rect_width() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& phase1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& phase2() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = int32_t> static T& phase1_click_need_time() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& phase2_click_need_time() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& remoteLogUnlocked() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& isPauseWindowShow() {
		return *(T*)((uintptr_t)this + 0x2B);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PasswordTrigger*))(Il2CppBase() + 0x457499C))(this);
	}
	template <typename T = void> T OnShowPause(uintptr_t e) {
		return ((T (*)(PasswordTrigger*, uintptr_t))(Il2CppBase() + 0x4574CD8))(this, e);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PasswordTrigger*))(Il2CppBase() + 0x4574DC4))(this);
	}
	template <typename T = void> T ClickCheck(float x, float y, int32_t phase) {
		return ((T (*)(PasswordTrigger*, float, float, int32_t))(Il2CppBase() + 0x4575108))(this, x, y, phase);
	}
	template <typename T = void> T ClickCheckPause(float x, float y) {
		return ((T (*)(PasswordTrigger*, float, float))(Il2CppBase() + 0x4575330))(this, x, y);
	}
	template <typename T = void> T Faile() {
		return ((T (*)(PasswordTrigger*))(Il2CppBase() + 0x45755C4))(this);
	}
	template <typename T = void> T Unlock() {
		return ((T (*)(PasswordTrigger*))(Il2CppBase() + 0x4574B48))(this);
	}

};

}
