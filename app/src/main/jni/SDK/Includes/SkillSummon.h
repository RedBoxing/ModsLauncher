#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillSummon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSummon"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& useTimes() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& deadCallback() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(SkillSummon*))(Il2CppBase() + 0x209405C))(this);
	}
	template <typename T = void> T Todo() {
		return ((T (*)(SkillSummon*))(Il2CppBase() + 0x20941A0))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(SkillSummon*, float))(Il2CppBase() + 0x20945D8))(this, dt);
	}
	template <typename T = void> T SkillAnimationEvent(int32_t param) {
		return ((T (*)(SkillSummon*, int32_t))(Il2CppBase() + 0x2094654))(this, param);
	}
	template <typename T = void> T SkillAnimationEnd() {
		return ((T (*)(SkillSummon*))(Il2CppBase() + 0x20946C8))(this);
	}
	template <typename T = void> T OnStartb__4_0() {
		return ((T (*)(SkillSummon*))(Il2CppBase() + 0x209472C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(SkillSummon*))(Il2CppBase() + 0x20947EC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(SkillSummon*, float))(Il2CppBase() + 0x20947F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEvent(int32_t P0) {
		return ((T (*)(SkillSummon*, int32_t))(Il2CppBase() + 0x20947F4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SkillAnimationEnd() {
		return ((T (*)(SkillSummon*))(Il2CppBase() + 0x20947F8))(this);
	}

};

}
