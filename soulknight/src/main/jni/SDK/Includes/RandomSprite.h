#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomSprite"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RandomSprite*))(Il2CppBase() + 0x44DBDC0))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RandomSprite*))(Il2CppBase() + 0x44DBE20))(this);
	}

};

}
