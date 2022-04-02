#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateFishingSpotOnEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateFishingSpotOnEvent"));
	}

	template <typename T = uintptr_t> T& fishingSpotPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& baseAtRoomCenter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& posOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnCreate() {
		return ((T (*)(CreateFishingSpotOnEvent*))(Il2CppBase() + 0x427DC9C))(this);
	}

};

}
