#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LavaHiveCreateFishingSpotOnDead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LavaHiveCreateFishingSpotOnDead"));
	}

	template <typename T = uintptr_t> T& fishingSpotPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnCreate() {
		return ((T (*)(LavaHiveCreateFishingSpotOnDead*))(Il2CppBase() + 0x425AC54))(this);
	}

};

}
