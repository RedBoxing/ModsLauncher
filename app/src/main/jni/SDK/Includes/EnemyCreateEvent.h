#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyCreateEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyCreateEvent"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
