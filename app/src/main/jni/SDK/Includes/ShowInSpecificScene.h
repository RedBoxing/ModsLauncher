#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowInSpecificScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowInSpecificScene"));
	}

	template <typename T = Il2CppString*> T& targetScene() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ShowInSpecificScene*))(Il2CppBase() + 0x182E680))(this);
	}

};

}
