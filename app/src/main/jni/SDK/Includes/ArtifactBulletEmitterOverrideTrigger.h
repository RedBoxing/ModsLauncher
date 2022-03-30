#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletEmitterOverrideTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletEmitterOverrideTrigger"));
	}

	template <typename T = uintptr_t> T& unload() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& damageFator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& sizeFactor() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& specializedParamList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T OnEquip(uintptr_t w) {
		return ((T (*)(ArtifactBulletEmitterOverrideTrigger*, uintptr_t))(Il2CppBase() + 0x1C9A698))(this, w);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactBulletEmitterOverrideTrigger*))(Il2CppBase() + 0x1C9A7E4))(this);
	}
	template <typename T = void> T OnEquipb__5_0(uintptr_t emitter, int32_t atkSequence, float chargeAmount) {
		return ((T (*)(ArtifactBulletEmitterOverrideTrigger*, uintptr_t, int32_t, float))(Il2CppBase() + 0x1C9A8DC))(this, emitter, atkSequence, chargeAmount);
	}
	template <typename T = void> T OnEquipb__5_1() {
		return ((T (*)(ArtifactBulletEmitterOverrideTrigger*))(Il2CppBase() + 0x1C9ABA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactBulletEmitterOverrideTrigger*, uintptr_t))(Il2CppBase() + 0x1C9ABD0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactBulletEmitterOverrideTrigger*))(Il2CppBase() + 0x1C9ABD8))(this);
	}

};

}
