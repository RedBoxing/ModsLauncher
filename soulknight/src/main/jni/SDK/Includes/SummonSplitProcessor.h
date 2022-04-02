#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SummonSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SummonSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t originBullet, int32_t currentIndex, uintptr_t splitConfig) {
		return ((T (*)(SummonSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42A6E84))(this, originBullet, currentIndex, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(SummonSplitProcessor*, uintptr_t))(Il2CppBase() + 0x42A6FE4))(this, splitConfig);
	}

};

}
