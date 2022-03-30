#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBulletTriggerWall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBulletTriggerWall"));
	}


	template <typename T = void> T CheckDestroyState() {
		return ((T (*)(RGBulletTriggerWall*))(Il2CppBase() + 0x19D743C))(this);
	}
	template <typename T = void> T CreateHitEffect(uintptr_t other, bool hasCritic) {
		return ((T (*)(RGBulletTriggerWall*, uintptr_t, bool))(Il2CppBase() + 0x19D74A0))(this, other, hasCritic);
	}
	template <typename T = void> T iFixBaseProxy_CheckDestroyState() {
		return ((T (*)(RGBulletTriggerWall*))(Il2CppBase() + 0x19D7594))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateHitEffect(uintptr_t P0, bool P1) {
		return ((T (*)(RGBulletTriggerWall*, uintptr_t, bool))(Il2CppBase() + 0x19D7598))(this, P0, P1);
	}

};

}
