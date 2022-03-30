#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FairyModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FairyModel"));
	}

	template <typename T = uintptr_t> T& fairy() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
