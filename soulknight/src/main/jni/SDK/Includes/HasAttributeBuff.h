#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HasAttributeBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HasAttributeBuff"));
	}

	template <typename T = uintptr_t> T& attributeType() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(HasAttributeBuff*))(Il2CppBase() + 0x1A32850))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(HasAttributeBuff*))(Il2CppBase() + 0x1A32938))(this);
	}

};

}
