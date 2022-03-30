#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffStatue04
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffStatue04"));
	}

	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffStatue04*))(Il2CppBase() + 0x45A2744))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffStatue04*))(Il2CppBase() + 0x45A28D8))(this);
	}
	template <typename T = void> T UseSkill() {
		return ((T (*)(BuffStatue04*))(Il2CppBase() + 0x45A2980))(this);
	}
	template <typename T = uintptr_t> T UsingSkill(int32_t castTimes) {
		return ((T (*)(BuffStatue04*, int32_t))(Il2CppBase() + 0x45A2A64))(this, castTimes);
	}
	template <typename T = void> T iFixBaseProxy_UseSkill() {
		return ((T (*)(BuffStatue04*))(Il2CppBase() + 0x45A2B80))(this);
	}

};

}
