#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteSetting"));
	}

	template <typename T = Il2CppString*> T& language() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
