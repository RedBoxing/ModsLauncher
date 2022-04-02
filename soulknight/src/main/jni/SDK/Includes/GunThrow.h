#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunThrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunThrow"));
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
	template <typename T = float> T& holdRotate() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& reserveCount() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& defaultLayer() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& weapon_container() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& visible_count() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& dropByToaistHand() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& preparingTime() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& inBack() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x21833F4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2183454))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2183530))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x21835A8))(this);
	}
	template <typename T = void> T ResetSubWeapon() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2183854))(this);
	}
	template <typename T = void> T ResetDir() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x21843C8))(this);
	}
	template <typename T = void> T ResetConsume() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218419C))(this);
	}
	template <typename T = Il2CppVector3> T GetWeaponAngle(int32_t index) {
		return ((T (*)(GunThrow*, int32_t))(Il2CppBase() + 0x2183F1C))(this, index);
	}
	template <typename T = Il2CppVector3> T GetShootAngle(int32_t index) {
		return ((T (*)(GunThrow*, int32_t))(Il2CppBase() + 0x21844E0))(this, index);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2183608))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218482C))(this);
	}
	template <typename T = void> T OnStartBeingUsedAsFunnel() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218488C))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunThrow*, int32_t))(Il2CppBase() + 0x21848F0))(this, target_layer);
	}
	template <typename T = void> T OnSubWeaponReady(int32_t index, uintptr_t subWeapon) {
		return ((T (*)(GunThrow*, int32_t, uintptr_t))(Il2CppBase() + 0x2184A78))(this, index, subWeapon);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2184AF0))(this);
	}
	template <typename T = uintptr_t> T Throwing() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2184778))(this);
	}
	template <typename T = void> T ThrowWeapon(uintptr_t go) {
		return ((T (*)(GunThrow*, uintptr_t))(Il2CppBase() + 0x2184EC4))(this, go);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(GunThrow*, bool, bool))(Il2CppBase() + 0x218536C))(this, toFront, isPick);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2185580))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x21855F0))(this);
	}
	template <typename T = void> T RotateSubWeapon(uintptr_t animator, bool isRotate) {
		return ((T (*)(GunThrow*, uintptr_t, bool))(Il2CppBase() + 0x2184D98))(this, animator, isRotate);
	}
	template <typename T = void> T StartRotateSubWeapons() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2184090))(this);
	}
	template <typename T = void> T StopRotateSubWeapons() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2185664))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2185770))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2185814))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218581C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2185824))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStartBeingUsedAsFunnel() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218582C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunThrow*, int32_t))(Il2CppBase() + 0x2185834))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunThrow*, bool, bool))(Il2CppBase() + 0x218583C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218584C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x2185854))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(GunThrow*))(Il2CppBase() + 0x218585C))(this);
	}

};

}
