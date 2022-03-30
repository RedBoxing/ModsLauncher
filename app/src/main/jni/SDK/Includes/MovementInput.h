#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MovementInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MovementInput"));
	}

	template <typename T = Il2CppVector2> T& dir() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& weight() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_facing() {
		return ((T (*)(MovementInput*))(Il2CppBase() + 0x16F1ABC))(this);
	}
	template <typename T = void> T Invers() {
		return ((T (*)(MovementInput*))(Il2CppBase() + 0x16F1AC4))(this);
	}

};

}
