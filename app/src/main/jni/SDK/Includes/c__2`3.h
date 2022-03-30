#pragma once
#include "Il2Cpp/Il2Cpp.h"

class c23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__2`3"));
	}

	template <typename T = void*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__2_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__2_0(uintptr_t <p0>, uintptr_t <p1>, uintptr_t <p2>) {
		return ((T (*)(c23*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, <p0>, <p1>, <p2>);
	}

};

}
