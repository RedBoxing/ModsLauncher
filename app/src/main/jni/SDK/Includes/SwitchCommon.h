#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchCommon"));
	}


	template <typename T = int32_t> static T ClampLoop(int32_t value, int32_t start, int32_t length) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18BF420))(0, value, start, length);
	}
	template <typename T = Il2CppString*> static T GetGameObjectPath(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18BF4C0))(0, gameObject);
	}
	template <typename T = void> static T GetParent(uintptr_t gameObject, uintptr_t path) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x18BF5E8))(0, gameObject, path);
	}
	template <typename T = void> static T Clamp(uintptr_t value, float min, float max) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x18BF7B8))(0, value, min, max);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetChildSelectables(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18BF850))(0, parent);
	}

};

}
