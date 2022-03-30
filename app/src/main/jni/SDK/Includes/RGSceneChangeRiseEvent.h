#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSceneChangeRiseEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSceneChangeRiseEvent"));
	}

	template <typename T = uintptr_t> T& curScene() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGSceneChangeRiseEvent*))(Il2CppBase() + 0x1C2B610))(this);
	}

};

}
