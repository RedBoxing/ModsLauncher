#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletDamageModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletDamageModifier"));
	}

	template <typename T = int32_t> T& addDamageByThrough() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& addDamageByThrough_percentage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OnHit(uintptr_t weapon, uintptr_t bullet) {
		return ((T (*)(ArtifactBulletDamageModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A4A0))(this, weapon, bullet);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ArtifactBulletDamageModifier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9A694))(this, P0, P1);
	}

};

}
