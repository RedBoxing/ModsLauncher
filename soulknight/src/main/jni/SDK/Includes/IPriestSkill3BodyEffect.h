#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IPriestSkill3BodyEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPriestSkill3BodyEffect"));
	}


	template <typename T = void> T Init(uintptr_t controller) {
		return ((T (*)(IPriestSkill3BodyEffect*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T ToNormalMode() {
		return ((T (*)(IPriestSkill3BodyEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ToShadowMode() {
		return ((T (*)(IPriestSkill3BodyEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HideBulletWhileSurround() {
		return ((T (*)(IPriestSkill3BodyEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T get_BulletReleasePosition() {
		return ((T (*)(IPriestSkill3BodyEffect*))(Il2CppBase() + 0x0))(this);
	}

};

}
