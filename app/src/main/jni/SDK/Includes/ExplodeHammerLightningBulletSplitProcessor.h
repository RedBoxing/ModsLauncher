#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeHammerLightningBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeHammerLightningBulletSplitProcessor"));
	}


	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(ExplodeHammerLightningBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x446C9BC))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(ExplodeHammerLightningBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x446CE38))(this, splitConfig);
	}
	template <typename T = void> T iFixBaseProxy_NewBulletOnSplit(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ExplodeHammerLightningBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x446D040))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OriginalBulletOnSplit(uintptr_t P0) {
		return ((T (*)(ExplodeHammerLightningBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x446D044))(this, P0);
	}

};

}
