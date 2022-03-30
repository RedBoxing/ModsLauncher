#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C02CustomSkillProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C02CustomSkillProcessor"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& configs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _skillProcessors() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(C02CustomSkillProcessor*))(Il2CppBase() + 0x1E01BCC))(this);
	}
	template <typename T = void> T SkillFinished(int32_t index) {
		return ((T (*)(C02CustomSkillProcessor*, int32_t))(Il2CppBase() + 0x1E01D08))(this, index);
	}
	template <typename T = void> T SkillStart(int32_t index) {
		return ((T (*)(C02CustomSkillProcessor*, int32_t))(Il2CppBase() + 0x1E01E94))(this, index);
	}

};

}
