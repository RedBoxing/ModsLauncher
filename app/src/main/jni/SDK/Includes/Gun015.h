#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun015
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun015"));
	}

	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& hasOffset() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& swordScale() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& createBulletAtGunpoint() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun015*))(Il2CppBase() + 0x25710EC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun015*))(Il2CppBase() + 0x257114C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun015*))(Il2CppBase() + 0x25711B0))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(Gun015*))(Il2CppBase() + 0x2571678))(this);
	}
	template <typename T = void> T CreateBullet(bool reverse) {
		return ((T (*)(Gun015*, bool))(Il2CppBase() + 0x25716FC))(this, reverse);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun015*))(Il2CppBase() + 0x2571B18))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun015*))(Il2CppBase() + 0x2571B20))(this);
	}

};

}
