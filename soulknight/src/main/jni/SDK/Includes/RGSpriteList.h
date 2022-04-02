#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSpriteList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSpriteList"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprite_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
