#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyMakerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyMakerState"));
	}

	template <typename T = bool> T& isInitRound() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
