#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactChargeTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactChargeTrigger"));
	}

	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& equiped() {
		return *(T*)((uintptr_t)this + 0xA1);
	}

	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactChargeTrigger*, uintptr_t))(Il2CppBase() + 0x1C9BD70))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactChargeTrigger*))(Il2CppBase() + 0x1C9BDF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactChargeTrigger*))(Il2CppBase() + 0x1C9BE64))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactChargeTrigger*, uintptr_t))(Il2CppBase() + 0x1C9C008))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactChargeTrigger*))(Il2CppBase() + 0x1C9C010))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(ArtifactChargeTrigger*))(Il2CppBase() + 0x1C9C018))(this);
	}

};

}
