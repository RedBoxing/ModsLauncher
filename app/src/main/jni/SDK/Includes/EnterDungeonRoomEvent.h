#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnterDungeonRoomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterDungeonRoomEvent"));
	}

	template <typename T = Il2CppString*> T& roomName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& enter_dir() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
