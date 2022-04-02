#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HandState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HandState"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& shouldFlip() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
