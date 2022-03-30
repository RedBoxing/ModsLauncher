#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MountHp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountHp"));
	}

	template <typename T = bool> T& local_player() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bar_hp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& max_hp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sprite_bar() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sprite_hp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& relativePos() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MountHp*))(Il2CppBase() + 0x41F96C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MountHp*))(Il2CppBase() + 0x41F9A9C))(this);
	}
	template <typename T = void> T SetMaxHp(int32_t maxHp) {
		return ((T (*)(MountHp*, int32_t))(Il2CppBase() + 0x41F9AF8))(this, maxHp);
	}
	template <typename T = void> T UpdateHpBar(int32_t value, int32_t maxValue) {
		return ((T (*)(MountHp*, int32_t, int32_t))(Il2CppBase() + 0x41F86BC))(this, value, maxValue);
	}
	template <typename T = void> T ShowBar() {
		return ((T (*)(MountHp*))(Il2CppBase() + 0x41F9B6C))(this);
	}
	template <typename T = void> T HideBar() {
		return ((T (*)(MountHp*))(Il2CppBase() + 0x41F9A04))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MountHp*))(Il2CppBase() + 0x41F9CA8))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(MountHp*))(Il2CppBase() + 0x41F9D08))(this);
	}

};

}
