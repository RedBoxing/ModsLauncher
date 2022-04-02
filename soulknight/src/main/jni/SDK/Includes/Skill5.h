#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill5"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _actionFinished() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& whirlBlade() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& passedTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209C5B4))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209C708))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill5*, float))(Il2CppBase() + 0x209C7B8))(this, dt);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(Skill5*, int32_t))(Il2CppBase() + 0x209C834))(this, param);
	}
	template <typename T = bool> T UpdateBlade(float dt) {
		return ((T (*)(Skill5*, float))(Il2CppBase() + 0x209D160))(this, dt);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209D98C))(this);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209DA98))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209DAFC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209DB00))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill5*, float))(Il2CppBase() + 0x209DB04))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(Skill5*, int32_t))(Il2CppBase() + 0x209DB08))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209DB0C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(Skill5*))(Il2CppBase() + 0x209DB10))(this);
	}

};

}
