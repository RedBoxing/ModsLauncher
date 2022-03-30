#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DarkGrandKnightExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DarkGrandKnightExtra"));
	}

	template <typename T = Il2CppVector3> T& explodePosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& explodeRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& explodeIndex0() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& explodeIndex1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& endBulletUp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& endBulletDown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _sword() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _explodingBullets() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _extraExplodeCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppVector3> T get_ExplodePosition() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D54F8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D55A0))(this);
	}
	template <typename T = Il2CppVector3> T GetExplodePosition() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D5638))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D5B40))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D5BBC))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D611C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D6424))(this);
	}
	template <typename T = void> T ReleaseEndBullet(uintptr_t explodingBullet) {
		return ((T (*)(DarkGrandKnightExtra*, uintptr_t))(Il2CppBase() + 0x42D661C))(this, explodingBullet);
	}
	template <typename T = uintptr_t> T CreateExplode(int32_t index, Il2CppVector3 position) {
		return ((T (*)(DarkGrandKnightExtra*, int32_t, Il2CppVector3))(Il2CppBase() + 0x42D5EC4))(this, index, position);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(DarkGrandKnightExtra*, uintptr_t*))(Il2CppBase() + 0x42D6A78))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(DarkGrandKnightExtra*))(Il2CppBase() + 0x42D6AFC))(this);
	}

};

}
