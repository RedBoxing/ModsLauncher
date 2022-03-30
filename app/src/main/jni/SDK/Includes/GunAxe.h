#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunAxe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunAxe"));
	}

	template <typename T = uintptr_t> T& swordBullet() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& a_atk_times() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& atk_times() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunAxe*, bool))(Il2CppBase() + 0x257B084))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257B140))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunAxe*, bool, bool))(Il2CppBase() + 0x257B1EC))(this, value1, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257B2B4))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257B394))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257B55C))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257B824))(this);
	}
	template <typename T = void> T AttackEnd() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257BC54))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257BD10))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunAxe*, uintptr_t))(Il2CppBase() + 0x257BDD0))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunAxe*, uintptr_t, int32_t))(Il2CppBase() + 0x257BE58))(this, parent, target_layer);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257BF00))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunAxe*, bool, bool))(Il2CppBase() + 0x257BF08))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257BF18))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAtk() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257BF20))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunAxe*))(Il2CppBase() + 0x257BF28))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunAxe*, uintptr_t))(Il2CppBase() + 0x257BF30))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunAxe*, uintptr_t, int32_t))(Il2CppBase() + 0x257BF38))(this, P0, P1);
	}

};

}
