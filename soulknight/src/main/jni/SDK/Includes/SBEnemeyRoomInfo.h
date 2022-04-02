#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBEnemeyRoomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBEnemeyRoomInfo"));
	}

	template <typename T = int32_t> T& levelIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& enemyPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& hpFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& enemyDensity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& atkOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& exEnemy() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
