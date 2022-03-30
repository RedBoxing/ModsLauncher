#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTEnergy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTEnergy"));
	}

	template <typename T = uintptr_t> T& explode_obj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& sizeFactor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& customExplodeDamage() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _exploded() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(RGBTEnergy*))(Il2CppBase() + 0x1BB1954))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGBTEnergy*, uintptr_t))(Il2CppBase() + 0x1BB19B4))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(RGBTEnergy*))(Il2CppBase() + 0x1BB1A38))(this);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGBTEnergy*, uintptr_t))(Il2CppBase() + 0x1BB1F20))(this, P0);
	}

};

}
