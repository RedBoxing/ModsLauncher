#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomPickable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomPickable"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& itemDistribution() {
		return *(T*)((uintptr_t)this + 0xD0);
	}


};

}
