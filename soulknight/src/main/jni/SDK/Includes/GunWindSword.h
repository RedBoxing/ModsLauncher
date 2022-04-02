#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunWindSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunWindSword"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> static T& SwordIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AxeIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SpearIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LaserIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunWindSword*, bool))(Il2CppBase() + 0x1A230A8))(this, value);
	}
	template <typename T = uintptr_t> T get_swordBullet() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23164))(this);
	}
	template <typename T = uintptr_t> T get_axeBullet() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23208))(this);
	}
	template <typename T = uintptr_t> T get_spearBullet() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A232AC))(this);
	}
	template <typename T = uintptr_t> T get_laserBullet() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23350))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A233F4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23454))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunWindSword*, bool, bool))(Il2CppBase() + 0x1A23524))(this, value1, manual);
	}
	template <typename T = int32_t> T get_atkIndex() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23628))(this);
	}
	template <typename T = void> T set_atkIndex(int32_t value) {
		return ((T (*)(GunWindSword*, int32_t))(Il2CppBase() + 0x1A236CC))(this, value);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23788))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A24250))(this);
	}
	template <typename T = void> T AxeAttack() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A242B0))(this);
	}
	template <typename T = void> T CreateSwordBullet(bool reverse) {
		return ((T (*)(GunWindSword*, bool))(Il2CppBase() + 0x1A23908))(this, reverse);
	}
	template <typename T = void> T CreateAxeBullet() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A23E60))(this);
	}
	template <typename T = void> T CreateSpearBullet(int32_t force) {
		return ((T (*)(GunWindSword*, int32_t))(Il2CppBase() + 0x1A24310))(this, force);
	}
	template <typename T = void> T CreateLaserBullet(int32_t atkCount, float angle) {
		return ((T (*)(GunWindSword*, int32_t, float))(Il2CppBase() + 0x1A23BC4))(this, atkCount, angle);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunWindSword*, uintptr_t))(Il2CppBase() + 0x1A246A8))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunWindSword*, uintptr_t, int32_t))(Il2CppBase() + 0x1A24730))(this, parent, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A247D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunWindSword*))(Il2CppBase() + 0x1A247DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunWindSword*, bool, bool))(Il2CppBase() + 0x1A247E4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunWindSword*, uintptr_t))(Il2CppBase() + 0x1A247F4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunWindSword*, uintptr_t, int32_t))(Il2CppBase() + 0x1A247FC))(this, P0, P1);
	}

};

}
