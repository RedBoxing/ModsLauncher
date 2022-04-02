#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StopParticleTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopParticleTrigger"));
	}

	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(StopParticleTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x42A6638))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(StopParticleTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x42A66FC))(this, P0, P1, P2);
	}

};

}
