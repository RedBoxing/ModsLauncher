#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill1"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _actionEnd() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill1*))(Il2CppBase() + 0x2098880))(this);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(Skill1*, int32_t))(Il2CppBase() + 0x2098940))(this, param);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(Skill1*))(Il2CppBase() + 0x2099050))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill1*, float))(Il2CppBase() + 0x20990B4))(this, dt);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill1*))(Il2CppBase() + 0x2099138))(this);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(Skill1*, int32_t))(Il2CppBase() + 0x2099198))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(Skill1*))(Il2CppBase() + 0x209919C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill1*, float))(Il2CppBase() + 0x20991FC))(this, P0);
	}

};

}
