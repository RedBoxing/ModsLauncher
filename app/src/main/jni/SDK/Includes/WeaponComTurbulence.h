#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComTurbulence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComTurbulence"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& prepareFX() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& prepareDuration() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& turbulenceBullet() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& stdRadius() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& initRadius() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& maxRadius() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& radiusScaleCurve() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComTurbulence*))(Il2CppBase() + 0x4493A70))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComTurbulence*, uintptr_t))(Il2CppBase() + 0x4493AE0))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComTurbulence*, float))(Il2CppBase() + 0x449416C))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComTurbulence*, float, Il2CppVector3))(Il2CppBase() + 0x4494250))(this, power, castPos);
	}
	template <typename T = void> T _Cast(float power, Il2CppVector3 pos, bool follow, uintptr_t onFinished) {
		return ((T (*)(WeaponComTurbulence*, float, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x4493D88))(this, power, pos, follow, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__12_0() {
		return ((T (*)(WeaponComTurbulence*))(Il2CppBase() + 0x4494334))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComTurbulence*, uintptr_t))(Il2CppBase() + 0x44943E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComTurbulence*, float))(Il2CppBase() + 0x44943F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponComTurbulence*, float, Il2CppVector3))(Il2CppBase() + 0x44943F4))(this, P0, P1);
	}

};

}
