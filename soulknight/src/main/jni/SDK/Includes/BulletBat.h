#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBat"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rigid2d() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& has_hit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& createdBySkill() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = float> T& move_angle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& anim_name() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletBat*))(Il2CppBase() + 0x45A77A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletBat*))(Il2CppBase() + 0x45A7880))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletBat*))(Il2CppBase() + 0x45A7B84))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BulletBat*))(Il2CppBase() + 0x45A87F0))(this);
	}

};

}
