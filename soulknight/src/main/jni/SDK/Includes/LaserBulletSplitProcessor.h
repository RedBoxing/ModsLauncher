#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LaserBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LaserBulletSplitProcessor"));
	}

	template <typename T = void*> T& laserCache() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(LaserBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4259530))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(LaserBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x425994C))(this, splitConfig);
	}
	template <typename T = void> T SetScale(uintptr_t splitConfig) {
		return ((T (*)(LaserBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x4259768))(this, splitConfig);
	}
	template <typename T = void> T SetDamageFactor(float damageFactor) {
		return ((T (*)(LaserBulletSplitProcessor*, float))(Il2CppBase() + 0x4259850))(this, damageFactor);
	}

};

}
