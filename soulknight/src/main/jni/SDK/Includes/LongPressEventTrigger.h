#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LongPressEventTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongPressEventTrigger"));
	}

	template <typename T = float> T& durationThreshold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onLongPress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onPressUp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isPointerDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& longPressTriggered() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& timePressStarted() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Update() {
		return ((T (*)(LongPressEventTrigger*))(Il2CppBase() + 0x42FCE64))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(LongPressEventTrigger*, uintptr_t))(Il2CppBase() + 0x42FCF18))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(LongPressEventTrigger*, uintptr_t))(Il2CppBase() + 0x42FCF9C))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(LongPressEventTrigger*, uintptr_t))(Il2CppBase() + 0x42FD028))(this, eventData);
	}

};

}
