#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MountSpecialHandAttackOneShot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountSpecialHandAttackOneShot"));
	}

	template <typename T = uintptr_t> T& multiHand() {
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
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FA8C0))(this);
	}
	template <typename T = void> T set_IsSpecialAttacking(bool value) {
		return ((T (*)(MountSpecialHandAttackOneShot*, bool))(Il2CppBase() + 0x41FA8C8))(this, value);
	}
	template <typename T = uintptr_t> T get_OnAttackStart() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FA8D4))(this);
	}
	template <typename T = void> T set_OnAttackStart(uintptr_t value) {
		return ((T (*)(MountSpecialHandAttackOneShot*, uintptr_t))(Il2CppBase() + 0x41FA8DC))(this, value);
	}
	template <typename T = uintptr_t> T get_OnAttackEnd() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FA8E4))(this);
	}
	template <typename T = void> T set_OnAttackEnd(uintptr_t value) {
		return ((T (*)(MountSpecialHandAttackOneShot*, uintptr_t))(Il2CppBase() + 0x41FA8EC))(this, value);
	}
	template <typename T = bool> T get_ShouldHideWeapon() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FA8F4))(this);
	}
	template <typename T = uintptr_t> T get_SpecialHand() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FA8FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FA95C))(this);
	}
	template <typename T = void> T SpecialUp() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FAA74))(this);
	}
	template <typename T = void> T SpecialDown() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FAAD0))(this);
	}
	template <typename T = void> T OnSpecialAttackStart() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FAB44))(this);
	}
	template <typename T = void> T OnSpecialAttackFinished() {
		return ((T (*)(MountSpecialHandAttackOneShot*))(Il2CppBase() + 0x41FABC0))(this);
	}

};

}
