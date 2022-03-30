#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBulletTriggerBeheaded
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBulletTriggerBeheaded"));
	}

	template <typename T = uintptr_t> T& targetbuff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& bumpClip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& HasHitHost() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBulletTriggerBeheaded*, uintptr_t))(Il2CppBase() + 0x19D60DC))(this, other);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBulletTriggerBeheaded*))(Il2CppBase() + 0x19D73B0))(this);
	}
	template <typename T = void> T HitHost(uintptr_t host, int32_t finDmg) {
		return ((T (*)(RGBulletTriggerBeheaded*, uintptr_t, int32_t))(Il2CppBase() + 0x19D6C74))(this, host, finDmg);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGBulletTriggerBeheaded*, uintptr_t))(Il2CppBase() + 0x19D7430))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGBulletTriggerBeheaded*))(Il2CppBase() + 0x19D7434))(this);
	}

};

}
