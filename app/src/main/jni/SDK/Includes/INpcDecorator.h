#pragma once
#include "Il2Cpp/Il2Cpp.h"

class INpcDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INpcDecorator"));
	}


	template <typename T = void> T Init(uintptr_t npcObject) {
		return ((T (*)(INpcDecorator*, uintptr_t))(Il2CppBase() + 0x0))(this, npcObject);
	}

};

}
