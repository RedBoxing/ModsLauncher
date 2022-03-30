#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetUnlockedCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetUnlockedCondition"));
	}

	template <typename T = int32_t> T& petIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(PetUnlockedCondition*))(Il2CppBase() + 0x438D38C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(PetUnlockedCondition*))(Il2CppBase() + 0x438D52C))(this);
	}

};

}
