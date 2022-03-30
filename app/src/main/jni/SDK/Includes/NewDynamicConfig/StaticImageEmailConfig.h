#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class StaticImageEmailConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "StaticImageEmailConfig"));
	}

	template <typename T = uintptr_t> T& configEmails() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T AddConfig() {
		return ((T (*)(StaticImageEmailConfig*))(Il2CppBase() + 0x4520DC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AddConfig() {
		return ((T (*)(StaticImageEmailConfig*))(Il2CppBase() + 0x4520EE0))(this);
	}

};

}
