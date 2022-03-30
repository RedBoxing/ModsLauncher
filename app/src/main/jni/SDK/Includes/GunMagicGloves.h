#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMagicGloves
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMagicGloves"));
	}

	template <typename T = float> T& atk_scale() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& right_renderer() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& left_renderer() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& gun_point2() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& ps_r() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& ps_l() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> static T& fireIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& gasIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& fireBigIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& gasBigIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2280D20))(this);
	}
	template <typename T = void> T EnablePS(bool enable) {
		return ((T (*)(GunMagicGloves*, bool))(Il2CppBase() + 0x2280FF0))(this, enable);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x228116C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281228))(this);
	}
	template <typename T = void> T PositionInit() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x22812A0))(this);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunMagicGloves*, float))(Il2CppBase() + 0x22813DC))(this, fixed_angle);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x22814E0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281540))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x22818E0))(this);
	}
	template <typename T = void> T Attack3() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x22819C0))(this);
	}
	template <typename T = void> T Attack_1(int32_t bulletIndex, Il2CppVector3 position, int32_t bullet_create_count) {
		return ((T (*)(GunMagicGloves*, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x2281620))(this, bulletIndex, position, bullet_create_count);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunMagicGloves*, uintptr_t*))(Il2CppBase() + 0x2281AE0))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281B70))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool isPet) {
		return ((T (*)(GunMagicGloves*, int32_t, bool))(Il2CppBase() + 0x2281BE4))(this, target_layer, isPet);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281D88))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281D90))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281D98))(this);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunMagicGloves*, float))(Il2CppBase() + 0x2281DA0))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunMagicGloves*))(Il2CppBase() + 0x2281DA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunMagicGloves*, int32_t, bool))(Il2CppBase() + 0x2281DB0))(this, P0, P1);
	}

};

}
