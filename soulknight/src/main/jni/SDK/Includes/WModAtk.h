#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModAtk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModAtk"));
	}


	template <typename T = void> T WeaponAtkModify(int32_t value, uintptr_t filter) {
		return ((T (*)(WModAtk*, int32_t, uintptr_t))(Il2CppBase() + 0x43636C8))(this, value, filter);
	}

};

}
