#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletAdditional
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletAdditional"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& can_through() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WIBulletAdditional*))(Il2CppBase() + 0x435D348))(this);
	}
	template <typename T = void> T AttackEffect() {
		return ((T (*)(WIBulletAdditional*))(Il2CppBase() + 0x435D424))(this);
	}
	template <typename T = uintptr_t> T CreateBullet(float fixed_angle) {
		return ((T (*)(WIBulletAdditional*, float))(Il2CppBase() + 0x435D4BC))(this, fixed_angle);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(WIBulletAdditional*))(Il2CppBase() + 0x435D868))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackEffect() {
		return ((T (*)(WIBulletAdditional*))(Il2CppBase() + 0x435D870))(this);
	}

};

}
