#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeDizzy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeDizzy"));
	}


	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeDizzy*, uintptr_t))(Il2CppBase() + 0x4467088))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ExplodeDizzy*, uintptr_t))(Il2CppBase() + 0x4467F0C))(this, P0);
	}

};

}
