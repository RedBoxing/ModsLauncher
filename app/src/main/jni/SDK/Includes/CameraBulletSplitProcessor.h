#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CameraBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraBulletSplitProcessor"));
	}

	template <typename T = void*> static T& bulletFullScreanCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& originalGOCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& originalBulletCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> T& timeInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(CameraBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1868B94))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(CameraBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x1868F34))(this, splitConfig);
	}

};

}
