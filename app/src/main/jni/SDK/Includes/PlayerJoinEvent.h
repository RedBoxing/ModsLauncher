#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerJoinEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerJoinEvent"));
	}

	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
