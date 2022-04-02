#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MockRoomObjectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MockRoomObjectManager"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(MockRoomObjectManager*))(Il2CppBase() + 0x41F5B0C))(this);
	}

};

}
