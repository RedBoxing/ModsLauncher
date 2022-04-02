#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTCreate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTCreate"));
	}

	template <typename T = uintptr_t> T& explode_obj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& has_effect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& explodeDelay() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& creationTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = void*> T& OnChildCreate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& exploded() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T add_OnChildCreate(void* value) {
		return ((T (*)(RGBTCreate*, void*))(Il2CppBase() + 0x1BB0020))(this, value);
	}
	template <typename T = void> T remove_OnChildCreate(void* value) {
		return ((T (*)(RGBTCreate*, void*))(Il2CppBase() + 0x1BB010C))(this, value);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBTCreate*))(Il2CppBase() + 0x1BB01F8))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGBTCreate*, uintptr_t, bool))(Il2CppBase() + 0x1BB02CC))(this, other, isCritic);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(RGBTCreate*))(Il2CppBase() + 0x1BB0360))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGBTCreate*, uintptr_t))(Il2CppBase() + 0x1BB03D0))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(RGBTCreate*))(Il2CppBase() + 0x1BB0454))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGBTCreate*))(Il2CppBase() + 0x1BB0848))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGBTCreate*, uintptr_t, bool))(Il2CppBase() + 0x1BB0850))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGBTCreate*, uintptr_t))(Il2CppBase() + 0x1BB085C))(this, P0);
	}

};

}
