#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class ISkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "ISkill"));
	}


	template <typename T = void> T ReleaseSkill(uintptr_t afterSkillRelease, uintptr_t releaseTarget, uintptr_t sourceObject, int32_t camp) {
		return ((T (*)(ISkill*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, afterSkillRelease, releaseTarget, sourceObject, camp);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ISkill*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateCooldown(float dt) {
		return ((T (*)(ISkill*, float))(Il2CppBase() + 0x0))(this, dt);
	}
	template <typename T = float> T get_CD() {
		return ((T (*)(ISkill*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_CD_remain() {
		return ((T (*)(ISkill*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CD_remain(float value) {
		return ((T (*)(ISkill*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_NormalWeight() {
		return ((T (*)(ISkill*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_AngryWeight() {
		return ((T (*)(ISkill*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ISkill*))(Il2CppBase() + 0x0))(this);
	}

};

}
