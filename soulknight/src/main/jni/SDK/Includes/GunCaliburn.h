#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCaliburn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCaliburn"));
	}

	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& clip_bullet() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& hold() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2586A68))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunCaliburn*, bool))(Il2CppBase() + 0x2586AC8))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2586B84))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunCaliburn*, bool, bool))(Il2CppBase() + 0x2586DF8))(this, value1, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2586F78))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunCaliburn*, bool))(Il2CppBase() + 0x2587040))(this, manual);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587154))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x25871F8))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587598))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x258770C))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunCaliburn*, uintptr_t))(Il2CppBase() + 0x258780C))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunCaliburn*, uintptr_t, int32_t))(Il2CppBase() + 0x2587894))(this, parent, target_layer);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587928))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587988))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587C3C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587CB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunCaliburn*, bool, bool))(Il2CppBase() + 0x2587CBC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587CCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunCaliburn*, bool))(Il2CppBase() + 0x2587CD4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587CE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587CE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunCaliburn*, uintptr_t))(Il2CppBase() + 0x2587CF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunCaliburn*, uintptr_t, int32_t))(Il2CppBase() + 0x2587CF8))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587D00))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunCaliburn*))(Il2CppBase() + 0x2587D08))(this);
	}

};

}
