#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletAdditionalFireBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletAdditionalFireBall"));
	}

	template <typename T = float> T& bullet_range() {
		return *(T*)((uintptr_t)this + 0xF4);
	}

	template <typename T = uintptr_t> T CreateBullet(float fixed_angle) {
		return ((T (*)(WIBulletAdditionalFireBall*, float))(Il2CppBase() + 0x435E224))(this, fixed_angle);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateBullet(float P0) {
		return ((T (*)(WIBulletAdditionalFireBall*, float))(Il2CppBase() + 0x435E708))(this, P0);
	}

};

}
