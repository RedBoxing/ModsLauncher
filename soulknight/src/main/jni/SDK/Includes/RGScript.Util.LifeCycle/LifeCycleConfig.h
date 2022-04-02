#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class LifeCycleConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "LifeCycleConfig"));
	}

	template <typename T = bool> T& AutoInitSuccess() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& AutoLoginSuccess() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& SaveSingle() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> static T& _config() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SetConfig(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4554E5C))(0, config);
	}
	template <typename T = uintptr_t> static T get_Config() {
		return ((T (*)(void *))(Il2CppBase() + 0x4554EF0))(0);
	}
	template <typename T = uintptr_t> static T GetDefaultConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4554F9C))(0);
	}

};

}
