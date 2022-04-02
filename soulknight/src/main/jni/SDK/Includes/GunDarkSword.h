#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunDarkSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunDarkSword"));
	}

	template <typename T = uintptr_t> T& poly() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& maxPolyTime() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& polyTime() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunDarkSword*, bool))(Il2CppBase() + 0x2492D94))(this, value);
	}
	template <typename T = bool> T get_back_state() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2492E50))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2492EF4))(this);
	}
	template <typename T = void> T CastPoly() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2493304))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunDarkSword*, bool, bool))(Il2CppBase() + 0x249364C))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2493700))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x249376C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x249384C))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunDarkSword*, uintptr_t))(Il2CppBase() + 0x2493A98))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunDarkSword*, uintptr_t, int32_t))(Il2CppBase() + 0x2493B20))(this, parent, target_layer);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2493BEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunDarkSword*, bool, bool))(Il2CppBase() + 0x2493BF0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2493CC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunDarkSword*))(Il2CppBase() + 0x2493CCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunDarkSword*, uintptr_t))(Il2CppBase() + 0x2493CD4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunDarkSword*, uintptr_t, int32_t))(Il2CppBase() + 0x2493CDC))(this, P0, P1);
	}

};

}
