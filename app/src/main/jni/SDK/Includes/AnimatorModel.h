#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimatorModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorModel"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& animatorController() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
