#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemySplitEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemySplitEvent"));
	}

	template <typename T = uintptr_t> T& originEnemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& splitEnemy() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
