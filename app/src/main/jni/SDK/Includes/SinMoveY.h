#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SinMoveY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SinMoveY"));
	}

	template <typename T = float> T& period() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& amount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(SinMoveY*))(Il2CppBase() + 0x183134C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(SinMoveY*))(Il2CppBase() + 0x18314B0))(this);
	}

};

}
