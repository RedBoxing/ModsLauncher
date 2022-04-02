#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShuttleBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShuttleBullet"));
	}

	template <typename T = uintptr_t> T& fly_bullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hit_effect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fly_speed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target_tf() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& the_fly_bullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& intensify() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& last_target() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& has_hit_list() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& jumpOnly() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& bulletSize() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& can_hit_back() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& buff_ele() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& dizzy_rate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> static T& max_count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& the_max_count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetWay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& wayIndex() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T FixedUpdate() {
		return ((T (*)(ShuttleBullet*))(Il2CppBase() + 0x182EFC8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(ShuttleBullet*))(Il2CppBase() + 0x182F74C))(this);
	}
	template <typename T = void> T FindNextTarget() {
		return ((T (*)(ShuttleBullet*))(Il2CppBase() + 0x182F7A8))(this);
	}
	template <typename T = void> T StartFlyBulelt(bool intensify, uintptr_t last_target, int32_t add_atk) {
		return ((T (*)(ShuttleBullet*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x18303BC))(this, intensify, last_target, add_atk);
	}

};

}
