#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComSphereLightning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComSphereLightning"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& sphereLightning() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComSphereLightning*))(Il2CppBase() + 0x448E284))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComSphereLightning*, uintptr_t))(Il2CppBase() + 0x448E2F4))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComSphereLightning*, float))(Il2CppBase() + 0x448E794))(this, power);
	}
	template <typename T = void> T _Cast(float power, uintptr_t onFinished) {
		return ((T (*)(WeaponComSphereLightning*, float, uintptr_t))(Il2CppBase() + 0x448E4B0))(this, power, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__7_0() {
		return ((T (*)(WeaponComSphereLightning*))(Il2CppBase() + 0x448E820))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComSphereLightning*, uintptr_t))(Il2CppBase() + 0x448E8D4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComSphereLightning*, float))(Il2CppBase() + 0x448E8DC))(this, P0);
	}

};

}
