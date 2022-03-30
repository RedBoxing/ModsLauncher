#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SetSpriteByRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetSpriteByRandom"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SetSpriteByRandom*))(Il2CppBase() + 0x1826450))(this);
	}

};

}
