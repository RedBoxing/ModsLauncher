#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FixScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FixScale"));
	}

	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isGlobal() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Update() {
		return ((T (*)(FixScale*))(Il2CppBase() + 0x450FA04))(this);
	}

};

}
