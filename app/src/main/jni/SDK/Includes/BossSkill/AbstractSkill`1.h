#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class AbstractSkill1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "AbstractSkill`1"));
	}

	template <typename T = uintptr_t> T& Model() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& afterSkillRelease() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& releaseTarget() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& _CD_Remain() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Model() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_CD() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_CD_remain() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CD_remain(float value) {
		return ((T (*)(AbstractSkill1*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_NormalWeight() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_AngryWeight() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ReleaseSkill(uintptr_t afterSkillRelease, uintptr_t releaseTarget, uintptr_t sourceObject, int32_t camp) {
		return ((T (*)(AbstractSkill1*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, afterSkillRelease, releaseTarget, sourceObject, camp);
	}
	template <typename T = void> T UpdateCooldown(float dt) {
		return ((T (*)(AbstractSkill1*, float))(Il2CppBase() + 0x0))(this, dt);
	}
	template <typename T = void> T ReleaseSkill_1() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSkillEvent(int32_t key) {
		return ((T (*)(AbstractSkill1*, int32_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T OnSkillEnd() {
		return ((T (*)(AbstractSkill1*))(Il2CppBase() + 0x0))(this);
	}

};

}
