#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceCaveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceCaveConfig"));
	}

	template <typename T = uintptr_t> T& entranceConfig() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& iceNailConfig() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& fishingSpotProbability() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& maxFishingSpotPerRoom() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& fishingSpotPrefab() {
		return *(T*)((uintptr_t)this + 0x70);
	}


};

}
