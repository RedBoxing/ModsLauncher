#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Singleton1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Singleton`1"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& _applicationIsQuitting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(Singleton1*))(Il2CppBase() + 0x0))(this);
	}

};

}
