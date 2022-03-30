#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ColorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorManager"));
	}

	template <typename T = uintptr_t> static T& light_color() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& back_color() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}


};

}
