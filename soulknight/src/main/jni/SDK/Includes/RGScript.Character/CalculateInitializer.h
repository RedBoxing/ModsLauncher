#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character {

class CalculateInitializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character", "CalculateInitializer"));
	}

	template <typename T = bool> static T& _hasInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2DC5C))(0);
	}

};

}
