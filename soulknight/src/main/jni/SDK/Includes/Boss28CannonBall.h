#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Boss28CannonBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Boss28CannonBall"));
	}

	template <typename T = uintptr_t> T& blink() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& explodeCountdown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& lockedShadow() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& bigExplosion() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& exploding() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _grapped() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& _continue_blink() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = float> T& lockDistance() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& _islocked() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(Boss28CannonBall*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1B2DF24))(this, damage, source_object, camp);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(Boss28CannonBall*))(Il2CppBase() + 0x1B2E208))(this);
	}
	template <typename T = void> T TurnRed(float duration) {
		return ((T (*)(Boss28CannonBall*, float))(Il2CppBase() + 0x1B2E05C))(this, duration);
	}
	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(Boss28CannonBall*, uintptr_t))(Il2CppBase() + 0x1B2E27C))(this, source_object);
	}
	template <typename T = void> T GrabByBoss() {
		return ((T (*)(Boss28CannonBall*))(Il2CppBase() + 0x1B2E3E8))(this);
	}
	template <typename T = void> T BigExplode() {
		return ((T (*)(Boss28CannonBall*))(Il2CppBase() + 0x1B2E4C0))(this);
	}
	template <typename T = bool> T CanOffLock(uintptr_t character) {
		return ((T (*)(Boss28CannonBall*, uintptr_t))(Il2CppBase() + 0x1B2E6D8))(this, character);
	}
	template <typename T = bool> T IsLocked() {
		return ((T (*)(Boss28CannonBall*))(Il2CppBase() + 0x1B2E860))(this);
	}
	template <typename T = void> T BeLock() {
		return ((T (*)(Boss28CannonBall*))(Il2CppBase() + 0x1B2E8C0))(this);
	}
	template <typename T = void> T OffLock() {
		return ((T (*)(Boss28CannonBall*))(Il2CppBase() + 0x1B2E940))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Hit(int32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(Boss28CannonBall*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1B2E9DC))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(Boss28CannonBall*, uintptr_t))(Il2CppBase() + 0x1B2E9E4))(this, P0);
	}

};

}
