#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeEffectTrigger"));
	}

	template <typename T = uintptr_t> T& creation() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& useParentInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& destroyAfterCreate() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& extraDamage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& damageInfo() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& exploded() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = void*> T& OnCreateExplode() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T add_OnCreateExplode(void* value) {
		return ((T (*)(ExplodeEffectTrigger*, void*))(Il2CppBase() + 0x4467F10))(this, value);
	}
	template <typename T = void> T remove_OnCreateExplode(void* value) {
		return ((T (*)(ExplodeEffectTrigger*, void*))(Il2CppBase() + 0x4468000))(this, value);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(ExplodeEffectTrigger*))(Il2CppBase() + 0x44680F0))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeEffectTrigger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4468154))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(ExplodeEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x4468258))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T TryExplode(bool isCritic) {
		return ((T (*)(ExplodeEffectTrigger*, bool))(Il2CppBase() + 0x4468324))(this, isCritic);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeEffectTrigger*))(Il2CppBase() + 0x44683D0))(this);
	}
	template <typename T = void> T OnBulletDestroy() {
		return ((T (*)(ExplodeEffectTrigger*))(Il2CppBase() + 0x4468824))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ExplodeEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x44688A8))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnBulletDestroy() {
		return ((T (*)(ExplodeEffectTrigger*))(Il2CppBase() + 0x44688B8))(this);
	}

};

}
