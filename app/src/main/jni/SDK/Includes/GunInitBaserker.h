#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitBaserker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitBaserker"));
	}

	template <typename T = uintptr_t> T& bullet_up() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& up_repel() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& atk_force() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& atk_scale() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& isMaster2() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& right_renderer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& left_renderer() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& gun_point2() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& particleL() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& particleR() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& particleLRenderer() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& particleRRenderer() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226D944))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226DC64))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226DDEC))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226E2C8))(this);
	}
	template <typename T = void> T Attack3() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226E3B0))(this);
	}
	template <typename T = void> T Attack_1(uintptr_t bullet, Il2CppVector3 position, int32_t repel, bool is_reverse) {
		return ((T (*)(GunInitBaserker*, uintptr_t, Il2CppVector3, int32_t, bool))(Il2CppBase() + 0x226DED4))(this, bullet, position, repel, is_reverse);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226E448))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226E570))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunInitBaserker*, int32_t))(Il2CppBase() + 0x226E7B0))(this, target_layer);
	}
	template <typename T = void> T PositionInit() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226E674))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunInitBaserker*, uintptr_t*))(Il2CppBase() + 0x226E87C))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226E90C))(this);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunInitBaserker*, float))(Il2CppBase() + 0x226E980))(this, fixed_angle);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool isPet) {
		return ((T (*)(GunInitBaserker*, int32_t, bool))(Il2CppBase() + 0x226EA84))(this, target_layer, isPet);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226EC40))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226EC48))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226EC50))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitBaserker*))(Il2CppBase() + 0x226EC58))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunInitBaserker*, int32_t))(Il2CppBase() + 0x226EC60))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunInitBaserker*, float))(Il2CppBase() + 0x226EC68))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunInitBaserker*, int32_t, bool))(Il2CppBase() + 0x226EC70))(this, P0, P1);
	}

};

}
