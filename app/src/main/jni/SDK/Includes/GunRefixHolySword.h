#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunRefixHolySword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunRefixHolySword"));
	}


	template <typename T = int32_t> T get_index() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x21724F0))(this);
	}
	template <typename T = void> T set_index(int32_t value) {
		return ((T (*)(GunRefixHolySword*, int32_t))(Il2CppBase() + 0x2172594))(this, value);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunRefixHolySword*, bool))(Il2CppBase() + 0x2172650))(this, value);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunRefixHolySword*, bool, bool))(Il2CppBase() + 0x217270C))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x217283C))(this);
	}
	template <typename T = void> T SwordAttack() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x2172CA8))(this);
	}
	template <typename T = void> T HolyAttack() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x21729C4))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x2172F4C))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunRefixHolySword*, uintptr_t))(Il2CppBase() + 0x2172FF0))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunRefixHolySword*, uintptr_t, int32_t))(Il2CppBase() + 0x2173078))(this, parent, target_layer);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x217310C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunRefixHolySword*, bool, bool))(Il2CppBase() + 0x2173178))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x2173188))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunRefixHolySword*, uintptr_t))(Il2CppBase() + 0x2173190))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunRefixHolySword*, uintptr_t, int32_t))(Il2CppBase() + 0x2173198))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunRefixHolySword*))(Il2CppBase() + 0x21731A0))(this);
	}

};

}
