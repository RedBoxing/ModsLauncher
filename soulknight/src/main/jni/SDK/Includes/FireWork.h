#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FireWork
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireWork"));
	}

	template <typename T = uintptr_t> T& explode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& explodeScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& fireFx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& fireFxPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& explodePosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& hitDistance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& fireworkNormal() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& fireworkExplodePrepare() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& fireworkPlay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& boxCollider2D() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& circleCollider2D() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& particleSystem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& player() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T set_shouldFire(bool value) {
		return ((T (*)(FireWork*, bool))(Il2CppBase() + 0x4479988))(this, value);
	}
	template <typename T = bool> T get_shouldFire() {
		return ((T (*)(FireWork*))(Il2CppBase() + 0x4479A44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FireWork*))(Il2CppBase() + 0x4479AE8))(this);
	}
	template <typename T = void> T OnPlayFireWork() {
		return ((T (*)(FireWork*))(Il2CppBase() + 0x4479C30))(this);
	}
	template <typename T = void> T OnExplode() {
		return ((T (*)(FireWork*))(Il2CppBase() + 0x4479E58))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(FireWork*, uintptr_t))(Il2CppBase() + 0x447A22C))(this, other);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(FireWork*))(Il2CppBase() + 0x447A9A4))(this);
	}
	template <typename T = bool> T ShouldFire(uintptr_t other) {
		return ((T (*)(FireWork*, uintptr_t))(Il2CppBase() + 0x447A6E8))(this, other);
	}
	template <typename T = bool> T ShouldPlay(uintptr_t other) {
		return ((T (*)(FireWork*, uintptr_t))(Il2CppBase() + 0x447A42C))(this, other);
	}
	template <typename T = void> T FireWorkInit() {
		return ((T (*)(FireWork*))(Il2CppBase() + 0x447AB5C))(this);
	}

};

}
