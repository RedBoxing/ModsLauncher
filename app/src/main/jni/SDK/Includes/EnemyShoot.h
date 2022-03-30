#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyShoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyShoot"));
	}


	template <typename T = void> T StartShoot(uintptr_t random) {
		return ((T (*)(EnemyShoot*, uintptr_t))(Il2CppBase() + 0x0))(this, random);
	}

};

}
