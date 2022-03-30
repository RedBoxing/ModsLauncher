#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerMadeSkinInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMadeSkinInfoData"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& AuthorName() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
