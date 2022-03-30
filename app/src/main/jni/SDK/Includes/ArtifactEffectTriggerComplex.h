#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactEffectTriggerComplex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactEffectTriggerComplex"));
	}

	template <typename T = uintptr_t> T& _triggerArg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _has_triggered() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xA9);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactEffectTriggerComplex*))(Il2CppBase() + 0x1CA18D4))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactEffectTriggerComplex*, uintptr_t))(Il2CppBase() + 0x1CA1A94))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactEffectTriggerComplex*))(Il2CppBase() + 0x1CA1C28))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactEffectTriggerComplex*))(Il2CppBase() + 0x1CA1DA8))(this);
	}
	template <typename T = void> T Awakeb__3_0(uintptr_t arg) {
		return ((T (*)(ArtifactEffectTriggerComplex*, uintptr_t))(Il2CppBase() + 0x1CA1E44))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactEffectTriggerComplex*, uintptr_t))(Il2CppBase() + 0x1CA1E68))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactEffectTriggerComplex*))(Il2CppBase() + 0x1CA1E70))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(ArtifactEffectTriggerComplex*))(Il2CppBase() + 0x1CA1E78))(this);
	}

};

}
