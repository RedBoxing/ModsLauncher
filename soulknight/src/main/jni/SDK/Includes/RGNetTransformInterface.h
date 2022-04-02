#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGNetTransformInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGNetTransformInterface"));
	}


	template <typename T = void> T OnReady() {
		return ((T (*)(RGNetTransformInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
