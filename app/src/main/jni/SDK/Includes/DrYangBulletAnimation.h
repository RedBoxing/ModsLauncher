#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DrYangBulletAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DrYangBulletAnimation"));
	}

	template <typename T = float> T& animationTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DrYangBulletAnimation*))(Il2CppBase() + 0x42EE8EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DrYangBulletAnimation*))(Il2CppBase() + 0x42EEA4C))(this);
	}

};

}
