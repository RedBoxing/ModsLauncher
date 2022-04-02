#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishingSpotLoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingSpotLoot"));
	}

	template <typename T = float> T& uniqueLootProbability() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& uniqueLoots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& loots() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T TryGetUniqueLoot(int32_t fishRodLevel, uintptr_t rg_random) {
		return ((T (*)(FishingSpotLoot*, int32_t, uintptr_t))(Il2CppBase() + 0x450E878))(this, fishRodLevel, rg_random);
	}
	template <typename T = uintptr_t> T TryGetLoot(int32_t fishRodLevel, uintptr_t rg_random) {
		return ((T (*)(FishingSpotLoot*, int32_t, uintptr_t))(Il2CppBase() + 0x450E98C))(this, fishRodLevel, rg_random);
	}

};

}
