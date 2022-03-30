#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaitTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaitTask"));
	}

	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(WaitTask*, float))(Il2CppBase() + 0x4364F2C))(this, value);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(WaitTask*))(Il2CppBase() + 0x4364F34))(this);
	}
	template <typename T = void> T SetupTask(uintptr_t bullet) {
		return ((T (*)(WaitTask*, uintptr_t))(Il2CppBase() + 0x4364F44))(this, bullet);
	}
	template <typename T = uintptr_t> T ExecuteTask() {
		return ((T (*)(WaitTask*))(Il2CppBase() + 0x436504C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetupTask(uintptr_t P0) {
		return ((T (*)(WaitTask*, uintptr_t))(Il2CppBase() + 0x43650D4))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_ExecuteTask() {
		return ((T (*)(WaitTask*))(Il2CppBase() + 0x43650DC))(this);
	}

};

}
