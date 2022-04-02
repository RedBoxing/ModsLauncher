#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NativeShare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeShare"));
	}

	template <typename T = uintptr_t> static T& shareSDK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x4384098))(0);
	}
	template <typename T = void> static T ShareTexture(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4384218))(0, texture);
	}

};

}
