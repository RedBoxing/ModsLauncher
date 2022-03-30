#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModBulletSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModBulletSize"));
	}


	template <typename T = void> T WeaponScaleModify(float value, uintptr_t filter) {
		return ((T (*)(WModBulletSize*, float, uintptr_t))(Il2CppBase() + 0x4363CF4))(this, value, filter);
	}

};

}
