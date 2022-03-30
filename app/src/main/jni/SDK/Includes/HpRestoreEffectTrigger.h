#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HpRestoreEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HpRestoreEffectTrigger"));
	}

	template <typename T = void*> T& swordCache() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& restoreAmount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& hasRestoreHp() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = uintptr_t> T get_carrier() {
		return ((T (*)(HpRestoreEffectTrigger*))(Il2CppBase() + 0x4206E34))(this);
	}
	template <typename T = uintptr_t> T get_offensive() {
		return ((T (*)(HpRestoreEffectTrigger*))(Il2CppBase() + 0x4206F58))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(HpRestoreEffectTrigger*))(Il2CppBase() + 0x420707C))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(HpRestoreEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x42070DC))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T RestoreHp() {
		return ((T (*)(HpRestoreEffectTrigger*))(Il2CppBase() + 0x4207208))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(HpRestoreEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x420747C))(this, P0, P1, P2);
	}

};

}
