#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class BoardCastConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "BoardCastConfig"));
	}

	template <typename T = uintptr_t> T& dynamicConfig() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(BoardCastConfig*))(Il2CppBase() + 0x4461944))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(BoardCastConfig*))(Il2CppBase() + 0x44619F0))(this);
	}

};

}
