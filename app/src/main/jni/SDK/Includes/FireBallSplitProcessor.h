#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FireBallSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireBallSplitProcessor"));
	}

	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& newBulletShowInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(FireBallSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x447912C))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(FireBallSplitProcessor*, uintptr_t))(Il2CppBase() + 0x447965C))(this, splitConfig);
	}
	template <typename T = void> T SplitProcess(float damageFactor) {
		return ((T (*)(FireBallSplitProcessor*, float))(Il2CppBase() + 0x4479464))(this, damageFactor);
	}
	template <typename T = void> T NewBulletOnSplitb__3_2() {
		return ((T (*)(FireBallSplitProcessor*))(Il2CppBase() + 0x44797CC))(this);
	}

};

}
