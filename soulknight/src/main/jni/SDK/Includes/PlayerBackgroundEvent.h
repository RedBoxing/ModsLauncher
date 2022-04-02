#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerBackgroundEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerBackgroundEvent"));
	}

	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bgState() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
