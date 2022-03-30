#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchButtonTip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchButtonTip"));
	}

	template <typename T = uintptr_t> T& buttonImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& originalSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rectButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rectLayout() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SwitchButtonTip*))(Il2CppBase() + 0x18BF360))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwitchButtonTip*))(Il2CppBase() + 0x18BF3BC))(this);
	}

};

}
