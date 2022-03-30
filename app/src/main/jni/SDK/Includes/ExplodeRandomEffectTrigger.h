#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeRandomEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeRandomEffectTrigger"));
	}

	template <typename T = uintptr_t> T& instantiateObject() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& angleBetween() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(ExplodeRandomEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x4472E68))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ExplodeRandomEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x4473498))(this, P0, P1, P2);
	}

};

}
