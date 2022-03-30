#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ObstacleProcessor {

class RelicObstacleProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ObstacleProcessor", "RelicObstacleProcessor"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& obstacles() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& obstacleRateRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& brazier() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& maxGenerateAttemptingTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetRoomTypes() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T RandomRoomObstacle(uintptr_t room) {
		return ((T (*)(RelicObstacleProcessor*, uintptr_t))(Il2CppBase() + 0x1DCEB90))(this, room);
	}
	template <typename T = void> T InstantiateObstacle(uintptr_t room, Il2CppArray<uintptr_t>* emptyPositions) {
		return ((T (*)(RelicObstacleProcessor*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCFB84))(this, room, emptyPositions);
	}
	template <typename T = void> T InstantiateBrazier(uintptr_t room, Il2CppArray<uintptr_t>* emptyPositions) {
		return ((T (*)(RelicObstacleProcessor*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCF130))(this, room, emptyPositions);
	}
	template <typename T = void> T PatternRoomObstacle(uintptr_t room) {
		return ((T (*)(RelicObstacleProcessor*, uintptr_t))(Il2CppBase() + 0x1DD0820))(this, room);
	}

};

}
