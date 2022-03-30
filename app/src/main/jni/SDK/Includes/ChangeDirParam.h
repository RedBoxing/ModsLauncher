#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeDirParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDirParam"));
	}

	template <typename T = uintptr_t> T& RunType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_RunType() {
		return ((T (*)(ChangeDirParam*))(Il2CppBase() + 0x18722F8))(this);
	}
	template <typename T = void> T set_RunType(uintptr_t value) {
		return ((T (*)(ChangeDirParam*, uintptr_t))(Il2CppBase() + 0x1872300))(this, value);
	}
	template <typename T = float> T get_Angle() {
		return ((T (*)(ChangeDirParam*))(Il2CppBase() + 0x1872308))(this);
	}
	template <typename T = void> T set_Angle(float value) {
		return ((T (*)(ChangeDirParam*, float))(Il2CppBase() + 0x1872310))(this, value);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(ChangeDirParam*))(Il2CppBase() + 0x1872318))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(ChangeDirParam*, float))(Il2CppBase() + 0x1872320))(this, value);
	}

};

}
