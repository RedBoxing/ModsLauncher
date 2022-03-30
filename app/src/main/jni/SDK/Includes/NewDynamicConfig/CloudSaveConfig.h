#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class CloudSaveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "CloudSaveConfig"));
	}

	template <typename T = uintptr_t> T& emailUrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(CloudSaveConfig*))(Il2CppBase() + 0x4461A6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(CloudSaveConfig*))(Il2CppBase() + 0x4461B18))(this);
	}

};

}
