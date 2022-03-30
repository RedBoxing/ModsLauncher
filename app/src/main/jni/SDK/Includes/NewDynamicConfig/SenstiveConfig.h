#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class SenstiveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "SenstiveConfig"));
	}

	template <typename T = bool> T& IsLockSandbox() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& LockReason() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsShowAgeTips() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& ShowAgeReason() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T FixDefaultConfig() {
		return ((T (*)(SenstiveConfig*))(Il2CppBase() + 0x4520C54))(this);
	}
	template <typename T = uintptr_t> static T get_Config() {
		return ((T (*)(void *))(Il2CppBase() + 0x4520CB8))(0);
	}

};

}
