#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ICustomObstacleList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICustomObstacleList"));
	}


	template <typename T = uintptr_t> T GetObstaclePrefab(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(ICustomObstacleList*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, obstacleIndex, random);
	}
	template <typename T = bool> T CanInstantiateObstacle(int32_t obstacleIndex, uintptr_t random) {
		return ((T (*)(ICustomObstacleList*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, obstacleIndex, random);
	}

};

}
