#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SimpleEventManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleEventManager"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& delegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T AddEventListener(void* handler) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, handler);
	}
	template <typename T = void> static T RemoveListener(void* handler) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, handler);
	}
	template <typename T = void> static T Raise(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, e);
	}

};

}
