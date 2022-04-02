#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComWhirlWind
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComWhirlWind"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& whirlwind() {
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
		return ((T (*)(WeaponComWhirlWind*))(Il2CppBase() + 0x449505C))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComWhirlWind*, uintptr_t))(Il2CppBase() + 0x44950CC))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComWhirlWind*, float))(Il2CppBase() + 0x44956F4))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComWhirlWind*, float, Il2CppVector3))(Il2CppBase() + 0x44957D8))(this, power, castPos);
	}
	template <typename T = void> T _Cast(float power, Il2CppVector3 castPos, bool fromPlayer, uintptr_t onFinished) {
		return ((T (*)(WeaponComWhirlWind*, float, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x44952FC))(this, power, castPos, fromPlayer, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__7_0() {
		return ((T (*)(WeaponComWhirlWind*))(Il2CppBase() + 0x44958A8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComWhirlWind*, uintptr_t))(Il2CppBase() + 0x449595C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComWhirlWind*, float))(Il2CppBase() + 0x4495964))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponComWhirlWind*, float, Il2CppVector3))(Il2CppBase() + 0x4495968))(this, P0, P1);
	}

};

}
