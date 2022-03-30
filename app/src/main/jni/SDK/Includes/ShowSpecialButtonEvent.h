#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowSpecialButtonEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowSpecialButtonEvent"));
	}

	template <typename T = bool> T& show() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T UseCache(bool s, uintptr_t t) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x182ED10))(0, s, t);
	}

};

}
