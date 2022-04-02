#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHarmmer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHarmmer"));
	}

	template <typename T = bool> T& useGunPoint() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& hammer_offset() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& createExtraBullet() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249DED0))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunHarmmer*, bool))(Il2CppBase() + 0x249DF30))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249DFEC))(this);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(GunHarmmer*, bool))(Il2CppBase() + 0x249E090))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249E194))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249E6A0))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249E1F4))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunHarmmer*, uintptr_t))(Il2CppBase() + 0x249E700))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunHarmmer*, uintptr_t, int32_t))(Il2CppBase() + 0x249E788))(this, parent, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249E834))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunHarmmer*))(Il2CppBase() + 0x249E83C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(GunHarmmer*, bool))(Il2CppBase() + 0x249E844))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunHarmmer*, uintptr_t))(Il2CppBase() + 0x249E850))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunHarmmer*, uintptr_t, int32_t))(Il2CppBase() + 0x249E858))(this, P0, P1);
	}

};

}
