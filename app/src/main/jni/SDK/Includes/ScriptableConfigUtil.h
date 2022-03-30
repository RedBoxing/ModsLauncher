#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ScriptableConfigUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScriptableConfigUtil"));
	}


	template <typename T = uintptr_t> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}

};

}
