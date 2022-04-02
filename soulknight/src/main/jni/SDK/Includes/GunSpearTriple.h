#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSpearTriple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSpearTriple"));
	}

	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& multiBulletWait() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& angleRange() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& spearPositionOffset() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& spearYRange() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& audioClip2() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& _tripleId() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& attack2Coroutine() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T set_CanTriple(bool value) {
		return ((T (*)(GunSpearTriple*, bool))(Il2CppBase() + 0x217BFD8))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunSpearTriple*))(Il2CppBase() + 0x217C06C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSpearTriple*))(Il2CppBase() + 0x217C0CC))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunSpearTriple*))(Il2CppBase() + 0x217C320))(this);
	}
	template <typename T = uintptr_t> T CreateSpearBullet(int32_t direction) {
		return ((T (*)(GunSpearTriple*, int32_t))(Il2CppBase() + 0x217C3BC))(this, direction);
	}
	template <typename T = void> T CreateBullet(Il2CppVector3 bulletPosition, float force, float angle) {
		return ((T (*)(GunSpearTriple*, Il2CppVector3, float, float))(Il2CppBase() + 0x217C4C8))(this, bulletPosition, force, angle);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunSpearTriple*, bool, bool))(Il2CppBase() + 0x217C88C))(this, value1, manual);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunSpearTriple*))(Il2CppBase() + 0x217C998))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunSpearTriple*))(Il2CppBase() + 0x217CAAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunSpearTriple*, bool, bool))(Il2CppBase() + 0x217CAB4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunSpearTriple*))(Il2CppBase() + 0x217CAC4))(this);
	}

};

}
