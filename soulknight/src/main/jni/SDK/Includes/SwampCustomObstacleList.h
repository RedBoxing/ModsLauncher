#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampCustomObstacleList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampCustomObstacleList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& obstacles() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mapManagerLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _obstacles() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampCustomObstacleList*))(Il2CppBase() + 0x42ACC24))(this);
	}
	template <typename T = uintptr_t> T GetObstaclePrefab(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(SwampCustomObstacleList*, int32_t, uintptr_t))(Il2CppBase() + 0x42ACDC0))(this, obstacleIndex, random);
	}
	template <typename T = bool> T CanInstantiateObstacle(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(SwampCustomObstacleList*, int32_t, uintptr_t))(Il2CppBase() + 0x42ACEDC))(this, obstacleIndex, random);
	}

};

}
