#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectRotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectRotate"));
	}

	template <typename T = float> T& rotateSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ObjectRotate*))(Il2CppBase() + 0x1DBF4EC))(this);
	}

};

}
