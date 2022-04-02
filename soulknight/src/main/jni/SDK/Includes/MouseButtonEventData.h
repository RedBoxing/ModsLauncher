#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MouseButtonEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MouseButtonEventData"));
	}

	template <typename T = uintptr_t> T& buttonState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& buttonData() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T PressedThisFrame() {
		return ((T (*)(MouseButtonEventData*))(Il2CppBase() + 0x2692408))(this);
	}
	template <typename T = bool> T ReleasedThisFrame() {
		return ((T (*)(MouseButtonEventData*))(Il2CppBase() + 0x2692474))(this);
	}

};

}
