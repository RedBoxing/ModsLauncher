#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HierachyReorderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HierachyReorderer"));
	}

	template <typename T = bool> T& byX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& reverse() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppString*> T& baseName() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
