#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyMakerStartEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyMakerStartEvent"));
	}

	template <typename T = uintptr_t> T& enemyMaker() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
