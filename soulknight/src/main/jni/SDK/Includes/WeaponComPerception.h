#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComPerception
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComPerception"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& bulletAddScale() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& damageIncrement() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& buffPrefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& curBuff() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComPerception*, uintptr_t))(Il2CppBase() + 0x4489C34))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComPerception*, float))(Il2CppBase() + 0x448A630))(this, power);
	}
	template <typename T = void> T _Cast(float power, uintptr_t onFinished) {
		return ((T (*)(WeaponComPerception*, float, uintptr_t))(Il2CppBase() + 0x4489DAC))(this, power, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__5_0() {
		return ((T (*)(WeaponComPerception*))(Il2CppBase() + 0x448A8CC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComPerception*, uintptr_t))(Il2CppBase() + 0x448A980))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComPerception*, float))(Il2CppBase() + 0x448A988))(this, P0);
	}

};

}
