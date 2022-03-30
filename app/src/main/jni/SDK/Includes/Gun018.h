#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun018
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun018"));
	}

	template <typename T = uintptr_t> T& state1_sprite() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& state2_sprite() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& weapon_sprite() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& shoot_max_time() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& shoot_time() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& max_anim_speed() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& bullet_1_angle() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& bullet_1_deviation() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x25754D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x2575534))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x2575614))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(Gun018*, bool, bool))(Il2CppBase() + 0x257579C))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x2575858))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x25759FC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x2575BC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun018*))(Il2CppBase() + 0x2575BC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun018*, bool, bool))(Il2CppBase() + 0x2575BD0))(this, P0, P1);
	}

};

}
