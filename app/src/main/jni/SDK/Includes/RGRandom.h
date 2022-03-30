#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRandom"));
	}

	template <typename T = uintptr_t> T& seed_state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& seed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _random() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetRandomSeed(int32_t seed) {
		return ((T (*)(RGRandom*, int32_t))(Il2CppBase() + 0x1C70D44))(this, seed);
	}
	template <typename T = int32_t> T Range(int32_t min, int32_t max) {
		return ((T (*)(RGRandom*, int32_t, int32_t))(Il2CppBase() + 0x1C70E08))(this, min, max);
	}
	template <typename T = float> T Range_1(float min, float max) {
		return ((T (*)(RGRandom*, float, float))(Il2CppBase() + 0x1C70F34))(this, min, max);
	}
	template <typename T = Il2CppVector3> T RandomInCircle(float radius) {
		return ((T (*)(RGRandom*, float))(Il2CppBase() + 0x1C7106C))(this, radius);
	}

};

}
