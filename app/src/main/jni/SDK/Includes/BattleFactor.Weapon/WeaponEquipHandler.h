#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Weapon {

class WeaponEquipHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Weapon", "WeaponEquipHandler"));
	}

	template <typename T = uintptr_t> T& WeaponItemFactory() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EventNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_WeaponItemFactory() {
		return ((T (*)(WeaponEquipHandler*))(Il2CppBase() + 0x1B201F0))(this);
	}
	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(WeaponEquipHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B2036C))(this, eventName, target);
	}
	template <typename T = bool> static T WeaponItemFilter(uintptr_t weaponItemInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B20728))(0, weaponItemInfo);
	}
	template <typename T = bool> static T CanGenerateWeaponItem(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B2066C))(0, target);
	}
	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(WeaponEquipHandler*))(Il2CppBase() + 0x1B20870))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(WeaponEquipHandler*))(Il2CppBase() + 0x1B208D0))(this);
	}

};

}
