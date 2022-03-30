#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GhostFog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GhostFog"));
	}

	template <typename T = uintptr_t> T& phantom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& smoke() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(GhostFog*, uintptr_t))(Il2CppBase() + 0x44397C4))(this, collision);
	}

};

}
