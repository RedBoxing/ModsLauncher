#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponItemFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponItemFactory"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& levelWeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& lotteryMachine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weaponItemProcessor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& weaponItemPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& frontWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& weaponItemInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T HasWeaponItem(uintptr_t targetWeapon) {
		return ((T (*)(WeaponItemFactory*, uintptr_t))(Il2CppBase() + 0x45F83DC))(this, targetWeapon);
	}
	template <typename T = bool> T HasWeaponItem_1(uintptr_t targetWeapon, uintptr_t random, void* weaponItemFilter) {
		return ((T (*)(WeaponItemFactory*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x45F8A04))(this, targetWeapon, random, weaponItemFilter);
	}
	template <typename T = void> T SetWeaponItem(void* weaponItemInfos, uintptr_t random) {
		return ((T (*)(WeaponItemFactory*, void*, uintptr_t))(Il2CppBase() + 0x45F8510))(this, weaponItemInfos, random);
	}
	template <typename T = uintptr_t> T InstantiateWeaponItem(Il2CppVector3 instance_position, uintptr_t parentTransform) {
		return ((T (*)(WeaponItemFactory*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x45F8D00))(this, instance_position, parentTransform);
	}
	template <typename T = void> T ClearState() {
		return ((T (*)(WeaponItemFactory*))(Il2CppBase() + 0x45F90D8))(this);
	}
	template <typename T = uintptr_t> static T GetWeaponItem(uintptr_t targetWeapon, uintptr_t random, bool isPrefab) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x45F9148))(0, targetWeapon, random, isPrefab);
	}

};

}
