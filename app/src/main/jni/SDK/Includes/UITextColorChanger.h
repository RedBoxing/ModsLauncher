#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITextColorChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITextColorChanger"));
	}

	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gradient() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UITextColorChanger*))(Il2CppBase() + 0x41C9DEC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITextColorChanger*))(Il2CppBase() + 0x41C9E54))(this);
	}

};

}
