#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FireCannonSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireCannonSkill"));
	}

	template <typename T = uintptr_t> T& _owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _skill_control() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onStart() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onEnd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _attackCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(FireCannonSkill*))(Il2CppBase() + 0x1B9AD40))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FireCannonSkill*))(Il2CppBase() + 0x1B9AF18))(this);
	}
	template <typename T = void> T OnSkillAnimEvent(int32_t eventNumber) {
		return ((T (*)(FireCannonSkill*, int32_t))(Il2CppBase() + 0x1B9AF74))(this, eventNumber);
	}
	template <typename T = void> T SkillEnd() {
		return ((T (*)(FireCannonSkill*))(Il2CppBase() + 0x1B9B624))(this);
	}

};

}
