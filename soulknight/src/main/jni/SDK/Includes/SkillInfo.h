#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillInfo"));
	}

	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& audioClips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skillObjects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& intent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& skillType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& skinSkillCfg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& maxTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uintptr_t> T get_audioClip() {
		return ((T (*)(SkillInfo*))(Il2CppBase() + 0x18332A4))(this);
	}
	template <typename T = uintptr_t> T get_skillObject() {
		return ((T (*)(SkillInfo*))(Il2CppBase() + 0x1833330))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(SkillInfo*))(Il2CppBase() + 0x18333BC))(this);
	}
	template <typename T = bool> T get_hasMultiCount() {
		return ((T (*)(SkillInfo*))(Il2CppBase() + 0x1833438))(this);
	}

};

}
