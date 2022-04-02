#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiHand"));
	}

	template <typename T = int32_t> T& max_angle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& allShoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& playAni() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& needLock() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& continuous() {
		return *(T*)((uintptr_t)this + 0x43);
	}
	template <typename T = bool> T& autoUse() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& autoSwitch() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = float> T& weaponSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weapons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& shootIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ani() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& spriteRenderers() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& stateListenerCount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& attackStartCount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& attackFinishedCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& onWeaponAttackStart() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& onWeaponAttackFinished() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsAttacking() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _consume() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T add_onWeaponAttackStart(uintptr_t value) {
		return ((T (*)(MultiHand*, uintptr_t))(Il2CppBase() + 0x437060C))(this, value);
	}
	template <typename T = void> T remove_onWeaponAttackStart(uintptr_t value) {
		return ((T (*)(MultiHand*, uintptr_t))(Il2CppBase() + 0x43706F8))(this, value);
	}
	template <typename T = void> T add_onWeaponAttackFinished(uintptr_t value) {
		return ((T (*)(MultiHand*, uintptr_t))(Il2CppBase() + 0x43707E4))(this, value);
	}
	template <typename T = void> T remove_onWeaponAttackFinished(uintptr_t value) {
		return ((T (*)(MultiHand*, uintptr_t))(Il2CppBase() + 0x43708D0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x43709BC))(this);
	}
	template <typename T = void> T SetAttack(bool isAttack) {
		return ((T (*)(MultiHand*, bool))(Il2CppBase() + 0x4370DBC))(this, isAttack);
	}
	template <typename T = bool> T get_IsAttacking() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371114))(this);
	}
	template <typename T = void> T set_IsAttacking(bool value) {
		return ((T (*)(MultiHand*, bool))(Il2CppBase() + 0x4371108))(this, value);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x437111C))(this);
	}
	template <typename T = void> T SetAngle(float angle) {
		return ((T (*)(MultiHand*, float))(Il2CppBase() + 0x4371380))(this, angle);
	}
	template <typename T = void> T SetController(uintptr_t driver) {
		return ((T (*)(MultiHand*, uintptr_t))(Il2CppBase() + 0x43714DC))(this, driver);
	}
	template <typename T = int32_t> T GetConsume() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x43715D8))(this);
	}
	template <typename T = void> T SetWeaponFront() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371734))(this);
	}
	template <typename T = void> T SetWeaponBack() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x437182C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371920))(this);
	}
	template <typename T = void> T InActivate() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x437197C))(this);
	}
	template <typename T = bool> T CheckEnergyEnough() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4370F98))(this);
	}
	template <typename T = void> T OnEnergyRunout() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x43719D8))(this);
	}
	template <typename T = void> T SetSpriteRenderer(bool isEnabled) {
		return ((T (*)(MultiHand*, bool))(Il2CppBase() + 0x4371AC0))(this, isEnabled);
	}
	template <typename T = void> T OnWeaponsAttackStart() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371BDC))(this);
	}
	template <typename T = void> T OnWeaponAttackFinished() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371C68))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371D78))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnergyRunout() {
		return ((T (*)(MultiHand*))(Il2CppBase() + 0x4371D80))(this);
	}

};

}
