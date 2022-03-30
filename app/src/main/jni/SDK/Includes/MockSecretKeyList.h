#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MockSecretKeyList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MockSecretKeyList"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(MockSecretKeyList*))(Il2CppBase() + 0x41F5CEC))(this);
	}

};

}
