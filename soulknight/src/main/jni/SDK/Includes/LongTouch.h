#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LongTouch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongTouch"));
	}

	template <typename T = uintptr_t> T& mutexLock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onLongTouch() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& longTouched() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& touching() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& longTouchTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(LongTouch*, uintptr_t))(Il2CppBase() + 0x42FD12C))(this, eventData);
	}
	template <typename T = uintptr_t> T Touching() {
		return ((T (*)(LongTouch*))(Il2CppBase() + 0x42FD2BC))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(LongTouch*, uintptr_t))(Il2CppBase() + 0x42FD39C))(this, eventData);
	}
	template <typename T = void> static T SetMutex(Il2CppArray<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42FD568))(0, list);
	}

};

}
