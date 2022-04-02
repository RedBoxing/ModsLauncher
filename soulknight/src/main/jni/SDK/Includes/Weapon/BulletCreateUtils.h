#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Weapon {

class BulletCreateUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Weapon", "BulletCreateUtils"));
	}


	template <typename T = uintptr_t> static T CreateDefaultBullet(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4366874))(0, weapon);
	}
	template <typename T = uintptr_t> static T CreateDefaultBullet_1(uintptr_t weapon, float currentAngle) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x43669E4))(0, weapon, currentAngle);
	}

};

}
