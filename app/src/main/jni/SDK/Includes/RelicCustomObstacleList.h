#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicCustomObstacleList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicCustomObstacleList"));
	}


	template <typename T = uintptr_t> T GetObstaclePrefab(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(RelicCustomObstacleList*, int32_t, uintptr_t))(Il2CppBase() + 0x42B59F8))(this, obstacleIndex, random);
	}
	template <typename T = bool> T CanInstantiateObstacle(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(RelicCustomObstacleList*, int32_t, uintptr_t))(Il2CppBase() + 0x42B5A74))(this, obstacleIndex, random);
	}

};

}
