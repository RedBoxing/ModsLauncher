#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill8"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill8*))(Il2CppBase() + 0x20A0F70))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(Skill8*, int32_t))(Il2CppBase() + 0x20A1030))(this, param);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill8*, float))(Il2CppBase() + 0x20A131C))(this, dt);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(Skill8*))(Il2CppBase() + 0x20A1398))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill8*))(Il2CppBase() + 0x20A13FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(Skill8*, int32_t))(Il2CppBase() + 0x20A1400))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill8*, float))(Il2CppBase() + 0x20A1404))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(Skill8*))(Il2CppBase() + 0x20A1408))(this);
	}

};

}
