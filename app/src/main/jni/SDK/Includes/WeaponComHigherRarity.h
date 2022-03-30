#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComHigherRarity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComHigherRarity"));
	}

	template <typename T = int32_t> T& addLevel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComHigherRarity*))(Il2CppBase() + 0x44859F4))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComHigherRarity*))(Il2CppBase() + 0x4485AF4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComHigherRarity*))(Il2CppBase() + 0x4485C38))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComHigherRarity*))(Il2CppBase() + 0x4485C40))(this);
	}

};

}
