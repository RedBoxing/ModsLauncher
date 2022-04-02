#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpecialButtonPressEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpecialButtonPressEvent"));
	}

	template <typename T = bool> T& down() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
