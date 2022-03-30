#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMap"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& map_manager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& room_relation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& this_x() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& this_y() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& boss_logo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& special_logo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& chest_logo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& home_logo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& cage_logo() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& color_0() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& color_1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& color_2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& text_level() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIMap*))(Il2CppBase() + 0x433E078))(this);
	}
	template <typename T = void> T UpdateMap() {
		return ((T (*)(UIMap*))(Il2CppBase() + 0x433E920))(this);
	}
	template <typename T = void> T SetMiniIcon(int32_t i, int32_t p) {
		return ((T (*)(UIMap*, int32_t, int32_t))(Il2CppBase() + 0x433E35C))(this, i, p);
	}
	template <typename T = void> T HideMap() {
		return ((T (*)(UIMap*))(Il2CppBase() + 0x4342C9C))(this);
	}
	template <typename T = void> T ShowMap() {
		return ((T (*)(UIMap*))(Il2CppBase() + 0x433E860))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(UIMap*))(Il2CppBase() + 0x433E25C))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(UIMap*))(Il2CppBase() + 0x4342D44))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t value) {
		return ((T (*)(UIMap*, int32_t))(Il2CppBase() + 0x4342E44))(this, value);
	}

};

}
