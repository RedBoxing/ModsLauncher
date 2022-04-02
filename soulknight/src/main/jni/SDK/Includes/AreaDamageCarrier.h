#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AreaDamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AreaDamageCarrier"));
	}

	template <typename T = float> T& startDelay() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& damageInterval() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& checkTargetInterval() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& passedTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& hitEfx() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& hitAudio() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& showAudio() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& soundContinuous() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& soundContinuousPlayer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetLayerMask() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& latestDamageTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = float> T get_passedTime() {
		return ((T (*)(AreaDamageCarrier*))(Il2CppBase() + 0x1A19768))(this);
	}
	template <typename T = void> T set_passedTime(float value) {
		return ((T (*)(AreaDamageCarrier*, float))(Il2CppBase() + 0x1A19770))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AreaDamageCarrier*))(Il2CppBase() + 0x1A19778))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AreaDamageCarrier*))(Il2CppBase() + 0x1A19930))(this);
	}
	template <typename T = void> T StartDamage() {
		return ((T (*)(AreaDamageCarrier*))(Il2CppBase() + 0x1A19A40))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bInfo, uintptr_t dInfo) {
		return ((T (*)(AreaDamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A19AB0))(this, bInfo, dInfo);
	}
	template <typename T = bool> T OnDealDamage(uintptr_t target, Il2CppVector3 hitPosition) {
		return ((T (*)(AreaDamageCarrier*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1A19E38))(this, target, hitPosition);
	}
	template <typename T = void> T DealDamage() {
		return ((T (*)(AreaDamageCarrier*))(Il2CppBase() + 0x1A1A4C0))(this);
	}
	template <typename T = void> T OnDealDamageOver(bool hasTargetHit) {
		return ((T (*)(AreaDamageCarrier*, bool))(Il2CppBase() + 0x1A1A51C))(this, hasTargetHit);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AreaDamageCarrier*))(Il2CppBase() + 0x1A1A6C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(AreaDamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A1A7C4))(this, P0, P1);
	}

};

}
