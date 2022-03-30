#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComBladeStorm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComBladeStorm"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& times() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& atkInterval() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& swordSlash() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& efxSlash() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& slashAudioClip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& efxSlashPos() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& swordWave() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& addSpeed() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComBladeStorm*, uintptr_t))(Il2CppBase() + 0x201C494))(this, atkType);
	}
	template <typename T = void> T Test() {
		return ((T (*)(WeaponComBladeStorm*))(Il2CppBase() + 0x201CB80))(this);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComBladeStorm*, float))(Il2CppBase() + 0x201CBF0))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComBladeStorm*, float, Il2CppVector3))(Il2CppBase() + 0x201CCD4))(this, power, castPos);
	}
	template <typename T = void> T _Cast(float power, Il2CppVector3 position, bool follow, uintptr_t onFinished) {
		return ((T (*)(WeaponComBladeStorm*, float, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x201C63C))(this, power, position, follow, onFinished);
	}
	template <typename T = void> T OnAttackBeginb__9_0() {
		return ((T (*)(WeaponComBladeStorm*))(Il2CppBase() + 0x201CE04))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComBladeStorm*, uintptr_t))(Il2CppBase() + 0x201CEB8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComBladeStorm*, float))(Il2CppBase() + 0x201CEC0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast_1(float P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponComBladeStorm*, float, Il2CppVector3))(Il2CppBase() + 0x201CEC8))(this, P0, P1);
	}

};

}
