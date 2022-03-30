#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VirbateUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirbateUtil"));
	}


	template <typename T = void> static T Virbate(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x435CE68))(0, level);
	}

};

}
