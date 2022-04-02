#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomStartEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomStartEvent"));
	}

	template <typename T = Il2CppVector3> T& start_pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
