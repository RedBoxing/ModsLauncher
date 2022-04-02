#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HoldingBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HoldingBulletSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(HoldingBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4203A8C))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(HoldingBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x4203F3C))(this, splitConfig);
	}
	template <typename T = void> T SetScale(uintptr_t splitConfig) {
		return ((T (*)(HoldingBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x4203D1C))(this, splitConfig);
	}
	template <typename T = void> T SetDamageFactor(float damageFactor) {
		return ((T (*)(HoldingBulletSplitProcessor*, float))(Il2CppBase() + 0x4203E04))(this, damageFactor);
	}

};

}
