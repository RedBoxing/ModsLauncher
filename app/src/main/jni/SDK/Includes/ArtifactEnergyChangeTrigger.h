#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactEnergyChangeTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactEnergyChangeTrigger"));
	}

	template <typename T = uintptr_t> T& statisticType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& targetValue() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& fromEnergyBall() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _accumulation() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = bool> T get_isRestore() {
		return ((T (*)(ArtifactEnergyChangeTrigger*))(Il2CppBase() + 0x1CA26F0))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactEnergyChangeTrigger*, uintptr_t))(Il2CppBase() + 0x1CA2758))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactEnergyChangeTrigger*))(Il2CppBase() + 0x1CA289C))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t data) {
		return ((T (*)(ArtifactEnergyChangeTrigger*, uintptr_t))(Il2CppBase() + 0x1CA290C))(this, data);
	}
	template <typename T = void> T TestEnergyChange(int32_t value) {
		return ((T (*)(ArtifactEnergyChangeTrigger*, int32_t))(Il2CppBase() + 0x1CA2B90))(this, value);
	}
	template <typename T = void> T OnEquipb__7_0() {
		return ((T (*)(ArtifactEnergyChangeTrigger*))(Il2CppBase() + 0x1CA2D88))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactEnergyChangeTrigger*, uintptr_t))(Il2CppBase() + 0x1CA2E2C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactEnergyChangeTrigger*))(Il2CppBase() + 0x1CA2E34))(this);
	}

};

}
