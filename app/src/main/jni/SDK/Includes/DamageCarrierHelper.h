#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageCarrierHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageCarrierHelper"));
	}


	template <typename T = void> static T DealDamage(uintptr_t carrier, int32_t damage, bool isCrit, Il2CppVector3 repel, uintptr_t target, uintptr_t sourceObj, uintptr_t weapon, int32_t sourceCamp) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x428EC8C))(0, carrier, damage, isCrit, repel, target, sourceObj, weapon, sourceCamp);
	}

};

}
