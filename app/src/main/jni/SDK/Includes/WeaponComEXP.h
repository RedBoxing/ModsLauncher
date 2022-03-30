#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComEXP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComEXP"));
	}

	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _isInBattle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _ui_displayed() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xB2);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x2028A18))(this);
	}
	template <typename T = void> T LevelUp() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x2028B60))(this);
	}
	template <typename T = int32_t> static T CharacterLevelUpValue(Il2CppString* attrName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2028E24))(0, attrName);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x2029074))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x2029294))(this);
	}
	template <typename T = void> T OnBattleStart(uintptr_t data) {
		return ((T (*)(WeaponComEXP*, uintptr_t))(Il2CppBase() + 0x20293B0))(this, data);
	}
	template <typename T = void> T OnBattleEnd(uintptr_t data) {
		return ((T (*)(WeaponComEXP*, uintptr_t))(Il2CppBase() + 0x2029428))(this, data);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x202949C))(this);
	}
	template <typename T = void> T Awakeb__2_0(uintptr_t arg) {
		return ((T (*)(WeaponComEXP*, uintptr_t))(Il2CppBase() + 0x2029658))(this, arg);
	}
	template <typename T = void> T OnEquipWeaponb__7_0() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x20297CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x20298B8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x20298C0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x20298C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(WeaponComEXP*))(Il2CppBase() + 0x20298D0))(this);
	}

};

}
