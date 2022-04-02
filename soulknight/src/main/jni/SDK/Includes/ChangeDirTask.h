#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeDirTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDirTask"));
	}

	template <typename T = float> T& target_angle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& last_angle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& old_angle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = float> T get_Duration() {
		return ((T (*)(ChangeDirTask*))(Il2CppBase() + 0x1872368))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(ChangeDirTask*, float))(Il2CppBase() + 0x1872370))(this, value);
	}
	template <typename T = void> T SetupTask(uintptr_t bullet) {
		return ((T (*)(ChangeDirTask*, uintptr_t))(Il2CppBase() + 0x1872380))(this, bullet);
	}
	template <typename T = uintptr_t> T ExecuteTask() {
		return ((T (*)(ChangeDirTask*))(Il2CppBase() + 0x1872490))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetupTask(uintptr_t P0) {
		return ((T (*)(ChangeDirTask*, uintptr_t))(Il2CppBase() + 0x1872710))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_ExecuteTask() {
		return ((T (*)(ChangeDirTask*))(Il2CppBase() + 0x1872718))(this);
	}

};

}
