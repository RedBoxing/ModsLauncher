#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun011Multi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun011Multi"));
	}

	template <typename T = uintptr_t> T& clip_end_shoot() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& shoot_end() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& shoot_end_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256EBB8))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256EC18))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(Gun011Multi*, bool))(Il2CppBase() + 0x256ECD0))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256EF88))(this);
	}
	template <typename T = void> T CreateEndShootBullet() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256ED98))(this);
	}
	template <typename T = void> T TurnEndShoot() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256F128))(this);
	}
	template <typename T = void> T AutoCreateEndBullet() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256F20C))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256F2F0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256F370))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256F378))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(Gun011Multi*, bool))(Il2CppBase() + 0x256F380))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun011Multi*))(Il2CppBase() + 0x256F38C))(this);
	}

};

}
