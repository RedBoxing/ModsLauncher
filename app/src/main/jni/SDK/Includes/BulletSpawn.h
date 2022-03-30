#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSpawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSpawn"));
	}

	template <typename T = float> T& spawnDelay() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& spawnInterval() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& _time() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& emitter() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T UpdateInfo(uintptr_t bInfo, uintptr_t dInfo) {
		return ((T (*)(BulletSpawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2391C38))(this, bInfo, dInfo);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BulletSpawn*))(Il2CppBase() + 0x2391EE4))(this);
	}
	template <typename T = void> T Spawn() {
		return ((T (*)(BulletSpawn*))(Il2CppBase() + 0x2391F84))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletSpawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23921B4))(this, P0, P1);
	}

};

}
