#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElfSkill1Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElfSkill1Data"));
	}

	template <typename T = uintptr_t> T& bow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& vine() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
