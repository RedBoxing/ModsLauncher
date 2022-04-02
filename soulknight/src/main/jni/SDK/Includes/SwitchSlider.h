#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchSlider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchSlider"));
	}

	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0x139);
	}

	template <typename T = void> T Update() {
		return ((T (*)(SwitchSlider*))(Il2CppBase() + 0x18C03E4))(this);
	}
	template <typename T = void> T SetActiveTrue() {
		return ((T (*)(SwitchSlider*))(Il2CppBase() + 0x18C0440))(this);
	}
	template <typename T = void> T SetActiveFalse() {
		return ((T (*)(SwitchSlider*))(Il2CppBase() + 0x18C04A4))(this);
	}
	template <typename T = float> T get_stepSize() {
		return ((T (*)(SwitchSlider*))(Il2CppBase() + 0x18C0504))(this);
	}
	template <typename T = bool> T get_reverseValue() {
		return ((T (*)(SwitchSlider*))(Il2CppBase() + 0x18C05BC))(this);
	}
	template <typename T = uintptr_t> T get_axis() {
		return ((T (*)(SwitchSlider*))(Il2CppBase() + 0x18C0640))(this);
	}
	template <typename T = void> T Set(float input) {
		return ((T (*)(SwitchSlider*, float))(Il2CppBase() + 0x18C06CC))(this, input);
	}
	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(SwitchSlider*, uintptr_t))(Il2CppBase() + 0x18C074C))(this, eventData);
	}
	template <typename T = void> T Navigate(uintptr_t eventData, uintptr_t sel) {
		return ((T (*)(SwitchSlider*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18C0A14))(this, eventData, sel);
	}
	template <typename T = void> T Move(uintptr_t eventData) {
		return ((T (*)(SwitchSlider*, uintptr_t))(Il2CppBase() + 0x18C090C))(this, eventData);
	}
	template <typename T = void> T iFixBaseProxy_OnMove(uintptr_t P0) {
		return ((T (*)(SwitchSlider*, uintptr_t))(Il2CppBase() + 0x18C0B44))(this, P0);
	}

};

}
