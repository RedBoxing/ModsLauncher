#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VampireEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VampireEffectTrigger"));
	}

	template <typename T = bool> T& restoreWhenKill() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& restoreWhenCritic() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& restoreAnyway() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = int32_t> T& hpRestore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& energyRestore() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(VampireEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x435859C))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(VampireEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x4358860))(this, P0, P1, P2);
	}

};

}
