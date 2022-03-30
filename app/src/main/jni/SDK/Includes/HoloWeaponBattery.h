#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HoloWeaponBattery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HoloWeaponBattery"));
	}

	template <typename T = uintptr_t> T& holoMaterial() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& normalMaterial() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& agentWeapon() {
		return *(T*)((uintptr_t)this + 0x288);
	}

	template <typename T = uintptr_t> T get_wRendere() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x42040D0))(this);
	}
	template <typename T = uintptr_t> T get_w() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x42041C4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x42042C8))(this);
	}
	template <typename T = void> T OnWeaponSet(uintptr_t weapon) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x4204334))(this, weapon);
	}
	template <typename T = void> T PickWeapon(uintptr_t target_weapon) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x4204658))(this, target_weapon);
	}
	template <typename T = void> T DropWeapon() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x4204760))(this);
	}
	template <typename T = bool> T IsWeaponValid(uintptr_t weapon) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x42049FC))(this, weapon);
	}
	template <typename T = uintptr_t> T SetInfoDelay(uintptr_t info) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x4204B80))(this, info);
	}
	template <typename T = uintptr_t> T GetInfo() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x4204C8C))(this);
	}
	template <typename T = uintptr_t> T n__0(uintptr_t info) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x4204ECC))(this, info);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x4204ED4))(this);
	}
	template <typename T = void> T iFixBaseProxy_PickWeapon(uintptr_t P0) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x4204EDC))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_SetInfoDelay(uintptr_t P0) {
		return ((T (*)(HoloWeaponBattery*, uintptr_t))(Il2CppBase() + 0x4204EE4))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetInfo() {
		return ((T (*)(HoloWeaponBattery*))(Il2CppBase() + 0x4204EEC))(this);
	}

};

}
