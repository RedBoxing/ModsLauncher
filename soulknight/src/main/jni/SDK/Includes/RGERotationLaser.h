#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGERotationLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGERotationLaser"));
	}

	template <typename T = float> T& rot_speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& setup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& laser_len() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& duration_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& the_trigger() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _isHitOn() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_hitOn() {
		return ((T (*)(RGERotationLaser*))(Il2CppBase() + 0x223520C))(this);
	}
	template <typename T = void> T set_hitOn(bool value) {
		return ((T (*)(RGERotationLaser*, bool))(Il2CppBase() + 0x223526C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGERotationLaser*))(Il2CppBase() + 0x22353D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGERotationLaser*))(Il2CppBase() + 0x2235514))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t value1, float value2, float value3, float laser_len, int32_t camp) {
		return ((T (*)(RGERotationLaser*, uintptr_t, int32_t, float, float, float, int32_t))(Il2CppBase() + 0x223599C))(this, source_object, value1, value2, value3, laser_len, camp);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(RGERotationLaser*))(Il2CppBase() + 0x2235B18))(this);
	}
	template <typename T = void> T DestoryLaser() {
		return ((T (*)(RGERotationLaser*))(Il2CppBase() + 0x2235BF4))(this);
	}

};

}
