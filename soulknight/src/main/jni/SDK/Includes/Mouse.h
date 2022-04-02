#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Mouse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Mouse"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(Mouse*))(Il2CppBase() + 0x41FAC40))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Mouse*))(Il2CppBase() + 0x41FAC9C))(this);
	}

};

}
