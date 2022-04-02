#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoadScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadScene"));
	}

	template <typename T = Il2CppString*> T& sceneName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LoadScene*))(Il2CppBase() + 0x4268258))(this);
	}

};

}
