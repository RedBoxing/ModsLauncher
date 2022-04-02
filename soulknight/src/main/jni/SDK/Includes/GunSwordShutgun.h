#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSwordShutgun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSwordShutgun"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217EA14))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunSwordShutgun*, bool))(Il2CppBase() + 0x217EA74))(this, value);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunSwordShutgun*, bool, bool))(Il2CppBase() + 0x217EB30))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217EC60))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217F158))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217F1FC))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217EFD8))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunSwordShutgun*, uintptr_t))(Il2CppBase() + 0x217F580))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunSwordShutgun*, uintptr_t, int32_t))(Il2CppBase() + 0x217F608))(this, parent, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217F6AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunSwordShutgun*, bool, bool))(Il2CppBase() + 0x217F6B4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunSwordShutgun*))(Il2CppBase() + 0x217F6C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunSwordShutgun*, uintptr_t))(Il2CppBase() + 0x217F6CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunSwordShutgun*, uintptr_t, int32_t))(Il2CppBase() + 0x217F6D4))(this, P0, P1);
	}

};

}
