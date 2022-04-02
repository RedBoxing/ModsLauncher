#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGHandOfficer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGHandOfficer"));
	}


	template <typename T = void> T SwitchWeapon(bool showText) {
		return ((T (*)(RGHandOfficer*, bool))(Il2CppBase() + 0x1C59310))(this, showText);
	}
	template <typename T = void> T CreateWeapons() {
		return ((T (*)(RGHandOfficer*))(Il2CppBase() + 0x1C59540))(this);
	}
	template <typename T = uintptr_t> T CreateWeapon(uintptr_t weaponType) {
		return ((T (*)(RGHandOfficer*, uintptr_t))(Il2CppBase() + 0x1C597B4))(this, weaponType);
	}
	template <typename T = void> T AfterWeaponAttack() {
		return ((T (*)(RGHandOfficer*))(Il2CppBase() + 0x1C59A1C))(this);
	}
	template <typename T = bool> T IsBackFull() {
		return ((T (*)(RGHandOfficer*))(Il2CppBase() + 0x1C59A88))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon(bool P0) {
		return ((T (*)(RGHandOfficer*, bool))(Il2CppBase() + 0x1C59AEC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsBackFull() {
		return ((T (*)(RGHandOfficer*))(Il2CppBase() + 0x1C59AF4))(this);
	}

};

}
