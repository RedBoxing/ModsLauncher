#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcWalkModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcWalkModel"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& spriteAnimation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& npcTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
