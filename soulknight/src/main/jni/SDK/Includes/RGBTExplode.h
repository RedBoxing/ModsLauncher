#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTExplode"));
	}

	template <typename T = uintptr_t> T& explode_obj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& has_effect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& explode_scale() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& exploded() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBTExplode*))(Il2CppBase() + 0x1BB1F28))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBTExplode*, uintptr_t))(Il2CppBase() + 0x1BB1F98))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(RGBTExplode*))(Il2CppBase() + 0x1BB2228))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGBTExplode*, uintptr_t))(Il2CppBase() + 0x1BB267C))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGBTExplode*))(Il2CppBase() + 0x1BB27E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGBTExplode*, uintptr_t))(Il2CppBase() + 0x1BB27E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGBTExplode*, uintptr_t))(Il2CppBase() + 0x1BB27F0))(this, P0);
	}

};

}
