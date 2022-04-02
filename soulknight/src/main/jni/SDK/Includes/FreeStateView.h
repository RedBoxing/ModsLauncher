#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FreeStateView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreeStateView"));
	}

	template <typename T = uintptr_t> T& stateText() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& modeName() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
