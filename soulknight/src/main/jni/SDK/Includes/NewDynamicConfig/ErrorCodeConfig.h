#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class ErrorCodeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "ErrorCodeConfig"));
	}

	template <typename T = Il2CppString*> T& csvText() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(ErrorCodeConfig*))(Il2CppBase() + 0x4462DBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(ErrorCodeConfig*))(Il2CppBase() + 0x4462E20))(this);
	}

};

}
