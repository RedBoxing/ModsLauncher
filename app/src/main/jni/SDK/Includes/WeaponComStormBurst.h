#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComStormBurst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComStormBurst"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& stormBurst() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& waves() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& waveInterval() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& moveDistance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xD4);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComStormBurst*))(Il2CppBase() + 0x4490278))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComStormBurst*, uintptr_t))(Il2CppBase() + 0x44902E8))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComStormBurst*, float))(Il2CppBase() + 0x44908B4))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComStormBurst*, float, Il2CppVector3))(Il2CppBase() + 0x4490998))(this, power, castPos);
	}
	template <typename T = void> T _Cast(float power, Il2CppVector3 castPos, bool follow, uintptr_t onFiished) {
		return ((T (*)(WeaponComStormBurst*, float, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x4490518))(this, power, castPos, follow, onFiished);
	}
	template <typename T = void> T OnAttackBeginb__9_0() {
		return ((T (*)(WeaponComStormBurst*))(Il2CppBase() + 0x4490A80))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComStormBurst*, uintptr_t))(Il2CppBase() + 0x4490B34))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComStormBurst*, float))(Il2CppBase() + 0x4490B3C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponComStormBurst*, float, Il2CppVector3))(Il2CppBase() + 0x4490B40))(this, P0, P1);
	}

};

}
