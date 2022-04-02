#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffStatue02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffStatue02"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& smoke_effect() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffStatue02*))(Il2CppBase() + 0x45A11F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffStatue02*))(Il2CppBase() + 0x45A139C))(this);
	}
	template <typename T = void> T UseSkill() {
		return ((T (*)(BuffStatue02*))(Il2CppBase() + 0x45A1444))(this);
	}
	template <typename T = uintptr_t> T UsingSkill(int32_t castTimes) {
		return ((T (*)(BuffStatue02*, int32_t))(Il2CppBase() + 0x45A1528))(this, castTimes);
	}
	template <typename T = void> T iFixBaseProxy_UseSkill() {
		return ((T (*)(BuffStatue02*))(Il2CppBase() + 0x45A1644))(this);
	}

};

}
