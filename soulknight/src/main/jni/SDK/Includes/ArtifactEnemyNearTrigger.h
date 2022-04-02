#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactEnemyNearTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactEnemyNearTrigger"));
	}

	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& equiped() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cache() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& distanceType() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& numberType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& number() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactEnemyNearTrigger*, uintptr_t))(Il2CppBase() + 0x1CA2038))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactEnemyNearTrigger*))(Il2CppBase() + 0x1CA20C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactEnemyNearTrigger*))(Il2CppBase() + 0x1CA212C))(this);
	}
	template <typename T = bool> T CheckNumber(int32_t count) {
		return ((T (*)(ArtifactEnemyNearTrigger*, int32_t))(Il2CppBase() + 0x1CA25EC))(this, count);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactEnemyNearTrigger*, uintptr_t))(Il2CppBase() + 0x1CA26D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactEnemyNearTrigger*))(Il2CppBase() + 0x1CA26E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(ArtifactEnemyNearTrigger*))(Il2CppBase() + 0x1CA26E8))(this);
	}

};

}
