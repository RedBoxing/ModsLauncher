#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnterModeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterModeEvent"));
	}

	template <typename T = uintptr_t> T& game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
