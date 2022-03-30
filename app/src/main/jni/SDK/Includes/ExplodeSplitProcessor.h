#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeSplitProcessor"));
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
		return ((T (*)(ExplodeSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x44734A8))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(ExplodeSplitProcessor*, uintptr_t))(Il2CppBase() + 0x4473A88))(this, splitConfig);
	}
	template <typename T = void> T SplitProcess(float damageFactor) {
		return ((T (*)(ExplodeSplitProcessor*, float))(Il2CppBase() + 0x4473888))(this, damageFactor);
	}
	template <typename T = void> T NewBulletOnSplitb__3_2() {
		return ((T (*)(ExplodeSplitProcessor*))(Il2CppBase() + 0x4473BF8))(this);
	}

};

}
