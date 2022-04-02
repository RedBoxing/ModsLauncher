#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SafeArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SafeArea"));
	}

	template <typename T = bool> T& invers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay_end_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& SafeAreaEndCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& life_color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& source_obj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& circle_collider2d() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& in_area_detect_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& out_area_detect_list() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& area_circle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& area_circle_ring() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& safearea_list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T get_SafeAreaList() {
		return ((T (*)(void *))(Il2CppBase() + 0x18133CC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SafeArea*))(Il2CppBase() + 0x18134E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SafeArea*))(Il2CppBase() + 0x181364C))(this);
	}
	template <typename T = void> static T AddSafeArea(uintptr_t safearea) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x181370C))(0, safearea);
	}
	template <typename T = void> static T RemoveSafeArea(uintptr_t safearea) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18138B0))(0, safearea);
	}
	template <typename T = uintptr_t> T DelayEnd(float delay) {
		return ((T (*)(SafeArea*, float))(Il2CppBase() + 0x18137D0))(this, delay);
	}
	template <typename T = void> T OnSafeAreaEnd() {
		return ((T (*)(SafeArea*))(Il2CppBase() + 0x18139A0))(this);
	}
	template <typename T = void> T DoDestory() {
		return ((T (*)(SafeArea*))(Il2CppBase() + 0x1813F10))(this);
	}

};

}
