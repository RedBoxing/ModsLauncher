#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class GunLittlePlaneContinuousShooting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "GunLittlePlaneContinuousShooting"));
	}

	template <typename T = uintptr_t> T& rocketClip() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T OnShootingEnd() {
		return ((T (*)(GunLittlePlaneContinuousShooting*))(Il2CppBase() + 0x43D0820))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnShootingEnd() {
		return ((T (*)(GunLittlePlaneContinuousShooting*))(Il2CppBase() + 0x43D0A0C))(this);
	}

};

}
