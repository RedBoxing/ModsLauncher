#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateEffectTrigger"));
	}

	template <typename T = uintptr_t> T& creation() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& destroyAfterCreate() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& influencedByAllAlone() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(CreateEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x427D794))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T CreateObject() {
		return ((T (*)(CreateEffectTrigger*))(Il2CppBase() + 0x427D8CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(CreateEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x427DC8C))(this, P0, P1, P2);
	}

};

}
