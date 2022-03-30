#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EntranceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntranceConfig"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& entranceRoomPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cagePrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& stoneObstaclePrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& cageShowEffectScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& bossRoomPatternIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& bossRoomTypeIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& transferGatePosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& cagePosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& entranceRoomNpcPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}


};

}
