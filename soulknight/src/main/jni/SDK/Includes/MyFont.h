#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MyFont
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MyFont"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(MyFont*))(Il2CppBase() + 0x437E1E0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MyFont*))(Il2CppBase() + 0x437E23C))(this);
	}

};

}
