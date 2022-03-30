#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun008
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun008"));
	}

	template <typename T = uintptr_t> T& atk2_bullet() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& atk2_damage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& the_aim() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& atk_type() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& laserAngle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A6E70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A6FCC))(this);
	}
	template <typename T = void> T SetAttackTrigger() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A70B4))(this);
	}
	template <typename T = void> T Shoot() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A7438))(this);
	}
	template <typename T = void> T EndShoot() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A7590))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A7674))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttackTrigger() {
		return ((T (*)(EGun008*))(Il2CppBase() + 0x22A78D8))(this);
	}

};

}
