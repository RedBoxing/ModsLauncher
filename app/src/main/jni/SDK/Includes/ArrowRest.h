#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArrowRest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrowRest"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& rot_speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& can_through() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fire_point() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& run_time() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C95210))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C95364))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C953C0))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C95488))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C95850))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C958E4))(this);
	}
	template <typename T = void> T OnEnd() {
		return ((T (*)(ArrowRest*))(Il2CppBase() + 0x1C95940))(this);
	}

};

}
