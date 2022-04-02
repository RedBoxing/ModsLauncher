#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComFlameNova
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComFlameNova"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& efxFlameEmit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& backDuration() {
		return *(T*)((uintptr_t)this + 0xD4);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComFlameNova*))(Il2CppBase() + 0x202A694))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComFlameNova*, uintptr_t))(Il2CppBase() + 0x202A704))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComFlameNova*, float))(Il2CppBase() + 0x202B8AC))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComFlameNova*, float, Il2CppVector3))(Il2CppBase() + 0x202BA80))(this, power, castPos);
	}
	template <typename T = void> T Cast_2(float power, uintptr_t target) {
		return ((T (*)(WeaponComFlameNova*, float, uintptr_t))(Il2CppBase() + 0x202BB30))(this, power, target);
	}
	template <typename T = void> T _Cast(float power, uintptr_t returnToTarget, Il2CppVector3 castPos, uintptr_t onFinished) {
		return ((T (*)(WeaponComFlameNova*, float, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x202A9E4))(this, power, returnToTarget, castPos, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__8_0() {
		return ((T (*)(WeaponComFlameNova*))(Il2CppBase() + 0x202BCE4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComFlameNova*, uintptr_t))(Il2CppBase() + 0x202BD98))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComFlameNova*, float))(Il2CppBase() + 0x202BDA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponComFlameNova*, float, Il2CppVector3))(Il2CppBase() + 0x202BDA8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Cast_2(float P0, uintptr_t P1) {
		return ((T (*)(WeaponComFlameNova*, float, uintptr_t))(Il2CppBase() + 0x202BDB0))(this, P0, P1);
	}

};

}
