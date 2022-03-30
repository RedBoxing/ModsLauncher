#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PhantomSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhantomSplitProcessor"));
	}

	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T NewBulletOnSplit(uintptr_t originBullet, int32_t currentIndex, uintptr_t splitConfig) {
		return ((T (*)(PhantomSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x438ED6C))(this, originBullet, currentIndex, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(PhantomSplitProcessor*, uintptr_t))(Il2CppBase() + 0x438F27C))(this, splitConfig);
	}
	template <typename T = void> T SetDamage() {
		return ((T (*)(PhantomSplitProcessor*))(Il2CppBase() + 0x438EED4))(this);
	}

};

}
