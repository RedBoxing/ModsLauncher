#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ESword01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ESword01"));
	}

	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& bulletSize() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& lockBulletRotation() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& onAttack() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ESword01*))(Il2CppBase() + 0x22AB69C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(ESword01*))(Il2CppBase() + 0x22AB7F8))(this);
	}

};

}
