#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageUtil"));
	}


	template <typename T = void> static T HurtDamage(uintptr_t enemyController, uintptr_t damageInfo, uintptr_t random, Il2CppVector3 forceDir, uintptr_t sourceObject) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x42D5278))(0, enemyController, damageInfo, random, forceDir, sourceObject);
	}

};

}
