#pragma once
#include "Il2Cpp/Il2Cpp.h"

class USingleton1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "USingleton`1"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = uintptr_t> static T InstDoNotAutoCreate() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}

};

}
