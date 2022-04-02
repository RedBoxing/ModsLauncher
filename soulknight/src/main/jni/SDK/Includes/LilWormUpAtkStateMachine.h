#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LilWormUpAtkStateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LilWormUpAtkStateMachine"));
	}


	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LilWormUpAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261CC4))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LilWormUpAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261E20))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T iFixBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LilWormUpAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261F84))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LilWormUpAtkStateMachine*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4261FC0))(this, P0, P1, P2);
	}

};

}
