#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OdinTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinTest"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& conditions() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& SquareCelledMatrix() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
