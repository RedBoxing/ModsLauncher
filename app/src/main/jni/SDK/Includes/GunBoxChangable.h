#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxChangable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxChangable"));
	}


	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunBoxChangable*))(Il2CppBase() + 0x25830D8))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunBoxChangable*, bool))(Il2CppBase() + 0x2583138))(this, isDown);
	}
	template <typename T = void> T RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxChangable*))(Il2CppBase() + 0x25831CC))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunBoxChangable*))(Il2CppBase() + 0x2583228))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunBoxChangable*))(Il2CppBase() + 0x25832A0))(this);
	}

};

}
