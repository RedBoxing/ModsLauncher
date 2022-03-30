#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActivation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActivation"));
	}

	template <typename T = bool> T& reversed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objects() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ActiveObjects(bool isActive) {
		return ((T (*)(ObjectActivation*, bool))(Il2CppBase() + 0x1D4840C))(this, isActive);
	}

};

}
