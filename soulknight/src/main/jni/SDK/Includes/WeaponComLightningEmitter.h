#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComLightningEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComLightningEmitter"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& chainLength() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& bulletConfig() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hitCache() {
		return *(T*)((uintptr_t)this + 0x158);
	}

	template <typename T = uintptr_t> T _GetBulletConfig(int32_t atkSequence) {
		return ((T (*)(WeaponComLightningEmitter*, int32_t))(Il2CppBase() + 0x4486750))(this, atkSequence);
	}
	template <typename T = void> T OnEmitFromByTrigger(uintptr_t arg) {
		return ((T (*)(WeaponComLightningEmitter*, uintptr_t))(Il2CppBase() + 0x44867C4))(this, arg);
	}
	template <typename T = void> T EmitFromSource(uintptr_t emitSource, uintptr_t sourceEnemy) {
		return ((T (*)(WeaponComLightningEmitter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44868E8))(this, emitSource, sourceEnemy);
	}
	template <typename T = void> T GenLightningBetween(uintptr_t t1, uintptr_t enemy, uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(WeaponComLightningEmitter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4487274))(this, t1, enemy, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnEmit(int32_t atkSeqno) {
		return ((T (*)(WeaponComLightningEmitter*, int32_t))(Il2CppBase() + 0x44878FC))(this, atkSeqno);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTargets(Il2CppVector3 center, uintptr_t sourceEnemy) {
		return ((T (*)(WeaponComLightningEmitter*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4486D58))(this, center, sourceEnemy);
	}
	template <typename T = void> T iFixBaseProxy_OnEmitFromByTrigger(uintptr_t P0) {
		return ((T (*)(WeaponComLightningEmitter*, uintptr_t))(Il2CppBase() + 0x4487A40))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnEmit(int32_t P0) {
		return ((T (*)(WeaponComLightningEmitter*, int32_t))(Il2CppBase() + 0x4487AC8))(this, P0);
	}

};

}
