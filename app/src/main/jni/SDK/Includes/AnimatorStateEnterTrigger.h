#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimatorStateEnterTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorStateEnterTrigger"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& exitListenerDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetExitListeners(uintptr_t animator) {
		return ((T (*)(AnimatorStateEnterTrigger*, uintptr_t))(Il2CppBase() + 0x1A18DEC))(this, animator);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(AnimatorStateEnterTrigger*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A18F20))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(AnimatorStateEnterTrigger*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A191B4))(this, P0, P1, P2);
	}

};

}
