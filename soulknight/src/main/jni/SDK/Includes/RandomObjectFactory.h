#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomObjectFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomObjectFactory"));
	}


	template <typename T = uintptr_t> static T GetObject(uintptr_t ranData, uintptr_t rg_random) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44DB914))(0, ranData, rg_random);
	}
	template <typename T = int32_t> static T GetWeaponLevel(uintptr_t ranData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44DBA90))(0, ranData);
	}

};

}
