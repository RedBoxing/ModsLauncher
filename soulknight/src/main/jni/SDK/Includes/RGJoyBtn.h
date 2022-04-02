#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGJoyBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGJoyBtn"));
	}

	template <typename T = uintptr_t> T& joy_controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGJoyBtn*))(Il2CppBase() + 0x1B61F48))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(RGJoyBtn*, uintptr_t))(Il2CppBase() + 0x1B62028))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(RGJoyBtn*, uintptr_t))(Il2CppBase() + 0x1B62194))(this, eventData);
	}

};

}
