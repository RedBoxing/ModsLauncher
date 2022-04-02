#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactAttackTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactAttackTrigger"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& timing() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& needCharge() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& chargeAmount() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& atkSequence() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& needTimes() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<float>*> T& atkTimestamp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& _time() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& timesExpire() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& subTrigger() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = bool> T get_needCountTimes() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C9632C))(this);
	}
	template <typename T = bool> T get__active() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C96394))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C96478))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactAttackTrigger*, uintptr_t))(Il2CppBase() + 0x1C96694))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C9680C))(this);
	}
	template <typename T = void> T _Execute(uintptr_t atkType) {
		return ((T (*)(ArtifactAttackTrigger*, uintptr_t))(Il2CppBase() + 0x1C969AC))(this, atkType);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C96BC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactAttackTrigger*, uintptr_t))(Il2CppBase() + 0x1C96DA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C96DA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(ArtifactAttackTrigger*))(Il2CppBase() + 0x1C96DB0))(this);
	}

};

}
