#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletPolymerization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletPolymerization"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& power() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& is_poly() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& ignoreDamageInfo() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = bool> T& customDmg() {
		return *(T*)((uintptr_t)this + 0xD2);
	}

	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletPolymerization*, uintptr_t, uintptr_t))(Il2CppBase() + 0x238D9E8))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T Polymerization() {
		return ((T (*)(BulletPolymerization*))(Il2CppBase() + 0x238DB48))(this);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(BulletPolymerization*))(Il2CppBase() + 0x238E260))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BulletPolymerization*))(Il2CppBase() + 0x238E4A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletPolymerization*, uintptr_t, uintptr_t))(Il2CppBase() + 0x238E530))(this, P0, P1);
	}

};

}
