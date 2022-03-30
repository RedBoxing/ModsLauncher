#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeNuclear
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeNuclear"));
	}

	template <typename T = uintptr_t> T& gasObject() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeNuclear*))(Il2CppBase() + 0x44725C0))(this);
	}
	template <typename T = uintptr_t> T CreatingGas() {
		return ((T (*)(ExplodeNuclear*))(Il2CppBase() + 0x44729E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ExplodeStart() {
		return ((T (*)(ExplodeNuclear*))(Il2CppBase() + 0x4472AC4))(this);
	}

};

}
