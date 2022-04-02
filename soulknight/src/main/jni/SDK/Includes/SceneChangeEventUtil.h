#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SceneChangeEventUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneChangeEventUtil"));
	}

	template <typename T = uintptr_t> T& onRaise() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T add_onRaise(uintptr_t value) {
		return ((T (*)(SceneChangeEventUtil*, uintptr_t))(Il2CppBase() + 0x1817C78))(this, value);
	}
	template <typename T = void> T remove_onRaise(uintptr_t value) {
		return ((T (*)(SceneChangeEventUtil*, uintptr_t))(Il2CppBase() + 0x1817D64))(this, value);
	}
	template <typename T = void> static T AddCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1817E50))(0, callback);
	}
	template <typename T = void> static T RemoveCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1817FC4))(0, callback);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SceneChangeEventUtil*))(Il2CppBase() + 0x18180C4))(this);
	}

};

}
