#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LightningRodExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningRodExtra"));
	}

	template <typename T = int32_t> T& maxBulletCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& explodeDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& attackRetriggerTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& explodePrepareTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& explodeEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& initSaturator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& targetSaturator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& endSaturator() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& explodeIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& thunderEffectIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& validRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& lightningUpdateBuff() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& lightningExtraSize() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& lightningExtraDamage() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _throwSword() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rodEffectTriggers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _explodingModels() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& MaterialSaturatorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lightningHitCache() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LightningRodExtra*))(Il2CppBase() + 0x425ED18))(this);
	}
	template <typename T = void> T OnCreateThrowBullet(uintptr_t obj) {
		return ((T (*)(LightningRodExtra*, uintptr_t))(Il2CppBase() + 0x425EE0C))(this, obj);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LightningRodExtra*))(Il2CppBase() + 0x425F01C))(this);
	}
	template <typename T = void> T RangeCheck() {
		return ((T (*)(LightningRodExtra*))(Il2CppBase() + 0x425F08C))(this);
	}
	template <typename T = void> T ExplodeCheck() {
		return ((T (*)(LightningRodExtra*))(Il2CppBase() + 0x425F334))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LightningRodExtra*))(Il2CppBase() + 0x425FA6C))(this);
	}
	template <typename T = void> T ExplodingUpdate() {
		return ((T (*)(LightningRodExtra*))(Il2CppBase() + 0x425F694))(this);
	}
	template <typename T = void> T ExplodingEnd(uintptr_t model) {
		return ((T (*)(LightningRodExtra*, uintptr_t))(Il2CppBase() + 0x4260A3C))(this, model);
	}
	template <typename T = void> T ExplodingEndUpdate(uintptr_t model, float progress) {
		return ((T (*)(LightningRodExtra*, uintptr_t, float))(Il2CppBase() + 0x426084C))(this, model, progress);
	}
	template <typename T = void> T Exploding(uintptr_t model) {
		return ((T (*)(LightningRodExtra*, uintptr_t))(Il2CppBase() + 0x4260108))(this, model);
	}
	template <typename T = void> T LightningHitEnemy(Il2CppVector3 fromPosition, Il2CppVector3 targetPosition) {
		return ((T (*)(LightningRodExtra*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4260F6C))(this, fromPosition, targetPosition);
	}
	template <typename T = void> T ReleaseExplodeEnergy(Il2CppVector3 position) {
		return ((T (*)(LightningRodExtra*, Il2CppVector3))(Il2CppBase() + 0x4260B1C))(this, position);
	}
	template <typename T = void> T ExplodingPrepareUpdate(uintptr_t model, float progress) {
		return ((T (*)(LightningRodExtra*, uintptr_t, float))(Il2CppBase() + 0x425FF1C))(this, model, progress);
	}

};

}
