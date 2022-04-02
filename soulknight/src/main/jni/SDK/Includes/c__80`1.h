#pragma once
#include "Il2Cpp/Il2Cpp.h"

class c801
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__80`1"));
	}

	template <typename T = void*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__80_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__80_0(uintptr_t <p0>) {
		return ((T (*)(c801*, uintptr_t))(Il2CppBase() + 0x0))(this, <p0>);
	}

};

}
