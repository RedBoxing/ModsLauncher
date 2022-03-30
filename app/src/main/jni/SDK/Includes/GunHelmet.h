#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHelmet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHelmet"));
	}

	template <typename T = Il2CppString*> T& positionTransformName() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& offsetInPositionTransform() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& positionTransform() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppVector3> T& addOffset() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& needRefreshPosInUpdate() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& autoRelocate() {
		return *(T*)((uintptr_t)this + 0x1D1);
	}
	template <typename T = uintptr_t> T& mainSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& doubleAttack() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& isFunnel() {
		return *(T*)((uintptr_t)this + 0x1E1);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A2460))(this);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunHelmet*, float))(Il2CppBase() + 0x24A2540))(this, fixed_angle);
	}
	template <typename T = void> T LocateAtFixedPos() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A25C8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A2E24))(this);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(GunHelmet*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x24A302C))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunHelmet*, uintptr_t, int32_t))(Il2CppBase() + 0x24A3134))(this, parent, target_layer);
	}
	template <typename T = void> T OnCharacterDead() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3208))(this);
	}
	template <typename T = void> T OnCharacterReborn() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3330))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFont, bool isPick) {
		return ((T (*)(GunHelmet*, bool, bool))(Il2CppBase() + 0x24A3458))(this, toFont, isPick);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunHelmet*, int32_t))(Il2CppBase() + 0x24A35CC))(this, target_layer);
	}
	template <typename T = void> T OnResetPosition() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A372C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3788))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A37E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3840))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A38C4))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunHelmet*, uintptr_t*))(Il2CppBase() + 0x24A3930))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A39B0))(this);
	}
	template <typename T = void> T _DoAttack(Il2CppVector3 atkPosOffset) {
		return ((T (*)(GunHelmet*, Il2CppVector3))(Il2CppBase() + 0x0))(this, atkPosOffset);
	}
	template <typename T = bool> T get_isFunnel() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3A10))(this);
	}
	template <typename T = void> T set_isFunnel(bool value) {
		return ((T (*)(GunHelmet*, bool))(Il2CppBase() + 0x24A3A18))(this, value);
	}
	template <typename T = void> T OnStartBeingUsedAsFunnel() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3A24))(this);
	}
	template <typename T = void> T OnEndBeingUsedAsFunnel() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3A98))(this);
	}
	template <typename T = float> T FunnelModeAtkRange() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Attackb__12_0() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3B74))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3CDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunHelmet*, float))(Il2CppBase() + 0x24A3CE4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetBackPosition(Il2CppVector3 P0, float P1, int32_t P2) {
		return ((T (*)(GunHelmet*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x24A3CEC))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunHelmet*, uintptr_t, int32_t))(Il2CppBase() + 0x24A3CF4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunHelmet*, bool, bool))(Il2CppBase() + 0x24A3CFC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunHelmet*, int32_t))(Il2CppBase() + 0x24A3D0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnStartBeingUsedAsFunnel() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3D14))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEndBeingUsedAsFunnel() {
		return ((T (*)(GunHelmet*))(Il2CppBase() + 0x24A3D1C))(this);
	}

};

}
