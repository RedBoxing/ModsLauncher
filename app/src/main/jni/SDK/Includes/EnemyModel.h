#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyModel"));
	}

	template <typename T = uintptr_t> T& enemyObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& showUpTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
