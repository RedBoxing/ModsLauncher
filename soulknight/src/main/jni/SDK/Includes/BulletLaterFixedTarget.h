#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletLaterFixedTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletLaterFixedTarget"));
	}

	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& next_speed() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& has_target() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletLaterFixedTarget*))(Il2CppBase() + 0x2383514))(this);
	}
	template <typename T = void> T ShootTarget() {
		return ((T (*)(BulletLaterFixedTarget*))(Il2CppBase() + 0x238378C))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BulletLaterFixedTarget*))(Il2CppBase() + 0x2383AB8))(this);
	}
	template <typename T = uintptr_t> T get_bulletMover() {
		return ((T (*)(BulletLaterFixedTarget*))(Il2CppBase() + 0x2383FF0))(this);
	}
	template <typename T = void> T set_bulletMover(uintptr_t value) {
		return ((T (*)(BulletLaterFixedTarget*, uintptr_t))(Il2CppBase() + 0x2384054))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletLaterFixedTarget*))(Il2CppBase() + 0x23840E8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_bulletMover() {
		return ((T (*)(BulletLaterFixedTarget*))(Il2CppBase() + 0x23840F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_bulletMover(uintptr_t P0) {
		return ((T (*)(BulletLaterFixedTarget*, uintptr_t))(Il2CppBase() + 0x23840F8))(this, P0);
	}

};

}
