#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComSummonFunnel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComSummonFunnel"));
	}

	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weapons() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& funnelPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& funnel_root() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& summoned() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x4491840))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x44919BC))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x4491E6C))(this);
	}
	template <typename T = void> T Summon() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x4491C78))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t funnelPrefab, uintptr_t weapon, uintptr_t parent, uintptr_t ownerObj, void* isOwnerActive) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x44921F8))(0, funnelPrefab, weapon, parent, ownerObj, isOwnerActive);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x4492058))(this);
	}
	template <typename T = void> T Awakeb__4_0(uintptr_t arg) {
		return ((T (*)(WeaponComSummonFunnel*, uintptr_t))(Il2CppBase() + 0x44925C4))(this, arg);
	}
	template <typename T = void> T Awakeb__4_1() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x44925C8))(this);
	}
	template <typename T = bool> T Summonb__8_0() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x44925CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x44926D8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x44926E0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComSummonFunnel*))(Il2CppBase() + 0x44926E8))(this);
	}

};

}
