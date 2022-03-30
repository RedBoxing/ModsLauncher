#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TeachCharacterMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeachCharacterMask"));
	}


	template <typename T = void> T Init() {
		return ((T (*)(TeachCharacterMask*))(Il2CppBase() + 0x43BB6D0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TeachCharacterMask*, uintptr_t))(Il2CppBase() + 0x43BB788))(this, other);
	}

};

}
