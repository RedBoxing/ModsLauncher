#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill4Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill4Data"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& extraDelayRotate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& rotateSpeedAcceleration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& maxShiftAmount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& shiftSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& constantRotateSpeedWhenShifting() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
