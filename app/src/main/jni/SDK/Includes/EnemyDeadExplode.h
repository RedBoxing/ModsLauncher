#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyDeadExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyDeadExplode"));
	}

	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyDeadExplode*))(Il2CppBase() + 0x1FE72B8))(this);
	}
	template <typename T = void> T DeadExplode(uintptr_t enemy) {
		return ((T (*)(EnemyDeadExplode*, uintptr_t))(Il2CppBase() + 0x1FE73AC))(this, enemy);
	}

};

}
