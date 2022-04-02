#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyOnlyTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyOnlyTrigger"));
	}


	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(EnemyOnlyTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x1FEE3B8))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(EnemyOnlyTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x1FEE554))(this, P0, P1, P2);
	}

};

}
