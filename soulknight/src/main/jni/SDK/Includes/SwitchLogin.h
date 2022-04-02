#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchLogin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchLogin"));
	}

	template <typename T = Il2CppString*> static T& mountName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwitchLogin*))(Il2CppBase() + 0x18C0188))(this);
	}
	template <typename T = void> T Mount() {
		return ((T (*)(SwitchLogin*))(Il2CppBase() + 0x18C01E8))(this);
	}
	template <typename T = void> static T Unmount() {
		return ((T (*)(void *))(Il2CppBase() + 0x18C0244))(0);
	}

};

}
