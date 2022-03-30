#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBGuildPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBGuildPanel"));
	}

	template <typename T = uintptr_t> T& uIWindowSandbox() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SBGuildPanel*))(Il2CppBase() + 0x180A4B8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SBGuildPanel*))(Il2CppBase() + 0x180A514))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SBGuildPanel*))(Il2CppBase() + 0x180A570))(this);
	}

};

}
