#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBoom"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& boom_time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& boom_at_start() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& damageInfo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& useCustomInfo() {
		return *(T*)((uintptr_t)this + 0xE4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A9450))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A9500))(this);
	}
	template <typename T = void> T StartBoom() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A9574))(this);
	}
	template <typename T = void> T SoonExplode() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A9630))(this);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A96D4))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletBoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45A99A0))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T BoxDestroy(uintptr_t value) {
		return ((T (*)(BulletBoom*, uintptr_t))(Il2CppBase() + 0x45A9AF4))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A9940))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BulletBoom*))(Il2CppBase() + 0x45A9B68))(this);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(BulletBoom*, uintptr_t))(Il2CppBase() + 0x45A9BE4))(this, P0);
	}

};

}
