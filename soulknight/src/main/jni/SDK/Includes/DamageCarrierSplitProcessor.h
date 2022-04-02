#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageCarrierSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageCarrierSplitProcessor"));
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
		return ((T (*)(DamageCarrierSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42D2008))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(DamageCarrierSplitProcessor*, uintptr_t))(Il2CppBase() + 0x42D25E8))(this, splitConfig);
	}
	template <typename T = void> T SplitProcess(float damageFactor) {
		return ((T (*)(DamageCarrierSplitProcessor*, float))(Il2CppBase() + 0x42D23F0))(this, damageFactor);
	}
	template <typename T = void> T NewBulletOnSplitb__3_2() {
		return ((T (*)(DamageCarrierSplitProcessor*))(Il2CppBase() + 0x42D2758))(this);
	}

};

}
