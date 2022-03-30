#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C10Skill1AnimBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C10Skill1AnimBehaviour"));
	}

	template <typename T = int32_t> T& comboIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& controllerCache() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(C10Skill1AnimBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F029FC))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(C10Skill1AnimBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F02B88))(this, P0, P1, P2);
	}

};

}
