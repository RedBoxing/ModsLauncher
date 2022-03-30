#pragma once
#include "Il2Cpp/Il2Cpp.h"

class c
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c"));
	}

	template <typename T = uintptr_t> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__20_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T Updateb__20_0(uintptr_t d) {
		return ((T (*)(c*, uintptr_t))(Il2CppBase() + 0x187C9E8))(this, d);
	}

};

}
