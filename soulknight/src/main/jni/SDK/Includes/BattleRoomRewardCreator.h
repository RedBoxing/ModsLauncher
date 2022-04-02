#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleRoomRewardCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleRoomRewardCreator"));
	}


	template <typename T = bool> T OnCreateReward(uintptr_t room) {
		return ((T (*)(BattleRoomRewardCreator*, uintptr_t))(Il2CppBase() + 0x0))(this, room);
	}

};

}
