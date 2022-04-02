#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IArtifactEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArtifactEffectTrigger"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& chargeAddProbability() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& canOverlap() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& onlyRefreshDuration() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = float> T& cooldown() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& _cooldown() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& _callback() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _revert_callback() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& maxEffectCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _triggered() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& effectCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& cleanup() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173DB5C))(this);
	}
	template <typename T = void> T add__callback(void* value) {
		return ((T (*)(IArtifactEffectTrigger*, void*))(Il2CppBase() + 0x173DBC0))(this, value);
	}
	template <typename T = void> T remove__callback(void* value) {
		return ((T (*)(IArtifactEffectTrigger*, void*))(Il2CppBase() + 0x173DCAC))(this, value);
	}
	template <typename T = void> T add__revert_callback(uintptr_t value) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173DD98))(this, value);
	}
	template <typename T = void> T remove__revert_callback(uintptr_t value) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173DE84))(this, value);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173DF70))(this);
	}
	template <typename T = int32_t> T get_effectCount() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173E0C8))(this);
	}
	template <typename T = void> T set_effectCount(int32_t value) {
		return ((T (*)(IArtifactEffectTrigger*, int32_t))(Il2CppBase() + 0x173E0D0))(this, value);
	}
	template <typename T = void> T SetParam(Il2CppArray<uintptr_t>* paramList) {
		return ((T (*)(IArtifactEffectTrigger*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x173E0D8))(this, paramList);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173E198))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173E208))(this);
	}
	template <typename T = void> T SetTriggerCallback(void* callback) {
		return ((T (*)(IArtifactEffectTrigger*, void*))(Il2CppBase() + 0x173E260))(this, callback);
	}
	template <typename T = void> T ListenTrigger(void* handler) {
		return ((T (*)(IArtifactEffectTrigger*, void*))(Il2CppBase() + 0x173E2D4))(this, handler);
	}
	template <typename T = void> T CancelListenTrigger(void* handler) {
		return ((T (*)(IArtifactEffectTrigger*, void*))(Il2CppBase() + 0x173E348))(this, handler);
	}
	template <typename T = void> T ListenRevert(uintptr_t handler) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173E3BC))(this, handler);
	}
	template <typename T = void> T CancelListenRevert(uintptr_t handler) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173E430))(this, handler);
	}
	template <typename T = void> T SetTriggerCallback_1(void* callback, uintptr_t revert_callback) {
		return ((T (*)(IArtifactEffectTrigger*, void*, uintptr_t))(Il2CppBase() + 0x173E4A4))(this, callback, revert_callback);
	}
	template <typename T = void> T SetRevertCallback(uintptr_t callback, float t) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t, float))(Il2CppBase() + 0x173E544))(this, callback, t);
	}
	template <typename T = void> T InvokeRevert(float t) {
		return ((T (*)(IArtifactEffectTrigger*, float))(Il2CppBase() + 0x173E6C4))(this, t);
	}
	template <typename T = int32_t> T get_TriggerProbability() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173E7AC))(this);
	}
	template <typename T = void> T OnTrigger(uintptr_t arg) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173E8B8))(this, arg);
	}
	template <typename T = void> T _InvokeCallback(uintptr_t arg) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173EB6C))(this, arg);
	}
	template <typename T = void> T OnRevert() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173EC20))(this);
	}
	template <typename T = void> T RevertAll() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173EC9C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173ED20))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173EDA0))(this);
	}
	template <typename T = void> T add_cleanup(uintptr_t value) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173EE68))(this, value);
	}
	template <typename T = void> T remove_cleanup(uintptr_t value) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173EF54))(this, value);
	}
	template <typename T = void> T SetCleanUp(uintptr_t func) {
		return ((T (*)(IArtifactEffectTrigger*, uintptr_t))(Il2CppBase() + 0x173F040))(this, func);
	}
	template <typename T = void> T DoCleanUp() {
		return ((T (*)(IArtifactEffectTrigger*))(Il2CppBase() + 0x173EDFC))(this);
	}

};

}
