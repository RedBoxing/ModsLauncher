#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillHandHammer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillHandHammer"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& dropCrystalSequence() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& posList() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get__Model() {
		return ((T (*)(SkillHandHammer*))(Il2CppBase() + 0x208A800))(this);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SkillHandHammer*))(Il2CppBase() + 0x208A980))(this);
	}
	template <typename T = void> T OnSkillEvent(int32_t key) {
		return ((T (*)(SkillHandHammer*, int32_t))(Il2CppBase() + 0x208AA5C))(this, key);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillHandHammer*))(Il2CppBase() + 0x208B71C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SkillHandHammer*))(Il2CppBase() + 0x208B794))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSkillEvent(int32_t P0) {
		return ((T (*)(SkillHandHammer*, int32_t))(Il2CppBase() + 0x208B7F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(SkillHandHammer*))(Il2CppBase() + 0x208B7F4))(this);
	}

};

}
