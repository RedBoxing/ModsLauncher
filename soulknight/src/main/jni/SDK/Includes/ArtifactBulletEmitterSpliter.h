#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletEmitterSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletEmitterSpliter"));
	}

	template <typename T = int32_t> T& splitCount() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& sizeFactor() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& emitInterval() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& splitAngleMin() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& splitAngleMax() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& unload() {
		return *(T*)((uintptr_t)this + 0x160);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9ABE0))(this);
	}
	template <typename T = uintptr_t> T _GetBulletConfig(int32_t atkSequence) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, int32_t))(Il2CppBase() + 0x1C9AD5C))(this, atkSequence);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9ADD0))(this);
	}
	template <typename T = void> T _Setup() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9AED0))(this);
	}
	template <typename T = void> T _Unload() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B034))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B0A4))(this);
	}
	template <typename T = uintptr_t> T OnAttackKeyEvent(uintptr_t specifiedAttackType, int32_t atkSequence) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, uintptr_t, int32_t))(Il2CppBase() + 0x1C9B194))(this, specifiedAttackType, atkSequence);
	}
	template <typename T = void> T _EmitBulletInAttack(int32_t atkSequence, float chargeAmount) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, int32_t, float))(Il2CppBase() + 0x1C9B210))(this, atkSequence, chargeAmount);
	}
	template <typename T = void> T _Emit(int32_t atkSequence, float chargeAmount, uintptr_t emitter, uintptr_t bulletConfig) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, int32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C9B294))(this, atkSequence, chargeAmount, emitter, bulletConfig);
	}
	template <typename T = void> T Awakeb__7_0(uintptr_t arg) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, uintptr_t))(Il2CppBase() + 0x1C9B650))(this, arg);
	}
	template <typename T = void> T Awakeb__7_1() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B654))(this);
	}
	template <typename T = void> T _Setupb__11_0(uintptr_t emitter, int32_t atkSequence, float chargeAmount) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, uintptr_t, int32_t, float))(Il2CppBase() + 0x1C9B658))(this, emitter, atkSequence, chargeAmount);
	}
	template <typename T = float> T _Setupb__11_1() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B81C))(this);
	}
	template <typename T = void> T _Setupb__11_2() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B824))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B868))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B870))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(ArtifactBulletEmitterSpliter*))(Il2CppBase() + 0x1C9B878))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackKeyEvent(uintptr_t P0, int32_t P1) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, uintptr_t, int32_t))(Il2CppBase() + 0x1C9B880))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy__EmitBulletInAttack(int32_t P0, float P1) {
		return ((T (*)(ArtifactBulletEmitterSpliter*, int32_t, float))(Il2CppBase() + 0x1C9B888))(this, P0, P1);
	}

};

}
