#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampFloorEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampFloorEffect"));
	}


	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SwampFloorEffect*, uintptr_t))(Il2CppBase() + 0x18B66E0))(this, other);
	}

};

}
