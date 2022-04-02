#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetUnlockToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetUnlockToken"));
	}

	template <typename T = int32_t> T& petIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PetUnlockToken*))(Il2CppBase() + 0x438D180))(this);
	}

};

}
