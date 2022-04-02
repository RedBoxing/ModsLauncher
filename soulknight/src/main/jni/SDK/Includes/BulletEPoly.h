#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletEPoly
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletEPoly"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& range() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& power() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& is_poly() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletEPoly*))(Il2CppBase() + 0x45ADFB8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletEPoly*))(Il2CppBase() + 0x45AE068))(this);
	}
	template <typename T = void> T Polymerization() {
		return ((T (*)(BulletEPoly*))(Il2CppBase() + 0x45AE130))(this);
	}

};

}
