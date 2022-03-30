#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MercenaryChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MercenaryChecker"));
	}

	template <typename T = bool> T& hasTrainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MercenaryChecker*))(Il2CppBase() + 0x41E71E0))(this);
	}

};

}
