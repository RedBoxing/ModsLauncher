#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComEnemyDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComEnemyDrop"));
	}

	template <typename T = uintptr_t> T& dropObj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComEnemyDrop*))(Il2CppBase() + 0x2029C38))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComEnemyDrop*))(Il2CppBase() + 0x2029D84))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComEnemyDrop*))(Il2CppBase() + 0x2029E80))(this);
	}
	template <typename T = void> T Drop(uintptr_t enemy) {
		return ((T (*)(WeaponComEnemyDrop*, uintptr_t))(Il2CppBase() + 0x2029F68))(this, enemy);
	}
	template <typename T = void> T Awakeb__2_0(uintptr_t arg) {
		return ((T (*)(WeaponComEnemyDrop*, uintptr_t))(Il2CppBase() + 0x202A508))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComEnemyDrop*))(Il2CppBase() + 0x202A5E0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComEnemyDrop*))(Il2CppBase() + 0x202A5E8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComEnemyDrop*))(Il2CppBase() + 0x202A5F0))(this);
	}

};

}
