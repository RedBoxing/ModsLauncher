#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill6"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _actionFinished() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _updateTargetDir() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = Il2CppVector3> T& _emitDir() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& swordObj() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& passedTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209DB30))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209E094))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill6*, float))(Il2CppBase() + 0x209E144))(this, dt);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(Skill6*, int32_t))(Il2CppBase() + 0x209E1C0))(this, param);
	}
	template <typename T = bool> T UpdateBlade(float dt) {
		return ((T (*)(Skill6*, float))(Il2CppBase() + 0x209E950))(this, dt);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209EF04))(this);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209F010))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209F074))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209F078))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill6*, float))(Il2CppBase() + 0x209F07C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(Skill6*, int32_t))(Il2CppBase() + 0x209F080))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209F084))(this);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(Skill6*))(Il2CppBase() + 0x209F088))(this);
	}

};

}
