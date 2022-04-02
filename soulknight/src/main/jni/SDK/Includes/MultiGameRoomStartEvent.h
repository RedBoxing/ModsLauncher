#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiGameRoomStartEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiGameRoomStartEvent"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
