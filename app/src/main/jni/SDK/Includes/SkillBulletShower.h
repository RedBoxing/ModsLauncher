#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillBulletShower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillBulletShower"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onDestroy() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get__Model() {
		return ((T (*)(SkillBulletShower*))(Il2CppBase() + 0x1B9D92C))(this);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SkillBulletShower*))(Il2CppBase() + 0x1B9DA4C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(SkillBulletShower*))(Il2CppBase() + 0x1B9DD58))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillBulletShower*))(Il2CppBase() + 0x1B9E03C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SkillBulletShower*))(Il2CppBase() + 0x1B9E0AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(SkillBulletShower*))(Il2CppBase() + 0x1B9E108))(this);
	}

};

}
