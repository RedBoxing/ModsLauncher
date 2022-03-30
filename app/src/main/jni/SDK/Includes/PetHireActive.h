#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetHireActive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetHireActive"));
	}

	template <typename T = uintptr_t> T& enableRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PetHireActive*))(Il2CppBase() + 0x438C028))(this);
	}
	template <typename T = void> T HireSuccess(uintptr_t controller) {
		return ((T (*)(PetHireActive*, uintptr_t))(Il2CppBase() + 0x438C0C0))(this, controller);
	}

};

}
