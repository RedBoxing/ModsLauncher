#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KeyboardSetup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyboardSetup"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(KeyboardSetup*))(Il2CppBase() + 0x4256D30))(this);
	}

};

}
