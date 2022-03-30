#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace EnemyRoomReward {

class IEnemyRoomReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "EnemyRoomReward", "IEnemyRoomReward"));
	}


	template <typename T = void> T GetReward(uintptr_t room) {
		return ((T (*)(IEnemyRoomReward*, uintptr_t))(Il2CppBase() + 0x0))(this, room);
	}

};

}
