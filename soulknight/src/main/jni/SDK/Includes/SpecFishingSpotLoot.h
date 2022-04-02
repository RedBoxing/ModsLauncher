#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpecFishingSpotLoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpecFishingSpotLoot"));
	}

	template <typename T = uintptr_t> T& C_Pool() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& B_Pool() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& A_Pool() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& S_Pool() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T TryGetUniqueLoot(int32_t fishRodLevel, uintptr_t rg_random) {
		return ((T (*)(SpecFishingSpotLoot*, int32_t, uintptr_t))(Il2CppBase() + 0x429598C))(this, fishRodLevel, rg_random);
	}
	template <typename T = uintptr_t> T TryGetLoot(int32_t fishRodLevel, uintptr_t rg_random) {
		return ((T (*)(SpecFishingSpotLoot*, int32_t, uintptr_t))(Il2CppBase() + 0x4295A38))(this, fishRodLevel, rg_random);
	}

};

}
