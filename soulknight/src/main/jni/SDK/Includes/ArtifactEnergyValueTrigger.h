#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactEnergyValueTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactEnergyValueTrigger"));
	}

	template <typename T = uintptr_t> T& startCompareType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& startValue() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& stopCompareType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& stopValue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& percentage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xB1);
	}

	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactEnergyValueTrigger*, uintptr_t))(Il2CppBase() + 0x1CA2E3C))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactEnergyValueTrigger*))(Il2CppBase() + 0x1CA2EC8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactEnergyValueTrigger*))(Il2CppBase() + 0x1CA2F38))(this);
	}
	template <typename T = bool> T CanStart(int32_t v) {
		return ((T (*)(ArtifactEnergyValueTrigger*, int32_t))(Il2CppBase() + 0x1CA3238))(this, v);
	}
	template <typename T = bool> T CanStop(int32_t v) {
		return ((T (*)(ArtifactEnergyValueTrigger*, int32_t))(Il2CppBase() + 0x1CA32DC))(this, v);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactEnergyValueTrigger*, uintptr_t))(Il2CppBase() + 0x1CA3388))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactEnergyValueTrigger*))(Il2CppBase() + 0x1CA3390))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(ArtifactEnergyValueTrigger*))(Il2CppBase() + 0x1CA3398))(this);
	}

};

}
