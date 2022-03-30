#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGLaserTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGLaserTrigger"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& next_frame() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& in_atk() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGLaserTrigger*))(Il2CppBase() + 0x1B69A4C))(this);
	}
	template <typename T = void> T ShowCollider() {
		return ((T (*)(RGLaserTrigger*))(Il2CppBase() + 0x1B69AA8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGLaserTrigger*))(Il2CppBase() + 0x1B69B5C))(this);
	}
	template <typename T = void> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(RGLaserTrigger*, uintptr_t))(Il2CppBase() + 0x1B69C04))(this, other);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(RGLaserTrigger*))(Il2CppBase() + 0x1B6A358))(this);
	}

};

}
