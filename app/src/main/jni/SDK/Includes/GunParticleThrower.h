#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunParticleThrower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunParticleThrower"));
	}

	template <typename T = float> T& bullet_angle() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& bullet_distance() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& particle_life_factor() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T set_atk_b(bool value) {
		return ((T (*)(GunParticleThrower*, bool))(Il2CppBase() + 0x216BCE8))(this, value);
	}
	template <typename T = bool> T get_atk_b() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216BF28))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216BFCC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C02C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C110))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C230))(this);
	}
	template <typename T = void> T SetParticle() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216BDF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_atk_b(bool P0) {
		return ((T (*)(GunParticleThrower*, bool))(Il2CppBase() + 0x216C3B0))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_get_atk_b() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C3BC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C3C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C3CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunParticleThrower*))(Il2CppBase() + 0x216C3D4))(this);
	}

};

}
