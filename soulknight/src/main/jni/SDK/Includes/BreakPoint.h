#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BreakPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BreakPoint"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& screenAspectRatio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& referenceResolution() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
