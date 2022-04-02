#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBadminton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBadminton"));
	}


	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257E730))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunBadminton*, bool))(Il2CppBase() + 0x257E790))(this, value);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunBadminton*, bool, bool))(Il2CppBase() + 0x257E84C))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257E900))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257EB20))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257EBC4))(this);
	}
	template <typename T = void> T Bullet(bool reverse) {
		return ((T (*)(GunBadminton*, bool))(Il2CppBase() + 0x257E9CC))(this, reverse);
	}
	template <typename T = void> T CreateSword(bool reverse) {
		return ((T (*)(GunBadminton*, bool))(Il2CppBase() + 0x257EC94))(this, reverse);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257EEF0))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunBadminton*, uintptr_t))(Il2CppBase() + 0x257EFE4))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunBadminton*, uintptr_t, int32_t))(Il2CppBase() + 0x257F06C))(this, parent, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257F108))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunBadminton*, bool, bool))(Il2CppBase() + 0x257F110))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunBadminton*))(Il2CppBase() + 0x257F120))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunBadminton*, uintptr_t))(Il2CppBase() + 0x257F128))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunBadminton*, uintptr_t, int32_t))(Il2CppBase() + 0x257F130))(this, P0, P1);
	}

};

}
