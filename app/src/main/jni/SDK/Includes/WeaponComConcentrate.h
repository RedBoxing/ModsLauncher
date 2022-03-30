#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComConcentrate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComConcentrate"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& chargeSpeedUp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& buffPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mainBulletProto() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& trailBullet() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& trailBulletSpeed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& delayDistance() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& curBuff() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComConcentrate*, uintptr_t))(Il2CppBase() + 0x2024EC4))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComConcentrate*, float))(Il2CppBase() + 0x202572C))(this, power);
	}
	template <typename T = void> T _Cast(float power, uintptr_t onFinished) {
		return ((T (*)(WeaponComConcentrate*, float, uintptr_t))(Il2CppBase() + 0x2025080))(this, power, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__10_0() {
		return ((T (*)(WeaponComConcentrate*))(Il2CppBase() + 0x20257D4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComConcentrate*, uintptr_t))(Il2CppBase() + 0x2025888))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComConcentrate*, float))(Il2CppBase() + 0x2025890))(this, P0);
	}

};

}
