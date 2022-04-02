#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemFootballGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFootballGate"));
	}

	template <typename T = uintptr_t> T& coin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& used() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(ItemFootballGate*, uintptr_t))(Il2CppBase() + 0x1DA4EB4))(this, collision);
	}

};

}
