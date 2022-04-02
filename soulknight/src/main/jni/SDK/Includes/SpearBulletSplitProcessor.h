#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpearBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpearBulletSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(SpearBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4295728))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(SpearBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x4295864))(this, splitConfig);
	}

};

}
