#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NailReleaseModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NailReleaseModel"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
