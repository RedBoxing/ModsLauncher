#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LaserPointBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LaserPointBulletSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(LaserPointBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x425A6F4))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(LaserPointBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x425AB60))(this, splitConfig);
	}
	template <typename T = void> T SetScale(uintptr_t splitConfig) {
		return ((T (*)(LaserPointBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x425A950))(this, splitConfig);
	}
	template <typename T = void> T SetDamageFactor(float damageFactor) {
		return ((T (*)(LaserPointBulletSplitProcessor*, float))(Il2CppBase() + 0x425AA38))(this, damageFactor);
	}

};

}
