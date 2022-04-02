#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTSpawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTSpawn"));
	}

	template <typename T = uintptr_t> T& explode_obj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& has_effect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& explode_scale() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& exploded() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBTSpawn*, uintptr_t))(Il2CppBase() + 0x1BB3A7C))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(RGBTSpawn*))(Il2CppBase() + 0x1BB3BBC))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGBTSpawn*, uintptr_t))(Il2CppBase() + 0x1BB3F00))(this, other);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBTSpawn*))(Il2CppBase() + 0x1BB4018))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGBTSpawn*, uintptr_t))(Il2CppBase() + 0x1BB4088))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGBTSpawn*, uintptr_t))(Il2CppBase() + 0x1BB4090))(this, P0);
	}

};

}
