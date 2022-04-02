#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JumpShieldEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JumpShieldEffectTrigger"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& isBack() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& onBack() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& flyTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Setup(uintptr_t paladin, void* onBack) {
		return ((T (*)(JumpShieldEffectTrigger*, uintptr_t, void*))(Il2CppBase() + 0x21A5DA4))(this, paladin, onBack);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(JumpShieldEffectTrigger*))(Il2CppBase() + 0x21A5E5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(JumpShieldEffectTrigger*))(Il2CppBase() + 0x21A5EC8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(JumpShieldEffectTrigger*))(Il2CppBase() + 0x21A6554))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(JumpShieldEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x21A65F8))(this, other, isCritic, canThrough);
	}
	template <typename T = bool> T CallBack() {
		return ((T (*)(JumpShieldEffectTrigger*))(Il2CppBase() + 0x21A621C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(JumpShieldEffectTrigger*))(Il2CppBase() + 0x21A6808))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(JumpShieldEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x21A680C))(this, P0, P1, P2);
	}

};

}
