#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class GunNpcCard4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "GunNpcCard4"));
	}

	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& shootDelayTime() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _aimInstance() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& _isShooting() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> static T& SpeedRateFixed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ReadyShoot() {
		return ((T (*)(GunNpcCard4*))(Il2CppBase() + 0x43D0A10))(this);
	}
	template <typename T = void> T Shoot() {
		return ((T (*)(GunNpcCard4*))(Il2CppBase() + 0x43D0CE8))(this);
	}
	template <typename T = void> T EndShoot() {
		return ((T (*)(GunNpcCard4*))(Il2CppBase() + 0x43D0E40))(this);
	}
	template <typename T = void> T OnAttack() {
		return ((T (*)(GunNpcCard4*))(Il2CppBase() + 0x43D0F68))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunNpcCard4*))(Il2CppBase() + 0x43D1054))(this);
	}

};

}
