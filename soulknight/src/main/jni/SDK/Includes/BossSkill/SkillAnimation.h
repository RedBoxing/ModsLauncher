#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class SkillAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "SkillAnimation"));
	}

	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AnimTriggerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Anim() {
		return ((T (*)(SkillAnimation*))(Il2CppBase() + 0x20A185C))(this);
	}
	template <typename T = int32_t> T get_AnimTriggerId() {
		return ((T (*)(SkillAnimation*))(Il2CppBase() + 0x20A1864))(this);
	}
	template <typename T = void> T SkillStart() {
		return ((T (*)(SkillAnimation*))(Il2CppBase() + 0x20A18B4))(this);
	}

};

}
