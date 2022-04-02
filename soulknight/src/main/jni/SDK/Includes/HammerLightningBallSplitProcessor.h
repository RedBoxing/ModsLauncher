#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HammerLightningBallSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HammerLightningBallSplitProcessor"));
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
		return ((T (*)(HammerLightningBallSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1A30A6C))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(HammerLightningBallSplitProcessor*, uintptr_t))(Il2CppBase() + 0x1A31040))(this, splitConfig);
	}
	template <typename T = void> T SplitProcess(float damageFactor, uintptr_t source) {
		return ((T (*)(HammerLightningBallSplitProcessor*, float, uintptr_t))(Il2CppBase() + 0x1A30DA8))(this, damageFactor, source);
	}
	template <typename T = void> T NewBulletOnSplitb__3_2() {
		return ((T (*)(HammerLightningBallSplitProcessor*))(Il2CppBase() + 0x1A31360))(this);
	}

};

}
