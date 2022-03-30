#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComChangeAttackAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComChangeAttackAction"));
	}

	template <typename T = float> T& consumeFactor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& consumeAdd() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& swordNewActionPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& staffNewActionPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& bowNewActionPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& atkSpeedFactor() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _oldAction() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _newAction() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& changeToNew() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& restore() {
		return *(T*)((uintptr_t)this + 0xE1);
	}

	template <typename T = void> T Update() {
		return ((T (*)(WeaponComChangeAttackAction*))(Il2CppBase() + 0x20232D8))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComChangeAttackAction*))(Il2CppBase() + 0x20238F4))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComChangeAttackAction*))(Il2CppBase() + 0x2023968))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(WeaponComChangeAttackAction*))(Il2CppBase() + 0x20239F8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComChangeAttackAction*))(Il2CppBase() + 0x2023A00))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComChangeAttackAction*))(Il2CppBase() + 0x2023A08))(this);
	}

};

}
