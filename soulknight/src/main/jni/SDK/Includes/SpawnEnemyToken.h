#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpawnEnemyToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnEnemyToken"));
	}

	template <typename T = uintptr_t> T& enemyPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& autoStartAI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& startAI() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpawnEnemyToken*))(Il2CppBase() + 0x42950EC))(this);
	}
	template <typename T = void> T StartAI() {
		return ((T (*)(SpawnEnemyToken*))(Il2CppBase() + 0x4295384))(this);
	}

};

}
