#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShortLaserBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShortLaserBulletSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(ShortLaserBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x182D468))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(ShortLaserBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x182D864))(this, splitConfig);
	}
	template <typename T = void> T SetScale(uintptr_t splitConfig) {
		return ((T (*)(ShortLaserBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x182D654))(this, splitConfig);
	}
	template <typename T = void> T SetDamageFactor(float damageFactor) {
		return ((T (*)(ShortLaserBulletSplitProcessor*, float))(Il2CppBase() + 0x182D73C))(this, damageFactor);
	}

};

}
