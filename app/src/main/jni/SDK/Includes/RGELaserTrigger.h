#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGELaserTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGELaserTrigger"));
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
	template <typename T = bool> T& start_hit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGELaserTrigger*))(Il2CppBase() + 0x2234BE4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGELaserTrigger*, uintptr_t))(Il2CppBase() + 0x2234C80))(this, other);
	}
	template <typename T = void> T StartHit() {
		return ((T (*)(RGELaserTrigger*))(Il2CppBase() + 0x2235188))(this);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(RGELaserTrigger*))(Il2CppBase() + 0x2234A5C))(this);
	}

};

}
