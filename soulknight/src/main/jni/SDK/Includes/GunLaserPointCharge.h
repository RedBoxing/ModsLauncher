#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunLaserPointCharge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunLaserPointCharge"));
	}

	template <typename T = float> T& maxTime() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& _chargeTime() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& clipHold() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& reloadObj() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _reloadObj() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& isCharging() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hurtBoxColliderBuffer() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& _boxHitTimer() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = uintptr_t> T get_audioSource() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227BD04))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227BD94))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunLaserPointCharge*, bool, bool))(Il2CppBase() + 0x227C224))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227C2D4))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227C5B8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227C71C))(this);
	}
	template <typename T = void> T CreateLaser(uintptr_t target, int32_t index) {
		return ((T (*)(GunLaserPointCharge*, uintptr_t, int32_t))(Il2CppBase() + 0x227C938))(this, target, index);
	}
	template <typename T = void> T CreateLaser_1(Il2CppVector3 position, int32_t index) {
		return ((T (*)(GunLaserPointCharge*, Il2CppVector3, int32_t))(Il2CppBase() + 0x227CB78))(this, position, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227CD10))(this);
	}
	template <typename T = void> T HitBoxUpdate() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227BF0C))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227D300))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunLaserPointCharge*, bool, bool))(Il2CppBase() + 0x227D3EC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227D3FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227D404))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227D40C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateLaser(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunLaserPointCharge*, uintptr_t, int32_t))(Il2CppBase() + 0x227D410))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_CreateLaser_1(Il2CppVector3 P0, int32_t P1) {
		return ((T (*)(GunLaserPointCharge*, Il2CppVector3, int32_t))(Il2CppBase() + 0x227D414))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227D418))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunLaserPointCharge*))(Il2CppBase() + 0x227D420))(this);
	}

};

}
