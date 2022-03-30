#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactCritTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactCritTrigger"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& needWeapon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& times() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& expire() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& triggerParamType() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _attachedEmitter() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& time_counter() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = bool> T get_hasTimes() {
		return ((T (*)(ArtifactCritTrigger*))(Il2CppBase() + 0x1CA02AC))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactCritTrigger*, uintptr_t))(Il2CppBase() + 0x1CA0314))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactCritTrigger*))(Il2CppBase() + 0x1CA06D0))(this);
	}
	template <typename T = void> T OnCrit(uintptr_t data) {
		return ((T (*)(ArtifactCritTrigger*, uintptr_t))(Il2CppBase() + 0x1CA0740))(this, data);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactCritTrigger*))(Il2CppBase() + 0x1CA0E2C))(this);
	}
	template <typename T = void> T OnEquipb__13_0() {
		return ((T (*)(ArtifactCritTrigger*))(Il2CppBase() + 0x1CA1020))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactCritTrigger*, uintptr_t))(Il2CppBase() + 0x1CA10C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactCritTrigger*))(Il2CppBase() + 0x1CA10CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(ArtifactCritTrigger*))(Il2CppBase() + 0x1CA10D4))(this);
	}

};

}
