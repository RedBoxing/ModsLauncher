#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIUpgrader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIUpgrader"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& weaponSupports() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _upgradeWeaponPrefabs() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& _enabled() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_upgradeWeaponPrefabs() {
		return ((T (*)(WIUpgrader*))(Il2CppBase() + 0x4363108))(this);
	}
	template <typename T = bool> T get_shouldShowNameAfterEquiped() {
		return ((T (*)(WIUpgrader*))(Il2CppBase() + 0x4363330))(this);
	}
	template <typename T = void> T MakeEffect(bool isSetup) {
		return ((T (*)(WIUpgrader*, bool))(Il2CppBase() + 0x4363390))(this, isSetup);
	}
	template <typename T = bool> T iFixBaseProxy_get_shouldShowNameAfterEquiped() {
		return ((T (*)(WIUpgrader*))(Il2CppBase() + 0x43636B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WIUpgrader*, bool))(Il2CppBase() + 0x43636BC))(this, P0);
	}

};

}
