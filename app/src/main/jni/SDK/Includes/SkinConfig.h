#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinConfig"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppVector3>*> static T& chris_hat_pos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
