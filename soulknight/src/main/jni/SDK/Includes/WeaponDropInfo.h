#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponDropInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponDropInfo"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& level2Weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x449826C))(0);
	}
	template <typename T = void> static T set_info(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449864C))(0, value);
	}
	template <typename T = void> T Load() {
		return ((T (*)(WeaponDropInfo*))(Il2CppBase() + 0x4498344))(this);
	}
	template <typename T = int32_t> T GetWeaponLevel(Il2CppString* name) {
		return ((T (*)(WeaponDropInfo*, Il2CppString*))(Il2CppBase() + 0x44986E8))(this, name);
	}
	template <typename T = Il2CppString*> T GetWeaponWithDropLevel(int32_t level, uintptr_t rg_random, Il2CppList<Il2CppString*>* invalidWeapons) {
		return ((T (*)(WeaponDropInfo*, int32_t, uintptr_t, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4498A44))(this, level, rg_random, invalidWeapons);
	}
	template <typename T = bool> T WeaponUnlock(Il2CppString* weaponName) {
		return ((T (*)(WeaponDropInfo*, Il2CppString*))(Il2CppBase() + 0x4498F60))(this, weaponName);
	}

};

}
