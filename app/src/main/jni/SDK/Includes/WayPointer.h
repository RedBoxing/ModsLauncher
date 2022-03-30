#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WayPointer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WayPointer"));
	}

	template <typename T = float> T& minDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nextPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& walkers() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Register(uintptr_t walker) {
		return ((T (*)(WayPointer*, uintptr_t))(Il2CppBase() + 0x43663D4))(this, walker);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WayPointer*))(Il2CppBase() + 0x43664F4))(this);
	}

};

}
