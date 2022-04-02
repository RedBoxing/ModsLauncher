#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComSummonMinion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComSummonMinion"));
	}

	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _currentCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& minions() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x44926F0))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x4492838))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x4492930))(this);
	}
	template <typename T = void> T Summon(uintptr_t onDead) {
		return ((T (*)(WeaponComSummonMinion*, uintptr_t))(Il2CppBase() + 0x4492A14))(this, onDead);
	}
	template <typename T = void> T Awakeb__4_0(uintptr_t arg) {
		return ((T (*)(WeaponComSummonMinion*, uintptr_t))(Il2CppBase() + 0x4493484))(this, arg);
	}
	template <typename T = void> T Awakeb__4_1() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x4493518))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x4493528))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x4493530))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComSummonMinion*))(Il2CppBase() + 0x4493538))(this);
	}

};

}
