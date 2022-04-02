#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMiniKnight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMiniKnight"));
	}

	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& need_set_trigger_start() {
		return *(T*)((uintptr_t)this + 0x19D);
	}
	template <typename T = uintptr_t> T& gunRenderer() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& charRenderer() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunMiniKnight*))(Il2CppBase() + 0x2286114))(this);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunMiniKnight*, float))(Il2CppBase() + 0x228633C))(this, fixed_angle);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunMiniKnight*, uintptr_t, int32_t))(Il2CppBase() + 0x2286440))(this, parent, target_layer);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMiniKnight*))(Il2CppBase() + 0x22864E8))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunMiniKnight*))(Il2CppBase() + 0x22868B0))(this);
	}
	template <typename T = void> T CreateBullet(float speed, float angle) {
		return ((T (*)(GunMiniKnight*, float, float))(Il2CppBase() + 0x2286640))(this, speed, angle);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunMiniKnight*))(Il2CppBase() + 0x2286924))(this);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunMiniKnight*, float))(Il2CppBase() + 0x228692C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunMiniKnight*, uintptr_t, int32_t))(Il2CppBase() + 0x2286934))(this, P0, P1);
	}

};

}
