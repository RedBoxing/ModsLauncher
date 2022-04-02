#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill6Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill6Data"));
	}

	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& flyOneTripDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& emitDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& alertLine() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& throwSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
