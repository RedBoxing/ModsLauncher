#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeStartEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeStartEvent"));
	}

	template <typename T = Il2CppVector3> T& explodePosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isSmallExplode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
