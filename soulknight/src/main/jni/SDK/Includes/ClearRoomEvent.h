#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ClearRoomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClearRoomEvent"));
	}

	template <typename T = Il2CppString*> T& roomName() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
