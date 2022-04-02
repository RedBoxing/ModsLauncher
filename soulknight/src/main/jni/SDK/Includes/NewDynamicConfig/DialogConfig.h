#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class DialogConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "DialogConfig"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& Channe2UpdateData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> static T& url() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Config() {
		return ((T (*)(void *))(Il2CppBase() + 0x4461B94))(0);
	}
	template <typename T = void> T ForceConfig() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4461CEC))(this);
	}
	template <typename T = void> T ShowDialog() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4461D58))(this);
	}
	template <typename T = void*> static T FetchConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4461E6C))(0);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4462000))(this);
	}

};

}
