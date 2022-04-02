#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LilWormDownAtkStateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LilWormDownAtkStateMachine"));
	}


	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LilWormDownAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x426198C))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LilWormDownAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261AE8))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T iFixBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LilWormDownAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261C4C))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LilWormDownAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261C88))(this, P0, P1, P2);
	}

};

}
