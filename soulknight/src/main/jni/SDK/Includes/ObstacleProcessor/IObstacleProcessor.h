#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ObstacleProcessor {

class IObstacleProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ObstacleProcessor", "IObstacleProcessor"));
	}


	template <typename T = void> T RandomRoomObstacle(uintptr_t room) {
		return ((T (*)(IObstacleProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, room);
	}
	template <typename T = void> T PatternRoomObstacle(uintptr_t room) {
		return ((T (*)(IObstacleProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, room);
	}

};

}
