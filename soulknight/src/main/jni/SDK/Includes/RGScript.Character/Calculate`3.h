#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character {

class Calculate3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character", "Calculate`3"));
	}

	template <typename T = void*> static T& Mul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> static T get_Mul() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_Mul(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, value);
	}

};

}
