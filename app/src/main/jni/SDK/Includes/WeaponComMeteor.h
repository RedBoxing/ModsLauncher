#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComMeteor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComMeteor"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& meteorBullet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& emitStdInterval() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& emitIntervalCurve() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComMeteor*))(Il2CppBase() + 0x4487DEC))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComMeteor*, uintptr_t))(Il2CppBase() + 0x4487E5C))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComMeteor*, float))(Il2CppBase() + 0x448847C))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComMeteor*, float, Il2CppVector3))(Il2CppBase() + 0x4488550))(this, power, castPos);
	}
	template <typename T = void> T Cast_2(float power, uintptr_t target) {
		return ((T (*)(WeaponComMeteor*, float, uintptr_t))(Il2CppBase() + 0x4488600))(this, power, target);
	}
	template <typename T = void> T _Cast(float power, uintptr_t target, Il2CppVector3 castPos, uintptr_t onFinished) {
		return ((T (*)(WeaponComMeteor*, float, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x448813C))(this, power, target, castPos, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__7_0() {
		return ((T (*)(WeaponComMeteor*))(Il2CppBase() + 0x4488700))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComMeteor*, uintptr_t))(Il2CppBase() + 0x44887B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComMeteor*, float))(Il2CppBase() + 0x44887BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponComMeteor*, float, Il2CppVector3))(Il2CppBase() + 0x44887C0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Cast_2(float P0, uintptr_t P1) {
		return ((T (*)(WeaponComMeteor*, float, uintptr_t))(Il2CppBase() + 0x44887C4))(this, P0, P1);
	}

};

}
