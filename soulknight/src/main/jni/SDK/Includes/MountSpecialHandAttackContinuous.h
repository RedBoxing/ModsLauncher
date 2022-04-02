#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MountSpecialHandAttackContinuous
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountSpecialHandAttackContinuous"));
	}

	template <typename T = uintptr_t> T& attackHand() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsSpecialAttacking() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnAttackStart() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnAttackEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShouldHideWeapon() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_IsSpecialAttacking() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA35C))(this);
	}
	template <typename T = void> T set_IsSpecialAttacking(bool value) {
		return ((T (*)(MountSpecialHandAttackContinuous*, bool))(Il2CppBase() + 0x41FA364))(this, value);
	}
	template <typename T = uintptr_t> T get_OnAttackStart() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA370))(this);
	}
	template <typename T = void> T set_OnAttackStart(uintptr_t value) {
		return ((T (*)(MountSpecialHandAttackContinuous*, uintptr_t))(Il2CppBase() + 0x41FA378))(this, value);
	}
	template <typename T = uintptr_t> T get_OnAttackEnd() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA380))(this);
	}
	template <typename T = void> T set_OnAttackEnd(uintptr_t value) {
		return ((T (*)(MountSpecialHandAttackContinuous*, uintptr_t))(Il2CppBase() + 0x41FA388))(this, value);
	}
	template <typename T = bool> T get_ShouldHideWeapon() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA390))(this);
	}
	template <typename T = uintptr_t> T get_SpecialHand() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA398))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA3F8))(this);
	}
	template <typename T = void> T SpecialUp() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA554))(this);
	}
	template <typename T = void> T SpecialDown() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA630))(this);
	}
	template <typename T = void> T SpecialAttackStart() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA70C))(this);
	}
	template <typename T = void> T SpecialAttackEnd() {
		return ((T (*)(MountSpecialHandAttackContinuous*))(Il2CppBase() + 0x41FA7E0))(this);
	}

};

}
