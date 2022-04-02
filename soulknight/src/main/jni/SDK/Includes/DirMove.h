#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DirMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DirMove"));
	}

	template <typename T = Il2CppVector3> T& dir() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DirMove*))(Il2CppBase() + 0x42ED7B4))(this);
	}

};

}
