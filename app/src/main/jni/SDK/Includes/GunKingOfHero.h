#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunKingOfHero
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunKingOfHero"));
	}

	template <typename T = int32_t> T& meleeAddDamage() {
		return *(T*)((uintptr_t)this + 0x19C);
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
	template <typename T = bool> T& holdMax() {
		return *(T*)((uintptr_t)this + 0x1CD);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227A7B0))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunKingOfHero*, bool))(Il2CppBase() + 0x227A810))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227A8CC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunKingOfHero*, bool, bool))(Il2CppBase() + 0x227A9C0))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227AA70))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227ABD8))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunKingOfHero*, bool))(Il2CppBase() + 0x227ACA4))(this, manual);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227ADB8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227AE5C))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B1CC))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B340))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunKingOfHero*, uintptr_t))(Il2CppBase() + 0x227B444))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunKingOfHero*, uintptr_t, int32_t))(Il2CppBase() + 0x227B4CC))(this, parent, target_layer);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B560))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B5C0))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B874))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B8EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunKingOfHero*, bool, bool))(Il2CppBase() + 0x227B8F4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B904))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B90C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunKingOfHero*, bool))(Il2CppBase() + 0x227B914))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B920))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B928))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunKingOfHero*, uintptr_t))(Il2CppBase() + 0x227B930))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunKingOfHero*, uintptr_t, int32_t))(Il2CppBase() + 0x227B938))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B940))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunKingOfHero*))(Il2CppBase() + 0x227B948))(this);
	}

};

}
