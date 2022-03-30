#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFireGas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFireGas"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& isGas() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletFireGas*))(Il2CppBase() + 0x45B0C74))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletFireGas*))(Il2CppBase() + 0x45B0D24))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletFireGas*, uintptr_t))(Il2CppBase() + 0x45B0DD8))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletFireGas*))(Il2CppBase() + 0x45B10AC))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletFireGas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B110C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletFireGas*))(Il2CppBase() + 0x45B1214))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletFireGas*))(Il2CppBase() + 0x45B0F44))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletFireGas*))(Il2CppBase() + 0x45B1A00))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletFireGas*, float))(Il2CppBase() + 0x45B0FE4))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletFireGas*, float))(Il2CppBase() + 0x45B1AEC))(this, totalTime);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletFireGas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B1C68))(this, P0, P1);
	}

};

}
