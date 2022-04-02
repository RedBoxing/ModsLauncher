#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class LongTouch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "LongTouch"));
	}

	template <typename T = float> T& touchSeconds() {
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

	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(LongTouch*, uintptr_t))(Il2CppBase() + 0x43EA118))(this, eventData);
	}
	template <typename T = uintptr_t> T Touching() {
		return ((T (*)(LongTouch*))(Il2CppBase() + 0x43EA1B8))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(LongTouch*, uintptr_t))(Il2CppBase() + 0x43EA298))(this, eventData);
	}

};

}
