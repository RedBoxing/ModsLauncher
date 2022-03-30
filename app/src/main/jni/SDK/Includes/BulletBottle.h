#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBottle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBottle"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& exploded() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletBottle*))(Il2CppBase() + 0x45AA4D0))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(BulletBottle*, uintptr_t, bool))(Il2CppBase() + 0x45AA530))(this, other, isCritic);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(BulletBottle*, uintptr_t))(Il2CppBase() + 0x45AA5C4))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(BulletBottle*))(Il2CppBase() + 0x45AA648))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletBottle*))(Il2CppBase() + 0x45AAAC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(BulletBottle*, uintptr_t, bool))(Il2CppBase() + 0x45AAB3C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(BulletBottle*, uintptr_t))(Il2CppBase() + 0x45AAB48))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletBottle*))(Il2CppBase() + 0x45AAB50))(this);
	}

};

}
