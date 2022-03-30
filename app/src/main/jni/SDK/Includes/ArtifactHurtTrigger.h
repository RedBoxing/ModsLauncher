#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactHurtTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactHurtTrigger"));
	}

	template <typename T = bool> T& lostHP() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactHurtTrigger*, uintptr_t))(Il2CppBase() + 0x1CA4D34))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactHurtTrigger*))(Il2CppBase() + 0x1CA4EE0))(this);
	}
	template <typename T = void> T OnPlayerHurt(uintptr_t data) {
		return ((T (*)(ArtifactHurtTrigger*, uintptr_t))(Il2CppBase() + 0x1CA4F50))(this, data);
	}
	template <typename T = void> T OnPlayerHit(uintptr_t data) {
		return ((T (*)(ArtifactHurtTrigger*, uintptr_t))(Il2CppBase() + 0x1CA5180))(this, data);
	}
	template <typename T = void> T OnEquipb__1_0() {
		return ((T (*)(ArtifactHurtTrigger*))(Il2CppBase() + 0x1CA53C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactHurtTrigger*, uintptr_t))(Il2CppBase() + 0x1CA54CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactHurtTrigger*))(Il2CppBase() + 0x1CA54D4))(this);
	}

};

}
