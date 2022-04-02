#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill3"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _actionEnd() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x2099D34))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill3*, float))(Il2CppBase() + 0x2099DF4))(this, dt);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x2099F88))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(Skill3*, int32_t))(Il2CppBase() + 0x209A29C))(this, param);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x209ACD0))(this);
	}
	template <typename T = void> T SetTargetPosition() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x209A974))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x209AD34))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill3*, float))(Il2CppBase() + 0x209AD38))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x209AD3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(Skill3*, int32_t))(Il2CppBase() + 0x209ADA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(Skill3*))(Il2CppBase() + 0x209ADA4))(this);
	}

};

}
