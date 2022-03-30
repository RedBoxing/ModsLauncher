#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicObstacle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicObstacle"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& idleSprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& destroyedSprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& spriteTransform() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector2> T& xRange() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector2> T& yRange() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& shakeCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& effectCountRange() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& destroyEffectCountRange() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _objectShaker() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _hasDestroyed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicObstacle*))(Il2CppBase() + 0x42C73D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RelicObstacle*))(Il2CppBase() + 0x42C7530))(this);
	}
	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(RelicObstacle*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42C75D0))(this, damage, source_object, camp);
	}
	template <typename T = void> T BoxDestroy(uintptr_t sourceObject) {
		return ((T (*)(RelicObstacle*, uintptr_t))(Il2CppBase() + 0x42C7834))(this, sourceObject);
	}
	template <typename T = void> T DestroyBox() {
		return ((T (*)(RelicObstacle*))(Il2CppBase() + 0x42C7944))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Hit(int32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(RelicObstacle*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42C7B08))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(RelicObstacle*, uintptr_t))(Il2CppBase() + 0x42C7B10))(this, P0);
	}

};

}
