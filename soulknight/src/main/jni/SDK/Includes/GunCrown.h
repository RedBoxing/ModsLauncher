#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCrown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCrown"));
	}


	template <typename T = void> T AttackStart() {
		return ((T (*)(GunCrown*))(Il2CppBase() + 0x249037C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunCrown*))(Il2CppBase() + 0x2490804))(this);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunCrown*, uintptr_t, int32_t))(Il2CppBase() + 0x24908B4))(this, parent, target_layer);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunCrown*, uintptr_t))(Il2CppBase() + 0x2490A44))(this, parent);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunCrown*, uintptr_t*))(Il2CppBase() + 0x2490B70))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunCrown*))(Il2CppBase() + 0x2490BE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunCrown*))(Il2CppBase() + 0x2490C4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunCrown*))(Il2CppBase() + 0x2490C54))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunCrown*, uintptr_t, int32_t))(Il2CppBase() + 0x2490C5C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunCrown*, uintptr_t))(Il2CppBase() + 0x2490C64))(this, P0);
	}

};

}
