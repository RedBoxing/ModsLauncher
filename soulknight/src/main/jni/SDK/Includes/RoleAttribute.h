#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleAttribute"));
	}

	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& speed_rate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& max_hp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& dynamicAddSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& deviation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& speed_change_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& speed_change_value() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& easyCriticFactor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& spriteMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnHpChanged() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _rgBaseController() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_MaxHp() {
		return ((T (*)(RoleAttribute*))(Il2CppBase() + 0x1BE9590))(this);
	}
	template <typename T = float> T get_dynamicAddSpeedFactor() {
		return ((T (*)(RoleAttribute*))(Il2CppBase() + 0x1BE9688))(this);
	}
	template <typename T = void> T set_dynamicAddSpeedFactor(float value) {
		return ((T (*)(RoleAttribute*, float))(Il2CppBase() + 0x1BE9690))(this, value);
	}
	template <typename T = int32_t> T get_energy() {
		return ((T (*)(RoleAttribute*))(Il2CppBase() + 0x1BE9698))(this);
	}
	template <typename T = void> T set_energy(int32_t value) {
		return ((T (*)(RoleAttribute*, int32_t))(Il2CppBase() + 0x1BE96F8))(this, value);
	}
	template <typename T = void> T add_OnHpChanged(uintptr_t value) {
		return ((T (*)(RoleAttribute*, uintptr_t))(Il2CppBase() + 0x1BE9768))(this, value);
	}
	template <typename T = void> T remove_OnHpChanged(uintptr_t value) {
		return ((T (*)(RoleAttribute*, uintptr_t))(Il2CppBase() + 0x1BE9854))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoleAttribute*))(Il2CppBase() + 0x1BE9940))(this);
	}
	template <typename T = void> T ChangeSpeed(Il2CppString* id, float value, float time) {
		return ((T (*)(RoleAttribute*, Il2CppString*, float, float))(Il2CppBase() + 0x1BE9A08))(this, id, value, time);
	}
	template <typename T = void> T ChangeSpeedNE(Il2CppString* id, float value, float time) {
		return ((T (*)(RoleAttribute*, Il2CppString*, float, float))(Il2CppBase() + 0x1BE9D4C))(this, id, value, time);
	}
	template <typename T = void> T SpeedBack() {
		return ((T (*)(RoleAttribute*))(Il2CppBase() + 0x1BE9EAC))(this);
	}
	template <typename T = void> T RestoreHealth(int32_t value, bool sync) {
		return ((T (*)(RoleAttribute*, int32_t, bool))(Il2CppBase() + 0x1BE9F4C))(this, value, sync);
	}
	template <typename T = void> T RestoreEnergy(int32_t value, bool sync, bool playEffect, bool fromEnergyBall) {
		return ((T (*)(RoleAttribute*, int32_t, bool, bool, bool))(Il2CppBase() + 0x1BEA1C8))(this, value, sync, playEffect, fromEnergyBall);
	}
	template <typename T = void> T HpChanged() {
		return ((T (*)(RoleAttribute*))(Il2CppBase() + 0x1BEA25C))(this);
	}

};

}
