#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Lock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Lock"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Get(uintptr_t lt) {
		return ((T (*)(Lock*, uintptr_t))(Il2CppBase() + 0x42FD1E0))(this, lt);
	}
	template <typename T = bool> T Release(uintptr_t lt) {
		return ((T (*)(Lock*, uintptr_t))(Il2CppBase() + 0x42FD48C))(this, lt);
	}

};

}
