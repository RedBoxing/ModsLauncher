#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill2"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _actionEnd() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill2*))(Il2CppBase() + 0x2099294))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(Skill2*, int32_t))(Il2CppBase() + 0x2099354))(this, param);
	}
	template <typename T = void> T CreateBullet(float angle, Il2CppVector3 pos, int32_t i) {
		return ((T (*)(Skill2*, float, Il2CppVector3, int32_t))(Il2CppBase() + 0x2099910))(this, angle, pos, i);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(Skill2*))(Il2CppBase() + 0x2099C20))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill2*, float))(Il2CppBase() + 0x2099C84))(this, dt);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill2*))(Il2CppBase() + 0x2099D00))(this);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(Skill2*, int32_t))(Il2CppBase() + 0x2099D04))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(Skill2*))(Il2CppBase() + 0x2099D08))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill2*, float))(Il2CppBase() + 0x2099D0C))(this, P0);
	}

};

}
