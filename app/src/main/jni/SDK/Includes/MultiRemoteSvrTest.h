#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRemoteSvrTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRemoteSvrTest"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(MultiRemoteSvrTest*))(Il2CppBase() + 0x43724B4))(this);
	}
	template <typename T = void> T TestFunc() {
		return ((T (*)(MultiRemoteSvrTest*))(Il2CppBase() + 0x4372510))(this);
	}
	template <typename T = uintptr_t> T testArena() {
		return ((T (*)(MultiRemoteSvrTest*))(Il2CppBase() + 0x4372570))(this);
	}

};

}
