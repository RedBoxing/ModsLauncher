#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffPanic1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffPanic1"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BuffPanic1*))(Il2CppBase() + 0x459BFBC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffPanic1*))(Il2CppBase() + 0x459C018))(this);
	}

};

}
