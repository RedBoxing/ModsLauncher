#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ServantInBattle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServantInBattle"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
