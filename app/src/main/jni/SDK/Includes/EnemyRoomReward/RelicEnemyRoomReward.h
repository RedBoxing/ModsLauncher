#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace EnemyRoomReward {

class RelicEnemyRoomReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "EnemyRoomReward", "RelicEnemyRoomReward"));
	}


	template <typename T = void> T GetReward(uintptr_t room) {
		return ((T (*)(RelicEnemyRoomReward*, uintptr_t))(Il2CppBase() + 0x1FEEEC0))(this, room);
	}

};

}
