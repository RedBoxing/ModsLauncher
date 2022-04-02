#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomDecorator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& roots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RandomDecorator*))(Il2CppBase() + 0x44DB1D0))(this);
	}

};

}
