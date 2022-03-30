#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffPanic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffPanic"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(BuffPanic*))(Il2CppBase() + 0x459BF38))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffPanic*))(Il2CppBase() + 0x459BFB4))(this);
	}

};

}
