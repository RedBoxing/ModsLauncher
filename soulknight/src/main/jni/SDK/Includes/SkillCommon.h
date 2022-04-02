#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillCommon"));
	}

	template <typename T = int32_t> T& skillIdx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skillVariant() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& boss() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& skillCtrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bodyCenter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& cooldown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _cooldownRemain() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sourceObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _afterSkillRelease() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& onStart() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& onEnd() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = float> T get_CD() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20A141C))(this);
	}
	template <typename T = float> T get_CD_remain() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x209754C))(this);
	}
	template <typename T = void> T set_CD_remain(float value) {
		return ((T (*)(SkillCommon*, float))(Il2CppBase() + 0x20A147C))(this, value);
	}
	template <typename T = void> T ReleaseSkill(uintptr_t afterSkillRelease, uintptr_t releaseTarget, uintptr_t sourceObject, int32_t camp) {
		return ((T (*)(SkillCommon*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x20A14F0))(this, afterSkillRelease, releaseTarget, sourceObject, camp);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x209AD40))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x209913C))(this);
	}
	template <typename T = void> T OnEnd() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20A0578))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20A15C8))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(SkillCommon*, float))(Il2CppBase() + 0x2099200))(this, dt);
	}
	template <typename T = void> T UpdateCooldown(float dt) {
		return ((T (*)(SkillCommon*, float))(Il2CppBase() + 0x20A16C0))(this, dt);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x209BA38))(this);
	}
	template <typename T = int32_t> T get_NormalWeight() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20A1740))(this);
	}
	template <typename T = int32_t> T get_AngryWeight() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20A17A0))(this);
	}
	template <typename T = void> T SkillAnimationStart() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20A1800))(this);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(SkillCommon*))(Il2CppBase() + 0x20991A0))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(SkillCommon*, int32_t))(Il2CppBase() + 0x2098FE0))(this, param);
	}

};

}
