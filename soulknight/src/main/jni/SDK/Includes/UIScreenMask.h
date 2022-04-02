#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIScreenMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIScreenMask"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& maskImages() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Show(float animDuration) {
		return ((T (*)(UIScreenMask*, float))(Il2CppBase() + 0x423BA90))(this, animDuration);
	}
	template <typename T = void> T Hide(float animDuration, uintptr_t onHideComplete) {
		return ((T (*)(UIScreenMask*, float, uintptr_t))(Il2CppBase() + 0x423BC78))(this, animDuration, onHideComplete);
	}

};

}
