#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffStealth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffStealth"));
	}

	template <typename T = uintptr_t> T& buff_color() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& onBuffDestroy() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T BuffSetting(uintptr_t controller, bool destroyWhenAct) {
		return ((T (*)(BuffStealth*, uintptr_t, bool))(Il2CppBase() + 0x45A3224))(this, controller, destroyWhenAct);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BuffStealth*))(Il2CppBase() + 0x45A351C))(this);
	}
	template <typename T = void> T OnAttack() {
		return ((T (*)(BuffStealth*))(Il2CppBase() + 0x45A37DC))(this);
	}
	template <typename T = void> T OnSkill() {
		return ((T (*)(BuffStealth*))(Il2CppBase() + 0x45A38D8))(this);
	}
	template <typename T = void> T OnMountAttack() {
		return ((T (*)(BuffStealth*))(Il2CppBase() + 0x45A3994))(this);
	}
	template <typename T = void> T OnSpecial() {
		return ((T (*)(BuffStealth*))(Il2CppBase() + 0x45A3A50))(this);
	}

};

}
