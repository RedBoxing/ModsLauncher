#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeMoveDir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeMoveDir"));
	}

	template <typename T = Il2CppVector3> T& lastPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ChangeMoveDir*))(Il2CppBase() + 0x1872720))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ChangeMoveDir*))(Il2CppBase() + 0x18727A8))(this);
	}

};

}
