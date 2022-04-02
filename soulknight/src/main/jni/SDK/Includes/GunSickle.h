#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSickle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSickle"));
	}


	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunSickle*, bool))(Il2CppBase() + 0x2176488))(this, value);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x2176544))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x2176658))(this);
	}
	template <typename T = void> T AxeAttack() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x217676C))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunSickle*, uintptr_t))(Il2CppBase() + 0x2176B34))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunSickle*, uintptr_t, int32_t))(Il2CppBase() + 0x2176BBC))(this, parent, target_layer);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x2176C50))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x2176D08))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack2() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x2176D10))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunSickle*, uintptr_t))(Il2CppBase() + 0x2176D18))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunSickle*, uintptr_t, int32_t))(Il2CppBase() + 0x2176D20))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunSickle*))(Il2CppBase() + 0x2176D28))(this);
	}

};

}
