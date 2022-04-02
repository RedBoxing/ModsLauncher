#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyGate"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& enemies() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(EnemyGate*))(Il2CppBase() + 0x1FE92A4))(this);
	}
	template <typename T = uintptr_t> T GenEnemy() {
		return ((T (*)(EnemyGate*))(Il2CppBase() + 0x1FE9314))(this);
	}

};

}
