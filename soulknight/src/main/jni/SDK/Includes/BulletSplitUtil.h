#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSplitUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSplitUtil"));
	}


	template <typename T = uintptr_t> static T SetDamageWithFactor(uintptr_t damageInfo, float factor) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x239229C))(0, damageInfo, factor);
	}
	template <typename T = void> static T SetDamageWithFactor_1(uintptr_t damageCarrier, float factor) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x23923BC))(0, damageCarrier, factor);
	}

};

}
