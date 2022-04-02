#pragma once
#include "Il2Cpp/Il2Cpp.h"

class c71
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__7`1"));
	}

	template <typename T = void*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__7_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T GetRandomWeightObjectb__7_0(int32_t total, uintptr_t current) {
		return ((T (*)(c71*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, total, current);
	}

};

}
