#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class NewRealNameConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "NewRealNameConfig"));
	}

	template <typename T = uintptr_t> T& Config() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(NewRealNameConfig*))(Il2CppBase() + 0x451FA3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(NewRealNameConfig*))(Il2CppBase() + 0x451FBBC))(this);
	}

};

}
