#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSwordKnight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSwordKnight"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunSwordKnight*, bool))(Il2CppBase() + 0x217DC1C))(this, value);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunSwordKnight*, bool, bool))(Il2CppBase() + 0x217DCD8))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSwordKnight*))(Il2CppBase() + 0x217DE08))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunSwordKnight*))(Il2CppBase() + 0x217E79C))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunSwordKnight*))(Il2CppBase() + 0x217E1AC))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunSwordKnight*, uintptr_t))(Il2CppBase() + 0x217E840))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunSwordKnight*, uintptr_t, int32_t))(Il2CppBase() + 0x217E8C8))(this, parent, target_layer);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunSwordKnight*))(Il2CppBase() + 0x217E95C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunSwordKnight*, bool, bool))(Il2CppBase() + 0x217E9E4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunSwordKnight*))(Il2CppBase() + 0x217E9F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunSwordKnight*, uintptr_t))(Il2CppBase() + 0x217E9FC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunSwordKnight*, uintptr_t, int32_t))(Il2CppBase() + 0x217EA04))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunSwordKnight*))(Il2CppBase() + 0x217EA0C))(this);
	}

};

}
