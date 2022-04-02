#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodingBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodingBullet"));
	}

	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BulletModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Bullet() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = float> T get_StartTime() {
		return ((T (*)(ExplodingBullet*))(Il2CppBase() + 0x42D6BDC))(this);
	}
	template <typename T = float> T get_DelayTime() {
		return ((T (*)(ExplodingBullet*))(Il2CppBase() + 0x42D6BE4))(this);
	}
	template <typename T = uintptr_t> T get_BulletModel() {
		return ((T (*)(ExplodingBullet*))(Il2CppBase() + 0x42D6A68))(this);
	}
	template <typename T = uintptr_t> T get_Bullet() {
		return ((T (*)(ExplodingBullet*))(Il2CppBase() + 0x42D6A70))(this);
	}
	template <typename T = bool> T get_CanExplode() {
		return ((T (*)(ExplodingBullet*))(Il2CppBase() + 0x42D65A8))(this);
	}

};

}
