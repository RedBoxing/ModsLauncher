#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ButtonState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonState"));
	}

	template <typename T = int32_t> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_EventData() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_eventData() {
		return ((T (*)(ButtonState*))(Il2CppBase() + 0x2692258))(this);
	}
	template <typename T = void> T set_eventData(uintptr_t value) {
		return ((T (*)(ButtonState*, uintptr_t))(Il2CppBase() + 0x26922B8))(this, value);
	}
	template <typename T = int32_t> T get_button() {
		return ((T (*)(ButtonState*))(Il2CppBase() + 0x269232C))(this);
	}
	template <typename T = void> T set_button(int32_t value) {
		return ((T (*)(ButtonState*, int32_t))(Il2CppBase() + 0x269238C))(this, value);
	}

};

}
