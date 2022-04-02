#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimatorHash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorHash"));
	}

	template <typename T = int32_t> static T& Scroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
