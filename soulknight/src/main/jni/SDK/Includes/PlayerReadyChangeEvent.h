#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerReadyChangeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerReadyChangeEvent"));
	}

	template <typename T = uint32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isReady() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
