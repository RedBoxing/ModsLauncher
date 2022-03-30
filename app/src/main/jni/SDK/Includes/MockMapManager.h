#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MockMapManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MockMapManager"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(MockMapManager*))(Il2CppBase() + 0x41F5A4C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MockMapManager*))(Il2CppBase() + 0x41F5AA8))(this);
	}

};

}
