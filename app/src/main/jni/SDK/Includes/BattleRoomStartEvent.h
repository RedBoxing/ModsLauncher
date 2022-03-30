#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleRoomStartEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleRoomStartEvent"));
	}

	template <typename T = Il2CppString*> T& roomName() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
