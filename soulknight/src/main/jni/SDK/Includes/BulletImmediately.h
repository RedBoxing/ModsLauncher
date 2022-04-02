#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletImmediately
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletImmediately"));
	}

	template <typename T = uintptr_t> T& lineColor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& delay_time() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& fixed_direction() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& explode_object() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& startPos() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x2380EE8))(this);
	}
	template <typename T = void> T CastRay() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x23811D0))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x238188C))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x2381B0C))(this);
	}
	template <typename T = uintptr_t> T get_bulletMover() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x2381BC8))(this);
	}
	template <typename T = void> T set_bulletMover(uintptr_t value) {
		return ((T (*)(BulletImmediately*, uintptr_t))(Il2CppBase() + 0x2381C2C))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x2381CE4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_bulletMover() {
		return ((T (*)(BulletImmediately*))(Il2CppBase() + 0x2381CEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_bulletMover(uintptr_t P0) {
		return ((T (*)(BulletImmediately*, uintptr_t))(Il2CppBase() + 0x2381CF4))(this, P0);
	}

};

}
