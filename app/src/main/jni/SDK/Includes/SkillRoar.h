#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillRoar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillRoar"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get__Model() {
		return ((T (*)(SkillRoar*))(Il2CppBase() + 0x208B8A4))(this);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SkillRoar*))(Il2CppBase() + 0x208BA24))(this);
	}
	template <typename T = void> T OnSkillEvent(int32_t key) {
		return ((T (*)(SkillRoar*, int32_t))(Il2CppBase() + 0x208BB7C))(this, key);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SkillRoar*))(Il2CppBase() + 0x208BF38))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillEvent(int32_t P0) {
		return ((T (*)(SkillRoar*, int32_t))(Il2CppBase() + 0x208BF94))(this, P0);
	}

};

}
