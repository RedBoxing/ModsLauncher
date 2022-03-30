#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTokenCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTokenCoin"));
	}

	template <typename T = uintptr_t> T& tokenType() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T GetItem() {
		return ((T (*)(RGTokenCoin*))(Il2CppBase() + 0x43E51CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetItem() {
		return ((T (*)(RGTokenCoin*))(Il2CppBase() + 0x43E546C))(this);
	}

};

}
