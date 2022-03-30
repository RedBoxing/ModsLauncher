#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KillEnemyEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KillEnemyEvent"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& other() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
