#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitEnvoy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitEnvoy"));
	}

	template <typename T = int32_t> T& addDmg() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& elementSize() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& wSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& bulletIdx() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = void*> T& onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = void> T set_showInitWeapon(bool value) {
		return ((T (*)(GunInitEnvoy*, bool))(Il2CppBase() + 0x226EC7C))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226EDCC))(this);
	}
	template <typename T = void> T set_max(bool value) {
		return ((T (*)(GunInitEnvoy*, bool))(Il2CppBase() + 0x226EE2C))(this, value);
	}
	template <typename T = bool> T get_max() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226EEE8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226EF8C))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunInitEnvoy*, uintptr_t*))(Il2CppBase() + 0x226F06C))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226F0E8))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226F144))(this);
	}
	template <typename T = void> T HoldMax() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226F1A4))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226F208))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226F4D0))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunInitEnvoy*, bool, bool))(Il2CppBase() + 0x226F93C))(this, value1, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226FBC0))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226FCB0))(this);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunInitEnvoy*, uintptr_t, int32_t))(Il2CppBase() + 0x226FD78))(this, parent, target_layer);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunInitEnvoy*, uintptr_t))(Il2CppBase() + 0x226FF38))(this, parent);
	}
	template <typename T = void> T TryShowWSprite() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x226FE14))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunInitEnvoy*, int32_t))(Il2CppBase() + 0x226FFC8))(this, target_layer);
	}
	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x2270070))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(GunInitEnvoy*, void*))(Il2CppBase() + 0x2270078))(this, value);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x2270094))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x227009C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x22700A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_HoldMax() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x22700AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x22700B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunInitEnvoy*, bool, bool))(Il2CppBase() + 0x22700BC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x22700CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitEnvoy*))(Il2CppBase() + 0x22700D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunInitEnvoy*, uintptr_t, int32_t))(Il2CppBase() + 0x22700DC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunInitEnvoy*, uintptr_t))(Il2CppBase() + 0x22700E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunInitEnvoy*, int32_t))(Il2CppBase() + 0x22700EC))(this, P0);
	}

};

}
