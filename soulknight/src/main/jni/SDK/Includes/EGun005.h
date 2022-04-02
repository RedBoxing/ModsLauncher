#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun005
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun005"));
	}

	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& shootDelayTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& the_aim() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& shot_count() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A5170))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A52CC))(this);
	}
	template <typename T = void> T SetAttackTrigger() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A53B4))(this);
	}
	template <typename T = void> T Shoot() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A571C))(this);
	}
	template <typename T = void> T EndShoot() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A5874))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A5958))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttackTrigger() {
		return ((T (*)(EGun005*))(Il2CppBase() + 0x22A5AA4))(this);
	}

};

}
