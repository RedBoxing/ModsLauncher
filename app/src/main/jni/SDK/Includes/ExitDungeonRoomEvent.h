#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExitDungeonRoomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExitDungeonRoomEvent"));
	}

	template <typename T = Il2CppString*> T& roomName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& exit_dir() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
