#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterCreateEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterCreateEvent"));
	}

	template <typename T = uintptr_t> T& character() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
