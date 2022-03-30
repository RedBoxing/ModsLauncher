#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunThrowThreeBrokeSward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunThrowThreeBrokeSward"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& max_consume() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& prepare_time() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& hasPosOffset() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& max_angle() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& brokeSwards() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& defaultLayer() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& weapon_container() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& visible_count() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& preparingTime() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1D800))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1D860))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1D924))(this);
	}
	template <typename T = void> T ResetSubWeapon() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1D990))(this);
	}
	template <typename T = void> T ResetDir() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1E3EC))(this);
	}
	template <typename T = void> T ResetConsume() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1E140))(this);
	}
	template <typename T = Il2CppVector3> T GetWeaponAngle(int32_t index) {
		return ((T (*)(GunThrowThreeBrokeSward*, int32_t))(Il2CppBase() + 0x1A1DFCC))(this, index);
	}
	template <typename T = Il2CppVector3> T GetShootAngle(int32_t index) {
		return ((T (*)(GunThrowThreeBrokeSward*, int32_t))(Il2CppBase() + 0x1A1E504))(this, index);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1E79C))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1E9B0))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunThrowThreeBrokeSward*, int32_t))(Il2CppBase() + 0x1A1EA10))(this, target_layer);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1EB8C))(this);
	}
	template <typename T = uintptr_t> T Throwing() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1E8FC))(this);
	}
	template <typename T = void> T ThrowWeapon(uintptr_t go) {
		return ((T (*)(GunThrowThreeBrokeSward*, uintptr_t))(Il2CppBase() + 0x1A1ED80))(this, go);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(GunThrowThreeBrokeSward*, bool, bool))(Il2CppBase() + 0x1A1F1B8))(this, toFront, isPick);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1F3CC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1F464))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1F46C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1F474))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunThrowThreeBrokeSward*, int32_t))(Il2CppBase() + 0x1A1F47C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunThrowThreeBrokeSward*, bool, bool))(Il2CppBase() + 0x1A1F484))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(GunThrowThreeBrokeSward*))(Il2CppBase() + 0x1A1F494))(this);
	}

};

}
