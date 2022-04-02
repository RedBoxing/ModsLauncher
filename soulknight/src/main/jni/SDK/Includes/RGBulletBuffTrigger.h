#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBulletBuffTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBulletBuffTrigger"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGBulletBuffTrigger*))(Il2CppBase() + 0x19D16E0))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBulletBuffTrigger*))(Il2CppBase() + 0x19D1748))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGBulletBuffTrigger*))(Il2CppBase() + 0x19D188C))(this);
	}

};

}
