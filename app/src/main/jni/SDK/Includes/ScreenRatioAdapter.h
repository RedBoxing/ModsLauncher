#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ScreenRatioAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScreenRatioAdapter"));
	}

	template <typename T = float> T& ratio_4_3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ratio_other() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ScreenRatioAdapter*))(Il2CppBase() + 0x1818170))(this);
	}

};

}
