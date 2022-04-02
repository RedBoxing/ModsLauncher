#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun006
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun006"));
	}

	template <typename T = float> T& swordScale() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& sword_reverse() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(Gun006*, bool))(Il2CppBase() + 0x46228D8))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4622994))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x46229F4))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4622A78))(this);
	}
	template <typename T = void> T CreateBullet(bool reverse) {
		return ((T (*)(Gun006*, bool))(Il2CppBase() + 0x4622B04))(this, reverse);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4622DC0))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4623194))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(Gun006*, uintptr_t))(Il2CppBase() + 0x4623414))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(Gun006*, uintptr_t, int32_t))(Il2CppBase() + 0x462349C))(this, parent, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4623538))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4623540))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(Gun006*))(Il2CppBase() + 0x4623548))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(Gun006*, uintptr_t))(Il2CppBase() + 0x4623550))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(Gun006*, uintptr_t, int32_t))(Il2CppBase() + 0x4623558))(this, P0, P1);
	}

};

}
