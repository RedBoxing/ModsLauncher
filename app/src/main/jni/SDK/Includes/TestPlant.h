#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TestPlant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TestPlant"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
