#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComDoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComDoom"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& prepareEFX() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& lightningBullet() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& fire() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& weaponAtkPercentage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& minCount() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComDoom*))(Il2CppBase() + 0x20272C8))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComDoom*, uintptr_t))(Il2CppBase() + 0x2027338))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComDoom*, float))(Il2CppBase() + 0x2027E3C))(this, power);
	}
	template <typename T = void> T Cast_1(float power, uintptr_t target) {
		return ((T (*)(WeaponComDoom*, float, uintptr_t))(Il2CppBase() + 0x2027EBC))(this, power, target);
	}
	template <typename T = void> T _Cast(float power, uintptr_t target, uintptr_t onFinished) {
		return ((T (*)(WeaponComDoom*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x20274F8))(this, power, target, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__9_0() {
		return ((T (*)(WeaponComDoom*))(Il2CppBase() + 0x2027F7C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComDoom*, uintptr_t))(Il2CppBase() + 0x2028030))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComDoom*, float))(Il2CppBase() + 0x2028038))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, uintptr_t P1) {
		return ((T (*)(WeaponComDoom*, float, uintptr_t))(Il2CppBase() + 0x2028040))(this, P0, P1);
	}

};

}
