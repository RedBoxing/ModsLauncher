#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RolePetWeaponChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RolePetWeaponChanger"));
	}

	template <typename T = uintptr_t> T& hero_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RolePetWeaponChanger*))(Il2CppBase() + 0x1BF2FAC))(this);
	}
	template <typename T = void> T StartStaffWeapon() {
		return ((T (*)(RolePetWeaponChanger*))(Il2CppBase() + 0x1BF31E0))(this);
	}
	template <typename T = void> T UpdateWeapon(uintptr_t hand) {
		return ((T (*)(RolePetWeaponChanger*, uintptr_t))(Il2CppBase() + 0x1BF3330))(this, hand);
	}

};

}
