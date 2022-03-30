#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IDelayReleaseWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDelayReleaseWeapon"));
	}


	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(IDelayReleaseWeapon*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(IDelayReleaseWeapon*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
