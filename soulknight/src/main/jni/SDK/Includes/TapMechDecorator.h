#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TapMechDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TapMechDecorator"));
	}

	template <typename T = uintptr_t> T& tapActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& tapInactive() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TapMechDecorator*))(Il2CppBase() + 0x43B353C))(this);
	}

};

}
