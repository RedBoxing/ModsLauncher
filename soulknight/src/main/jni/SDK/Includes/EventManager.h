#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EventManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& eventArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x446456C))(0);
	}
	template <typename T = void> static T AddEvent(uintptr_t name, uintptr_t act) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x446460C))(0, name, act);
	}
	template <typename T = void> static T RemoveEvent(uintptr_t name, uintptr_t act) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44647E0))(0, name, act);
	}
	template <typename T = void> static T Call(uintptr_t name) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4464994))(0, name);
	}

};

}
