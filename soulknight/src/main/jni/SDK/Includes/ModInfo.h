#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ModInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModInfo"));
	}

	template <typename T = uintptr_t> T& attributeType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& operand() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& factor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& max() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
