#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossShowUpProcess {

class BossShowUpNoPerformence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossShowUpProcess", "BossShowUpNoPerformence"));
	}

	template <typename T = uintptr_t> T& audioIntro() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audioLoop() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ShowUp() {
		return ((T (*)(BossShowUpNoPerformence*))(Il2CppBase() + 0x1B83150))(this);
	}
	template <typename T = bool> T get_CanShow() {
		return ((T (*)(BossShowUpNoPerformence*))(Il2CppBase() + 0x1B833D8))(this);
	}

};

}
