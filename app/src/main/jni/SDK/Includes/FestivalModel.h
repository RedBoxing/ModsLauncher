#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FestivalModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FestivalModel"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isInversed() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
