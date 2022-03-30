#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayFade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayFade"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& endValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DelayFade*))(Il2CppBase() + 0x42E9778))(this);
	}
	template <typename T = float> T Startb__4_0(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(DelayFade*, float, float, float, float))(Il2CppBase() + 0x42E9958))(this, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> T Startb__4_1(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(DelayFade*, float, float, float, float))(Il2CppBase() + 0x42E9998))(this, time, duration, overshootOrAmplitude, period);
	}

};

}
