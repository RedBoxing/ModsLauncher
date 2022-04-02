#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnterGameEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterGameEvent"));
	}

	template <typename T = uintptr_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsMutiGame() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsRemoteGame() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& IsHost() {
		return *(T*)((uintptr_t)this + 0x16);
	}


};

}
