#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishingSpotVoidAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingSpotVoidAnimation"));
	}

	template <typename T = float> T& appearDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& disappearDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& disappearDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _mat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _currentFillAmount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _sequence() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnStart(uintptr_t creator) {
		return ((T (*)(FishingSpotVoidAnimation*, uintptr_t))(Il2CppBase() + 0x450F078))(this, creator);
	}
	template <typename T = void> T OnFinish(uintptr_t creator) {
		return ((T (*)(FishingSpotVoidAnimation*, uintptr_t))(Il2CppBase() + 0x450F290))(this, creator);
	}
	template <typename T = float> T OnStartb__6_0() {
		return ((T (*)(FishingSpotVoidAnimation*))(Il2CppBase() + 0x450F418))(this);
	}
	template <typename T = void> T OnStartb__6_1(float v) {
		return ((T (*)(FishingSpotVoidAnimation*, float))(Il2CppBase() + 0x450F420))(this, v);
	}
	template <typename T = float> T OnFinishb__7_0() {
		return ((T (*)(FishingSpotVoidAnimation*))(Il2CppBase() + 0x450F498))(this);
	}
	template <typename T = void> T OnFinishb__7_1(float v) {
		return ((T (*)(FishingSpotVoidAnimation*, float))(Il2CppBase() + 0x450F4A0))(this, v);
	}

};

}
