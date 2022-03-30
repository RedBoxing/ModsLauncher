#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComFlash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComFlash"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& flashBeamPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& flashBeamBullet() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& beamLength() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& maxBeamLength() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& beamWidth() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& maxBeamWidth() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& emitInterval() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& attackTimes() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& damageAttenuation() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedHit() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Test() {
		return ((T (*)(WeaponComFlash*))(Il2CppBase() + 0x44826D0))(this);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t atkType) {
		return ((T (*)(WeaponComFlash*, uintptr_t))(Il2CppBase() + 0x44827B4))(this, atkType);
	}
	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComFlash*, float))(Il2CppBase() + 0x4482CB4))(this, power);
	}
	template <typename T = void> T _Cast(float power, uintptr_t onFinished) {
		return ((T (*)(WeaponComFlash*, float, uintptr_t))(Il2CppBase() + 0x44828E8))(this, power, onFinished);
	}
	template <typename T = void> T Emit(int32_t idx, float curBeamLength, float curBeamWidth, float power, int32_t atkTimes, uintptr_t onFinish, void* hitEnemies) {
		return ((T (*)(WeaponComFlash*, int32_t, float, float, float, int32_t, uintptr_t, void*))(Il2CppBase() + 0x4482D40))(this, idx, curBeamLength, curBeamWidth, power, atkTimes, onFinish, hitEnemies);
	}
	template <typename T = void> T OnAttackBeginb__15_0() {
		return ((T (*)(WeaponComFlash*))(Il2CppBase() + 0x4483268))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackBegin(uintptr_t P0) {
		return ((T (*)(WeaponComFlash*, uintptr_t))(Il2CppBase() + 0x448331C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Cast(float P0) {
		return ((T (*)(WeaponComFlash*, float))(Il2CppBase() + 0x4483324))(this, P0);
	}

};

}
