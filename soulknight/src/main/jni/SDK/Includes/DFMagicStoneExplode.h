#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFMagicStoneExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFMagicStoneExplode"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& explodeClip() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Explode() {
		return ((T (*)(DFMagicStoneExplode*))(Il2CppBase() + 0x4289E64))(this);
	}

};

}
