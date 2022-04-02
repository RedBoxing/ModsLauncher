#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponUpgrader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponUpgrader"));
	}

	template <typename T = uintptr_t> T& upgradeType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nextWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(WeaponUpgrader*))(Il2CppBase() + 0x46013A4))(this);
	}
	template <typename T = bool> T UpgradeWeapon(uintptr_t type) {
		return ((T (*)(WeaponUpgrader*, uintptr_t))(Il2CppBase() + 0x4601434))(this, type);
	}
	template <typename T = void> T UpgradeWeapon_1(uintptr_t nextWeaponPrefab) {
		return ((T (*)(WeaponUpgrader*, uintptr_t))(Il2CppBase() + 0x4601694))(this, nextWeaponPrefab);
	}

};

}
