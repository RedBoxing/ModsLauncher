#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishingSpotLootBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingSpotLootBase"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T TryGetUniqueLoot(int32_t fishRodLevel, uintptr_t rg_random) {
		return ((T (*)(FishingSpotLootBase*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, fishRodLevel, rg_random);
	}
	template <typename T = uintptr_t> T TryGetLoot(int32_t fishRodLevel, uintptr_t rg_random) {
		return ((T (*)(FishingSpotLootBase*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, fishRodLevel, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomLoot(int32_t fishRodLevel, uintptr_t c_pool, uintptr_t b_pool, uintptr_t a_pool, uintptr_t s_pool, uintptr_t spec_pool, bool canUnique, uintptr_t rg_random) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x450EB20))(0, fishRodLevel, c_pool, b_pool, a_pool, s_pool, spec_pool, canUnique, rg_random);
	}

};

}
