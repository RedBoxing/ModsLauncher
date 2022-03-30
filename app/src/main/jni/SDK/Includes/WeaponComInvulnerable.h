#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComInvulnerable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComInvulnerable"));
	}

	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x4485C48))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x4485DC4))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x4485EC0))(this);
	}
	template <typename T = void> T Awakeb__1_0(uintptr_t arg) {
		return ((T (*)(WeaponComInvulnerable*, uintptr_t))(Il2CppBase() + 0x4485FB0))(this, arg);
	}
	template <typename T = void> T Awakeb__1_1() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x448606C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x4486128))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x4486130))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComInvulnerable*))(Il2CppBase() + 0x4486138))(this);
	}

};

}
