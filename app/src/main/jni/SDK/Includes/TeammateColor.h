#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TeammateColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeammateColor"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& PColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& P1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& P2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& P3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& P4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}


};

}
