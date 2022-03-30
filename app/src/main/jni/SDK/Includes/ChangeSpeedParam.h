#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeSpeedParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeSpeedParam"));
	}

	template <typename T = uintptr_t> T& RunType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_RunType() {
		return ((T (*)(ChangeSpeedParam*))(Il2CppBase() + 0x18733C0))(this);
	}
	template <typename T = void> T set_RunType(uintptr_t value) {
		return ((T (*)(ChangeSpeedParam*, uintptr_t))(Il2CppBase() + 0x18733C8))(this, value);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(ChangeSpeedParam*))(Il2CppBase() + 0x18733D0))(this);
	}
	template <typename T = void> T set_Speed(float value) {
		return ((T (*)(ChangeSpeedParam*, float))(Il2CppBase() + 0x18733D8))(this, value);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(ChangeSpeedParam*))(Il2CppBase() + 0x18733E0))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(ChangeSpeedParam*, float))(Il2CppBase() + 0x18733E8))(this, value);
	}

};

}
