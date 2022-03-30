#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMechBoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMechBoom"));
	}

	template <typename T = float> T& explodeDelay() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& damageSource() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunMechBoom*))(Il2CppBase() + 0x22853E4))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(GunMechBoom*))(Il2CppBase() + 0x2285610))(this);
	}

};

}
