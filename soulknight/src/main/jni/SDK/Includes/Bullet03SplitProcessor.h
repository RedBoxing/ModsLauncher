#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet03SplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet03SplitProcessor"));
	}

	template <typename T = void*> T& bulletCache() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T NewBulletOnSplit(uintptr_t originBullet, int32_t currentIndex, uintptr_t splitConfig) {
		return ((T (*)(Bullet03SplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x45A5868))(this, originBullet, currentIndex, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(Bullet03SplitProcessor*, uintptr_t))(Il2CppBase() + 0x45A5BB4))(this, splitConfig);
	}
	template <typename T = void> T SplitProcess(uintptr_t splitConfig, int32_t index) {
		return ((T (*)(Bullet03SplitProcessor*, uintptr_t, int32_t))(Il2CppBase() + 0x45A5954))(this, splitConfig, index);
	}

};

}
