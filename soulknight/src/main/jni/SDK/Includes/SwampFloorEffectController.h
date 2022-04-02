#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampFloorEffectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampFloorEffectController"));
	}

	template <typename T = uintptr_t> T& effectController() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampFloorEffectController*))(Il2CppBase() + 0x18B6758))(this);
	}

};

}
