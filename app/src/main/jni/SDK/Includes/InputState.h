#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputState"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
