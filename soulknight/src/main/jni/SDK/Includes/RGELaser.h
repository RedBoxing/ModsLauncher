#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGELaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGELaser"));
	}

	template <typename T = bool> T& setup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& the_trigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isHitOn() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGELaser*))(Il2CppBase() + 0x22340B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGELaser*))(Il2CppBase() + 0x22341F8))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t value1, float value2, float value3, int32_t camp) {
		return ((T (*)(RGELaser*, uintptr_t, int32_t, float, float, int32_t))(Il2CppBase() + 0x223465C))(this, source_object, value1, value2, value3, camp);
	}
	template <typename T = bool> T get_hitOn() {
		return ((T (*)(RGELaser*))(Il2CppBase() + 0x2234920))(this);
	}
	template <typename T = void> T set_hitOn(bool value) {
		return ((T (*)(RGELaser*, bool))(Il2CppBase() + 0x22347B8))(this, value);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(RGELaser*))(Il2CppBase() + 0x2234980))(this);
	}
	template <typename T = void> T DestoryLaser() {
		return ((T (*)(RGELaser*))(Il2CppBase() + 0x2234B20))(this);
	}

};

}
