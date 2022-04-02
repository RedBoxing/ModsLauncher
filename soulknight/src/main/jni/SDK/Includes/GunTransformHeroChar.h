#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTransformHeroChar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTransformHeroChar"));
	}


	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(GunTransformHeroChar*, bool))(Il2CppBase() + 0x1A204B4))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTransformHeroChar*))(Il2CppBase() + 0x1A20614))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(GunTransformHeroChar*, bool))(Il2CppBase() + 0x1A20678))(this, P0);
	}

};

}
