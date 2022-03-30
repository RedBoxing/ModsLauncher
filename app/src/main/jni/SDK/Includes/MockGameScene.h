#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MockGameScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MockGameScene"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(MockGameScene*))(Il2CppBase() + 0x41F5900))(this);
	}

};

}
