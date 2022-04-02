#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RotationTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationTest"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RotationTest*))(Il2CppBase() + 0x1806678))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RotationTest*))(Il2CppBase() + 0x18066D4))(this);
	}

};

}
