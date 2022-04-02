#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillEyeLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillEyeLaser"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onDestroy() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get__Model() {
		return ((T (*)(SkillEyeLaser*))(Il2CppBase() + 0x1B9EC20))(this);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SkillEyeLaser*))(Il2CppBase() + 0x1B9ED40))(this);
	}
	template <typename T = void> T OnSkillEvent(int32_t key) {
		return ((T (*)(SkillEyeLaser*, int32_t))(Il2CppBase() + 0x1B9EE14))(this, key);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillEyeLaser*))(Il2CppBase() + 0x1B9F784))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SkillEyeLaser*))(Il2CppBase() + 0x1B9F7F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillEvent(int32_t P0) {
		return ((T (*)(SkillEyeLaser*, int32_t))(Il2CppBase() + 0x1B9F850))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(SkillEyeLaser*))(Il2CppBase() + 0x1B9F854))(this);
	}

};

}
