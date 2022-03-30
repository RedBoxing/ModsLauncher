#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBulletSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t originBullet, int32_t currentIndex, uintptr_t splitConfig) {
		return ((T (*)(IBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, originBullet, currentIndex, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(IBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, splitConfig);
	}

};

}
