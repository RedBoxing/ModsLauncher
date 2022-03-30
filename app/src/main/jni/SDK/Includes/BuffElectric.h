#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffElectric
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffElectric"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BuffElectric*))(Il2CppBase() + 0x4597CB8))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffElectric*, uintptr_t))(Il2CppBase() + 0x4598144))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffElectric*))(Il2CppBase() + 0x45981B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffElectric*))(Il2CppBase() + 0x459821C))(this);
	}

};

}
