#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunShield"));
	}


	template <typename T = void> T AttackStart() {
		return ((T (*)(GunShield*))(Il2CppBase() + 0x2175F50))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunShield*))(Il2CppBase() + 0x217635C))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(GunShield*, bool, bool))(Il2CppBase() + 0x21763B8))(this, toFront, isPick);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunShield*))(Il2CppBase() + 0x2176470))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunShield*, bool, bool))(Il2CppBase() + 0x2176478))(this, P0, P1);
	}

};

}
