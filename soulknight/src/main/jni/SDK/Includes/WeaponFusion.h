#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponFusion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFusion"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sourceWeapons() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& referWeapons() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T Fusion(Il2CppList<uintptr_t>* weapons, uintptr_t hand) {
		return ((T (*)(WeaponFusion*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x449BD44))(this, weapons, hand);
	}
	template <typename T = bool> T CanFusion(Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(WeaponFusion*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x449C454))(this, weapons);
	}
	template <typename T = bool> T CanFusion_1(uintptr_t necessaryWeapon, Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(WeaponFusion*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x449C844))(this, necessaryWeapon, weapons);
	}
	template <typename T = bool> T WeaponValid(Il2CppString* weaponName) {
		return ((T (*)(WeaponFusion*, Il2CppString*))(Il2CppBase() + 0x449C3A0))(this, weaponName);
	}

};

}
