#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GhostHandBornAnimState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GhostHandBornAnimState"));
	}

	template <typename T = void*> T& ghostHandCache() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(GhostHandBornAnimState*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4439B78))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T iFixBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(GhostHandBornAnimState*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4439D84))(this, P0, P1, P2);
	}

};

}
