#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class EmailConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "EmailConfig"));
	}

	template <typename T = uintptr_t> T& configEmails() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T AddConfig() {
		return ((T (*)(EmailConfig*))(Il2CppBase() + 0x4462C28))(this);
	}
	template <typename T = void> T iFixBaseProxy_AddConfig() {
		return ((T (*)(EmailConfig*))(Il2CppBase() + 0x4462D40))(this);
	}

};

}
