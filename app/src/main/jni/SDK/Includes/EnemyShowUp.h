#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyShowUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyShowUp"));
	}

	template <typename T = void*> T& _enemyModels() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T AddEnemy(uintptr_t enemy, float showUpTime) {
		return ((T (*)(EnemyShowUp*, uintptr_t, float))(Il2CppBase() + 0x1FEBD84))(this, enemy, showUpTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnemyShowUp*))(Il2CppBase() + 0x1FEC210))(this);
	}

};

}
