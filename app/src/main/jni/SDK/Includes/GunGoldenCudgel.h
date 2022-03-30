#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunGoldenCudgel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunGoldenCudgel"));
	}

	template <typename T = uintptr_t> T& audioClip2() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& bigClip() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& littleClip() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& lastMode() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& gun_point2() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& mode3Consume() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& mode3AtkMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& canChangeMode() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunGoldenCudgel*, bool))(Il2CppBase() + 0x2499BA4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x2499C60))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x2499D20))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x2499E24))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x2499E84))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunGoldenCudgel*, bool))(Il2CppBase() + 0x2499EE4))(this, isDown);
	}
	template <typename T = void> T ChangeMode() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x2499F6C))(this);
	}
	template <typename T = void> T SetMode(int32_t i) {
		return ((T (*)(GunGoldenCudgel*, int32_t))(Il2CppBase() + 0x249A39C))(this, i);
	}
	template <typename T = void> T TurnCanChangeMode() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249A4A4))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249A508))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249A578))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t proto) {
		return ((T (*)(GunGoldenCudgel*, uintptr_t))(Il2CppBase() + 0x249A5E8))(this, proto);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunGoldenCudgel*, bool, bool))(Il2CppBase() + 0x249A6E0))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249A794))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249A8D0))(this);
	}
	template <typename T = void> T AxeAttack() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249A9FC))(this);
	}
	template <typename T = void> T AxeAttack2() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249AA8C))(this);
	}
	template <typename T = void> T AttackSpear() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249ADE8))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249AEEC))(this);
	}
	template <typename T = void> T CreateBullet(bool reverse) {
		return ((T (*)(GunGoldenCudgel*, bool))(Il2CppBase() + 0x249B014))(this, reverse);
	}
	template <typename T = void> T CreateSwordBullet(bool reverse) {
		return ((T (*)(GunGoldenCudgel*, bool))(Il2CppBase() + 0x249B148))(this, reverse);
	}
	template <typename T = void> T CreateShock(int32_t i) {
		return ((T (*)(GunGoldenCudgel*, int32_t))(Il2CppBase() + 0x249B414))(this, i);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B5A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B6BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B6C4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B6CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B6D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B6DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_CopyFrom(uintptr_t P0) {
		return ((T (*)(GunGoldenCudgel*, uintptr_t))(Il2CppBase() + 0x249B6E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunGoldenCudgel*, bool, bool))(Il2CppBase() + 0x249B6EC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B6FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AxeAttack() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B704))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackSpear() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B70C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack2() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B714))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBullet(bool P0) {
		return ((T (*)(GunGoldenCudgel*, bool))(Il2CppBase() + 0x249B71C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunGoldenCudgel*))(Il2CppBase() + 0x249B728))(this);
	}

};

}
