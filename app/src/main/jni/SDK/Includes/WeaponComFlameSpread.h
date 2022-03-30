#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComFlameSpread
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComFlameSpread"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& bulletFlame() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& emitInterval() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& vfxOnWeapon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _active() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> T& enemies() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _interrupt() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202C494))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202C504))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202C638))(this);
	}
	template <typename T = void> T OnEnemyGetHurt(uintptr_t data) {
		return ((T (*)(WeaponComFlameSpread*, uintptr_t))(Il2CppBase() + 0x202C6B0))(this, data);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComFlameSpread*, uintptr_t))(Il2CppBase() + 0x202C994))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComFlameSpread*, float))(Il2CppBase() + 0x202CE6C))(this, power);
	}
	template <typename T = void> T _Cast(float power, uintptr_t onFinished) {
		return ((T (*)(WeaponComFlameSpread*, float, uintptr_t))(Il2CppBase() + 0x202CB50))(this, power, onFinished);
	}
	template <typename T = void> T Emit(float power) {
		return ((T (*)(WeaponComFlameSpread*, float))(Il2CppBase() + 0x202CEE8))(this, power);
	}
	template <typename T = void> T OnEquipWeaponb__8_0() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202D864))(this);
	}
	template <typename T = void> T OnAttackBeginb__12_0() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202D908))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202D9BC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComFlameSpread*))(Il2CppBase() + 0x202D9C4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComFlameSpread*, uintptr_t))(Il2CppBase() + 0x202D9CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComFlameSpread*, float))(Il2CppBase() + 0x202D9D4))(this, P0);
	}

};

}
