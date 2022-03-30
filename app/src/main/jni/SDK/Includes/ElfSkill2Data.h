#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElfSkill2Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElfSkill2Data"));
	}

	template <typename T = uintptr_t> T& bow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& arrow_rain_up() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& arrow_rain() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
