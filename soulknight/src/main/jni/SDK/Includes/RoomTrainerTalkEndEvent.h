#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomTrainerTalkEndEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomTrainerTalkEndEvent"));
	}

	template <typename T = uintptr_t> T& tutorial_state() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
