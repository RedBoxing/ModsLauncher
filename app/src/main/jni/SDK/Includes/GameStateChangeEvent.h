#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameStateChangeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameStateChangeEvent"));
	}

	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
