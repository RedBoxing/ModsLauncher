#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIProgressBar"));
	}

	template <typename T = uintptr_t> T& slider() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> static T Create(Il2CppString* resName, uintptr_t parent) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x423905C))(0, resName, parent);
	}
	template <typename T = void> T Refresh(int32_t current, int32_t max) {
		return ((T (*)(UIProgressBar*, int32_t, int32_t))(Il2CppBase() + 0x42391E4))(this, current, max);
	}

};

}
