#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RotationLock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationLock"));
	}


	template <typename T = void> T Update() {
		return ((T (*)(RotationLock*))(Il2CppBase() + 0x1806568))(this);
	}

};

}
